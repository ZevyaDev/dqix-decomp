#include <globaldefs.h>
#if defined(jpn)
#define data_020f1ee8 data_020f2054
#define data_020f1eec data_020f2058
#define data_020f1ef8 data_020f2064
#define data_020f1f00 data_020f206c
#define data_020f1f14 data_020f2080
#define data_0210cf84 data_0210cc3c
#endif

struct Struct_020f1f14 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned int unknown_14_;
};

typedef unsigned int (*Type_020f1ee8)(unsigned int arg0, int arg1, int arg2);
typedef int (*Type_020f1eec)(unsigned int arg0);

extern Type_020f1ee8 data_020f1ee8;
extern Type_020f1eec data_020f1eec;

static Struct_020f1f14 data_020f1f14[5] = {
    { 0xffffffff, 0xffffffff, 0, 0, 0, 0xffff, 0x00000 },
    { 0xffffffff, 0xffffffff, 0, 1, 1, 0xffff, 0x20000 },
    { 0xffffffff, 0xffffffff, 0, 1, 2, 0xffff, 0x30000 },
    { 0xffffffff, 0xffffffff, 0, 0, 3, 0xffff, 0x40000 },
    { 0xffffffff, 0xffffffff, 0, 0, 4, 0xffff, 0x60000 },
};

static Struct_020f1f14* data_020f1ef8[2] = {
    &data_020f1f14[0], &data_020f1f14[3],
};

static Struct_020f1f14* data_020f1f00[5] = {
    &data_020f1f14[4], &data_020f1f14[3], &data_020f1f14[0], &data_020f1f14[2], &data_020f1f14[1],
};

static unsigned short data_0210cf84;

extern "C" void func_020bb514(void);
extern "C" unsigned int func_020bb588(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb6f8(unsigned int arg0);

static inline Struct_020f1f14* inline_020bb588_2(int arg0) {
    return data_020f1f00[arg0];
}

static inline unsigned int inline_020bb588(const Struct_020f1f14* arg0) {
    return arg0->unknown_4_ - arg0->unknown_0_;
}

extern "C" ARM void func_020bb444(int arg0, int arg1, int arg2, int arg3, int arg4) {
    data_020f1f00[0] = &data_020f1f14[arg0];
    data_020f1f00[1] = &data_020f1f14[arg1];
    data_020f1f00[2] = &data_020f1f14[arg2];
    data_020f1f00[3] = &data_020f1f14[arg3];
    data_020f1f00[4] = &data_020f1f14[arg4];
}

extern "C" ARM void func_020bb48c(unsigned int arg0, int arg1) {
    if (arg0 <= 2)
        func_020bb444(4, 3, 2, 0, 1);
    else
        func_020bb444(4, 3, 0, 2, 1);

    data_0210cf84 = arg0;
    func_020bb514();

    if (arg1) {
        data_020f1ee8 = func_020bb588;
        data_020f1eec = func_020bb6f8;
    }
}

extern "C" ARM void func_020bb514(void) {
    int var0;
    Struct_020f1f14* var1 = data_020f1f14;
    int var2 = data_0210cf84;
    if (data_0210cf84 > 1)
        var2++;
    for (var0 = 0; var0 < 5; var0++, var1++) {
        if (var0 < var2)
            var1->unknown_8_ = 1;
        else
            var1->unknown_8_ = 0;

        if (var1->unknown_c_) {
            var1->unknown_0_ = 0;
            var1->unknown_4_ = 0x10000;
        } else {
            var1->unknown_0_ = 0;
            var1->unknown_4_ = 0x20000;
        }
    }
}

extern "C" ARM unsigned int func_020bb588(unsigned int arg0, int arg1, int arg2) {
    unsigned int var0;
    unsigned int var1;

    if (arg0 == 0)
        var1 = 16;
    else
        var1 = (arg0 + 15) & ~15;

    if (var1 >= 0x7fff0)
        return 0;

    int var2;
    if (arg1) {
        Struct_020f1f14* var3;
        Struct_020f1f14* var4;
        for (int var5 = 0; var5 < 2; var5++) {
            var4 = data_020f1ef8[var5];
            if (!var4->unknown_8_ || inline_020bb588(var4) < var1)
                continue;

            switch (var4->unknown_10_) {
            case 0:
                var3 = &data_020f1f14[1];
                break;
            case 3:
                var3 = &data_020f1f14[2];
                break;
            default:
                var3 = NULL;
                break;
            }

            if (!var3->unknown_8_ || inline_020bb588(var3) < (var1 / 2))
                continue;

            unsigned int var6 = var4->unknown_0_;
            var4->unknown_0_ += var1;
            var3->unknown_0_ += var1 / 2;
            var0 = var6 + var4->unknown_14_;
            var2 = 1;
            goto complete;
        }
        var2 = 0;
    } else {
        for (int var7 = 0; var7 < 5; var7++) {
            Struct_020f1f14* var8 = inline_020bb588_2(var7);
            if (!var8->unknown_8_ || inline_020bb588(var8) < var1)
                continue;
            var8->unknown_4_ -= var1;
            var0 = var8->unknown_4_ + var8->unknown_14_;
            var2 = 1;
            goto complete;
        }
        var2 = 0;
    }

complete:
    if (!var2)
        return 0;
    return ((var1 >> 4) << 16) | (unsigned short)(var0 >> 3) | (arg1 << 31);
}

extern "C" ARM int func_020bb6f8(unsigned int arg0) {
    return 0;
}

extern "C" ARM void func_020bb700(unsigned int* arg0) {
    int var0;
    Struct_020f1f14* var1 = data_020f1f14;
    for (var0 = 0; var0 < 5; var1++, var0++) {
        *(arg0 + 2 * var0) = var1->unknown_0_;
        *(arg0 + 2 * var0 + 1) = var1->unknown_4_;
    }
}

extern "C" ARM void func_020bb740(const unsigned int* arg0) {
    int var0 = 0;
    int var1 = 0;
    Struct_020f1f14* var2 = data_020f1f14;
    for (; var0 < 5; var1 += 2, var0++, var2++) {
        var2->unknown_0_ = *(arg0 + var1);
        var2->unknown_4_ = *(arg0 + var1 + 1);
    }
}
