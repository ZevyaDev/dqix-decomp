#include <globaldefs.h>

#if defined(jpn)
extern "C" unsigned int strlen(const char* arg0);
extern "C" int func_ov012_02185fd4(int arg0);
extern "C" int func_ov012_0218606c(const char* arg0, int arg1);

struct Struct_ov012_02185db4_2 {
    unsigned short unknown_0_0_ : 1;
    unsigned short unknown_0_1_ : 4;
    unsigned short unknown_0_5_ : 11;
};

struct Struct_ov012_02185db4 {
    unsigned int unknown_0_0_ : 12;
    Struct_ov012_02185db4_2* unknown_4_;
    unsigned char* unknown_8_;
};

inline int inline_ov012_02185db4(char arg0) {
    return (arg0 & 0x80) ? 2 : 1;
}

// JPN: func_ov012_02185db4
extern "C" ARM int func_ov012_02185db4(Struct_ov012_02185db4* arg0, const char* arg1) {
    int var19;
    int var0 = strlen(arg1);
    while (*arg1 != 0 || var0 > 2) {
        Struct_ov012_02185db4_2* var9;
        Struct_ov012_02185db4_2* var12;
        int var7;
        int var6;
        unsigned int var5;
        Struct_ov012_02185db4_2* var4;
        unsigned char* var3;
        Struct_ov012_02185db4_2* var2;
        int var1;
        const char* var17;
        var1 = arg0->unknown_0_0_;
        if (var1 > 0 && arg0->unknown_4_ != 0) {
            var2 = arg0->unknown_4_;
        } else {
            var2 = 0;
        }
        var3 = arg0->unknown_8_;
        var5 = func_ov012_02185fd4(((unsigned char)*arg1 << 8) | (unsigned char)arg1[1]);
        var6 = 0;
        var7 = var1 - 1;
        while (var6 <= var7) {
            int var8 = var6 + (var7 - var6 + 1) / 2;
            var9 = &var2[var8];
            unsigned char* var10 = var3 + var2[var8].unknown_0_5_;
            int var11 = (var10[0] << 8) | var10[1];
            if (var5 == var11) {
                var12 = var9;
                var4 = var9 - 1;
                while (var4 >= var2) {
                    unsigned char* var13 = var3 + var4->unknown_0_5_;
                    if (var5 != ((var13[0] << 8) | var13[1])) {
                        break;
                    }
                    var12 = var4;
                    var4--;
                }
                Struct_ov012_02185db4_2* var14 = var2 + var1;
                var4 = var12;
                while (var4 < var14) {
                    unsigned char* var15 = var3 + var4->unknown_0_5_;
                    if (var5 != ((var15[0] << 8) | var15[1])) {
                        break;
                    }
                    int var16;
                    var16 = var4->unknown_0_0_ ? var4->unknown_0_1_ * 2 : var4->unknown_0_1_;
                    if (var16 <= var0) {
                        var17 = arg1;
                        int var18;
                        for (; *var17 != 0 && var16 > 0; var15 += var19, var17 += var19, var16 -= var19) {
                            var19 = inline_ov012_02185db4(*var17);
                            if (func_ov012_02185fd4(func_ov012_0218606c(var17, var19)) != func_ov012_0218606c((const char*)var15, var19)) {
                                var18 = 0;
                                goto done;
                            }
                        }
                        var18 = 1;
                    done:
                        if (var18) {
                            goto found;
                        }
                    }
                    var4++;
                }
                var4 = 0;
                goto found;
            } else if (var5 < var11) {
                var7 = var8 - 1;
            } else {
                var6 = var8 + 1;
            }
        }
        var4 = 0;
    found:
        if (var4 != 0) {
            return 1;
        }
        int var20 = (*arg1 & 0x80) ? 2 : 1;
        arg1 += var20;
        var0 -= var20;
    }
    return 0;
}
#endif
