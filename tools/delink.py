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

    mapped = {(s[5], s[1]) for s in symbols if name(s) in (b"$a", b"$t", b"$d")}
    functions = [(s[5], s[1], s[1] + s[2]) for s in symbols
                 if s[3] & 0xf == STT_FUNC and s[5] < len(sections) and sections[s[5]][2] & SHF_EXECINSTR]
    inside = [i for i, s in enumerate(symbols)
              if s[3] & 0xf == STT_OBJECT and s[5] < len(sections) and sections[s[5]][2] & SHF_EXECINSTR
              and any(f[0] == s[5] and f[1] < s[1] < f[2] for f in functions)]
    if not inside:
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
    new_symtab = b"".join(packed[:first_global] + added + packed[first_global:])

    out = bytearray(data)
    for index, section in enumerate(sections):
        if section[1] in (SHT_REL, SHT_RELA) and section[6] == symtab_index:
            entry = 8 if section[1] == SHT_REL else 12
            for offset in range(section[4], section[4] + section[5], entry):
                info, = struct.unpack_from("<I", out, offset + 4)
                if info >> 8 >= first_global:
                    struct.pack_into("<I", out, offset + 4, ((info >> 8) + len(added)) << 8 | info & 0xff)

    def append(blob):
        while len(out) % 4:
            out.append(0)
        offset = len(out)
        out.extend(blob)
        return offset

    strtab[4], strtab[5] = append(strings), len(strings)
    symtab[4], symtab[5] = append(new_symtab), len(new_symtab)
    symtab[7] = first_global + len(added)
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
