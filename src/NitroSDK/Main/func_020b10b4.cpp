#pragma ipa file
#include <globaldefs.h>

struct Struct_020e91e0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

extern Struct_020e91e0 data_020e91e0[4][4];

static inline unsigned int inline_020b10b4(unsigned int arg0) {
    asm {
        clz arg0, arg0
    }
    return arg0;
}

static inline int inline_020b10b4_2(unsigned int arg0) {
    return (int)(31 - inline_020b10b4(arg0));
}

static inline Struct_020e91e0* inline_020b10b4_3(int arg0, int arg1) {
    int var0 = (arg0 >= 8) ? 3 : inline_020b10b4_2((unsigned long)arg0);
    int var1 = (arg1 >= 8) ? 3 : inline_020b10b4_2((unsigned long)arg1);

    return &data_020e91e0[var1][var0];
}

// USA: func_020b10b4
extern "C" ARM unsigned int func_020b10b4(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3,
                                          unsigned int arg4, unsigned int arg5) {
    const unsigned int var0 = (unsigned int)(~0);
    unsigned int var1 = 0;

    for (;;) {
        const unsigned int var2 = var0 << arg4;
        const unsigned int var3 = var0 << arg5;
        const unsigned int var4 = arg2 & var2;
        const unsigned int var5 = arg3 & var3;

        if (var5 <= arg1) {
            var1 += arg2 * var5;

            if (var4 <= arg0) {
                var1 += (arg3 - var5) * var4;

                arg0 -= var4;
                arg1 -= var5;
                arg2 -= var4;
                arg3 -= var5;
            } else {
                arg1 -= var5;
                arg2 = var4;
                arg3 -= var5;
            }
        } else {
            const unsigned int var6 = ~var3;

            if (var4 <= arg0) {
                var1 += (unsigned int)(var4 * var5);

                arg0 -= var4;
                arg2 -= var4;
                arg3 = var5;
            } else {
                const unsigned int var7 = ~var2;
                var1 += (unsigned int)(arg1 & var3) * var4;
                var1 += (unsigned int)(arg0 & var2) << arg5;
                var1 += (unsigned int)(arg1 & var6) << arg4;
                var1 += (unsigned int)(arg0 & var7);
                return var1;
            }
        }

        {
            const Struct_020e91e0* var8 = inline_020b10b4_3((int)arg2, (int)arg3);

            arg4 = var8->unknown_0_;
            arg5 = var8->unknown_1_;
        }
    }
}
