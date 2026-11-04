import os
import struct
import subprocess
import sys

SHT_SYMTAB = 2
SHT_REL = 9
SHT_RELA = 4
SHF_EXECINSTR = 4
STT_OBJECT = 1
STT_FUNC = 2


def read_sections(data):
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum = struct.unpack_from("<HH", data, 0x2e)
    return [list(struct.unpack_from("<10I", data, shoff + i * shentsize)) for i in range(shnum)]


def add_data_mapping_symbols(path):
    data = open(path, "rb").read()
    sections = read_sections(data)
    symtab_index = next(i for i, s in enumerate(sections) if s[1] == SHT_SYMTAB)
    symtab = sections[symtab_index]
    strtab = sections[symtab[6]]
    strings = data[strtab[4]:strtab[4] + strtab[5]]
    count = symtab[5] // 16
    symbols = [struct.unpack_from("<IIIBBH", data, symtab[4] + i * 16) for i in range(count)]

    def name(sym):
        return strings[sym[0]:strings.index(b"\0", sym[0])]

    def in_code(sym):
        return sym[5] < len(sections) and sections[sym[5]][2] & SHF_EXECINSTR

    mapped = {(s[5], s[1]) for s in symbols if name(s) in (b"$a", b"$t", b"$d")}
    functions = [(s[5], s[1], s[1] + s[2]) for s in symbols if s[3] & 0xf == STT_FUNC and in_code(s)]
    inside = [i for i, s in enumerate(symbols)
              if s[3] & 0xf == STT_OBJECT and in_code(s)
              and any(f[0] == s[5] and f[1] < s[1] < f[2] for f in functions)]
    stray = {i for i, s in enumerate(symbols)
             if name(s) == b"$d" and in_code(s)
             and not any(f[0] == s[5] and f[1] <= s[1] < f[2] for f in functions)}
    if not inside and not stray:
        return False
    for i in inside:
        s = symbols[i]
        symbols[i] = (s[0], s[1], 0, s[3] & 0xf0, s[4], s[5])
    wanted = sorted({(symbols[i][5], symbols[i][1]) for i in inside} - mapped)

    name_offset = len(strings)
    strings += b"$d\0"
    first_global = symtab[7]
    added = [struct.pack("<IIIBBH", name_offset, value, 0, 0, 0, shndx) for shndx, value in wanted]
    packed = [struct.pack("<IIIBBH", *s) for s in symbols]
    locals_kept = [i for i in range(first_global) if i not in stray]
    globals_kept = [i for i in range(first_global, count) if i not in stray]
    remap = {old: new for new, old in enumerate(locals_kept)}
    remap.update({old: len(locals_kept) + len(added) + new for new, old in enumerate(globals_kept)})
    new_symtab = b"".join([packed[i] for i in locals_kept] + added + [packed[i] for i in globals_kept])

    out = bytearray(data)
    for index, section in enumerate(sections):
        if section[1] in (SHT_REL, SHT_RELA) and section[6] == symtab_index:
            entry = 8 if section[1] == SHT_REL else 12
            for offset in range(section[4], section[4] + section[5], entry):
                info, = struct.unpack_from("<I", out, offset + 4)
                struct.pack_into("<I", out, offset + 4, remap[info >> 8] << 8 | info & 0xff)

    def append(blob):
        while len(out) % 4:
            out.append(0)
        offset = len(out)
        out.extend(blob)
        return offset

    strtab[4], strtab[5] = append(strings), len(strings)
    symtab[4], symtab[5] = append(new_symtab), len(new_symtab)
    symtab[7] = len(locals_kept) + len(added)
    shoff = append(b"".join(struct.pack("<10I", *s) for s in sections))
    struct.pack_into("<I", out, 0x20, shoff)
    with open(path, "wb") as fh:
        fh.write(out)
    return True


def main():
    dsd, config_path, delinks_path = sys.argv[1:4]
    result = subprocess.run([dsd, "delink", "--config-path", config_path])
    if result.returncode:
        sys.exit(result.returncode)
    for root, _, files in os.walk(delinks_path):
        for file in files:
            if file.endswith(".o"):
                add_data_mapping_symbols(os.path.join(root, file))


if __name__ == "__main__":
    main()
