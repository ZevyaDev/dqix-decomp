#if defined(jpn)
#include <globaldefs.h>

typedef unsigned char u8;
typedef unsigned int u32;

// DS Protect 1.10 (JPN), encryptor.c: decrypts a range of encrypted code in place. The range
// is bracketed by two copies of a key word, from which the RC4 key is derived.

void CleanInvalidateCacheRange(const void *startAddr, u32 numBytes);
void InvalidateInstructionCacheRange(const void *startAddr, u32 numBytes);

extern "C" u32 func_ov029_021d9640(void *key, void *dst, void *src, u32 size);
extern "C" u32 func_ov029_021d9698(void *key, void *dst, void *src, u32 size);

// JPN: func_ov029_021d9300
extern "C" void func_ov029_021d9300(u32 *addr) {
    u8 key[16];
    int i;
    u32 keyIns;
    u32 size;

    // First key is immediately prior to start address
    keyIns = addr[-1];

    // Derive RC4 key
    for (i = 0; i < 16; i++) {
        key[i] = keyIns >> ((i % 4) * 8);
        if (i % 15 == 0) {
            key[i] ^= 0xFF;
        }
    }

    // Search forward for second key to determine size
    size = 0;
    while (keyIns != addr[size]) {
        size++;
    }

    if (size > 0) {
        func_ov029_021d9698(&key[0], addr, addr, size * 4);
    }

    CleanInvalidateCacheRange(addr, size * 4);
    InvalidateInstructionCacheRange(addr, size * 4);
}

// JPN: func_ov029_021d93cc
extern "C" void func_ov029_021d93cc(u32 *addr) {
    u8 key[16];
    int i;
    u32 keyIns;
    u32 size;

    // Second key is immediately following the end address
    keyIns = addr[1];

    // Derive RC4 key
    for (i = 0; i < 16; i++) {
        key[i] = keyIns >> ((i % 4) * 8);
        if (i % 15 == 0) {
            key[i] ^= 0xFF;
        }
    }

    // Search backward for first key
    while (*addr != keyIns) {
        addr--;
    }

    // The start address comes immediately after the first key
    addr++;

    // Search forward from start to determine size
    size = 0;
    while (keyIns != addr[size]) {
        size++;
    }

    if (size > 0) {
        func_ov029_021d9640(&key[0], addr, addr, size * 4);
    }

    CleanInvalidateCacheRange(addr, size * 4);
    InvalidateInstructionCacheRange(addr, size * 4);
}
#endif
