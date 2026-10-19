#if defined(jpn)
#include <globaldefs.h>

typedef unsigned char u8;
typedef unsigned long u32;

// DS Protect 1.10 (JPN), rc4.c: the library's modified RC4, which encrypts the first two bytes
// of each instruction with the key stream and substitutes the third through a fixed S-box.

#define RC4_KEY_SIZE (16)

#define RC4_SBOX_XOR (0x01)

typedef struct {
    int i;
    int j;
    u8 S[256];
} RC4_Ctx;

static void func_ov029_021d94b4(RC4_Ctx *ctx, const void *key, u32 keyLen);
static u8 func_ov029_021d9528(RC4_Ctx *ctx);
static u32 func_ov029_021d9574(u8 *sbox);
static u32 func_ov029_021d9598(RC4_Ctx *ctx, void *src, void *dst, u32 size);
static u32 func_ov029_021d9634(RC4_Ctx *ctx, void *src, void *dst, u32 size);

// JPN: func_ov029_021d94b4
static void func_ov029_021d94b4(RC4_Ctx *ctx, const void *key, u32 keyLen) {
    u8 tmp1;
    u8 tmp2;
    int Ki;
    u8 Si;
    int i;
    int j;

    Ki = 0;
    Si = 0;
    ctx->i = 0;
    ctx->j = 0;

    for (j = 0; j < 256; j++) {
        ctx->S[j] = j;
    }

    // Modification to RC4: i = 255 -> 0, instead of 0 -> 255
    for (i = 255; i >= 0; i--) {
        tmp1 = ctx->S[i];
        Si = Si + ((u8 *)key)[Ki] + tmp1;
        tmp2 = ctx->S[Si];

        ctx->S[Si] = tmp1;
        ctx->S[i] = tmp2;

        Ki++;
        if (Ki >= keyLen) {
            Ki = 0;
        }
    }
}

// JPN: func_ov029_021d9528
static u8 func_ov029_021d9528(RC4_Ctx *ctx) {
    u8 i;
    u8 ival;
    u8 j;
    u8 jval;

    i = ctx->i + 1;
    ival = ctx->S[i];
    j = ival + ctx->j;
    jval = ctx->S[j];

    ctx->i = i;
    ctx->j = j;

    ctx->S[j] = ival;
    ctx->S[i] = jval;

    return ctx->S[(ival + jval) & 0xFF];
}

// JPN: func_ov029_021d9574
static u32 func_ov029_021d9574(u8 *sbox) {
    int i;
    for (i = 0; i < 256; i++) {
        sbox[i] = (u8)i ^ RC4_SBOX_XOR;
    }

    return 0;
}

// JPN: func_ov029_021d9598
static u32 func_ov029_021d9598(RC4_Ctx *ctx, void *src, void *dst, u32 size) {
    u8 sbox[256];
    u32 offset;
    u8 *srcBytes;
    u8 *dstBytes;

    if (size & 3) {
        return -1;
    }

    srcBytes = (u8 *)src;
    dstBytes = (u8 *)dst;

    func_ov029_021d9574(&sbox[0]);

    for (offset = 0; offset < size; offset += 4) {
        dstBytes[offset] = srcBytes[offset] ^ func_ov029_021d9528(ctx);
        dstBytes[offset + 1] = srcBytes[offset + 1] ^ func_ov029_021d9528(ctx);
        dstBytes[offset + 2] = sbox[srcBytes[offset + 2]];
        dstBytes[offset + 3] = srcBytes[offset + 3];
    }

    return 0;
}

// JPN: func_ov029_021d9634
static u32 func_ov029_021d9634(RC4_Ctx *ctx, void *src, void *dst, u32 size) {
    // Identical to encryption
    return func_ov029_021d9598(ctx, src, dst, size);
}

// JPN: func_ov029_021d9640
u32 func_ov029_021d9640(void *key, void *dst, void *src, u32 size) {
    RC4_Ctx ctx;
    func_ov029_021d94b4(&ctx, key, RC4_KEY_SIZE);
    // Must coerce output to -1 or 0 like this to match
    return func_ov029_021d9598(&ctx, dst, src, size) == -1 ? -1 : 0;
}

// JPN: func_ov029_021d9698
u32 func_ov029_021d9698(void *key, void *dst, void *src, u32 size) {
    RC4_Ctx ctx;
    func_ov029_021d94b4(&ctx, key, RC4_KEY_SIZE);
    // Must coerce output to -1 or 0 like this to match
    return func_ov029_021d9634(&ctx, dst, src, size) == -1 ? -1 : 0;
}
#endif
