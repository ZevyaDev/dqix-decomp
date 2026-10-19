#include <globaldefs.h>

// DS Protect 1.26, encryptor.c: the code decoder. The __sinit_ov029_* stubs pass it tables of
// encoded functions, which it decodes in place before flushing them from the caches.

typedef unsigned char u8;
typedef unsigned long u32;

#define HW_CACHE_LINE_SIZE (32)

#define INS_OPCODE_LINKBIT (0x01)
#define INS_OPCODE_MASK    (0xFF000000)
#define INS_OPCODE_SHIFT   (24)
#define INS_OPERANDS_MASK  (0x00FFFFFF)

#define ENC_VAL_1 (0x1200)
#define ENC_VAL_2 ((ENC_VAL_1 >> 2) + 2)

#define ENC_XOR_START (0xF03852CB)
#define ENC_XOR_MASK  (0x00FFFFFF)

typedef struct {
    u32 obfsAddr;
    u32 obfsSize;
} FuncInfo;

enum {
    INS_TYPE_OTHER = 0,
    INS_TYPE_BLXIMM,
    INS_TYPE_BL,
    INS_TYPE_B
};

extern u8 data_ov029_021da8e0[4];

static void func_ov029_021d97c0(register void *startAddr, register u32 numBytes);

// DC_FlushRange and IC_InvalidateRange (NitroSDK os_cache.c) merged into one loop.
// USA: func_ov029_021d97c0
static asm void func_ov029_021d97c0(register void *startAddr, register u32 numBytes) {
    mov  ip, #0
    add  r1, r1, r0
    bic  r0, r0, #HW_CACHE_LINE_SIZE - 1

@1:
    mcr  p15, 0, ip, c7, c10, 4  /* Wait write buffer empty */

    mcr  p15, 0, r0, c7, c14, 1  /* DC flush */
    mcr  p15, 0, r0, c7, c5, 1   /* IC invalidate */

    add  r0, r0, #HW_CACHE_LINE_SIZE
    cmp  r0, r1
    blt  @1

    bx   lr
}

// USA: func_ov029_021d97e8
u32 func_ov029_021d97e8(u32 instruction) {
    u8 opcode;

    opcode = instruction >> INS_OPCODE_SHIFT;

    // Branch instruction
    if ((opcode & 0x0E) == 0x0A) {
        // BLX immediate type
        if ((opcode & 0xF0) == 0xF0) {
            return INS_TYPE_BLXIMM;
        }

        // Link bit
        if (opcode & INS_OPCODE_LINKBIT) {
            return INS_TYPE_BL;
        } else {
            return INS_TYPE_B;
        }
    }

    return INS_TYPE_OTHER;
}

// USA: func_ov029_021d9824
void func_ov029_021d9824(FuncInfo *functions) {
    u32 *addr;
    u32 size;
    u32 *endAddr;
    u32 key;

    if (functions == NULL || functions->obfsAddr == 0) {
        return;
    }

    do {
        key = ENC_XOR_START;

        addr = (u32 *)functions->obfsAddr;
        size = functions->obfsSize - (u32)&data_ov029_021da8e0 - ENC_VAL_1;

        if (addr == NULL) {
            break;
        }

        addr = (u32 *)((u8 *)addr - ENC_VAL_1);
        endAddr = addr + (size / 4);

        for (; addr < endAddr; addr++) {
            switch (func_ov029_021d97e8(*addr)) {
            case INS_TYPE_BLXIMM:
            case INS_TYPE_B: {
                u32 opcode = (*addr & INS_OPCODE_MASK) ^ (INS_OPCODE_LINKBIT << INS_OPCODE_SHIFT);
                u32 operands = ((*addr & INS_OPERANDS_MASK) - ENC_VAL_2) & INS_OPERANDS_MASK;

                *addr = opcode | operands;

                key ^= *addr >> INS_OPCODE_SHIFT;
                key &= ENC_XOR_MASK;
            } break;

            case INS_TYPE_BL:
                // Link bit
                *addr ^= INS_OPCODE_LINKBIT << INS_OPCODE_SHIFT;
                // Fall through
            default:
                *addr ^= key;

                key ^= *addr;
                key ^= *addr >> 8;
                key &= ENC_XOR_MASK;
                break;
            }
        }

        func_ov029_021d97c0((void *)(functions->obfsAddr - ENC_VAL_1), size);

        functions++;
    } while (functions->obfsAddr != 0);
}
