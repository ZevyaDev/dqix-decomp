#include <globaldefs.h>

#if defined(jpn)

#include <std_library_functions.h>

struct Struct_ov009_0218ad0c_2 {
    unsigned short unknown_0_0_ : 1;
    unsigned short unknown_0_1_ : 4;
    unsigned short unknown_0_5_ : 11;
};

struct Struct_ov009_0218ad0c_1 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    Struct_ov009_0218ad0c_2* unknown_4_;
    char* unknown_8_;
    char* unknown_c_;
    short unknown_10_;
};

struct Struct_ov009_0218ad0c {
    unsigned char unknown_0_[0xdc];
    Struct_ov009_0218ad0c_1 unknown_dc_;
    unsigned char unknown_f0_[0xd60 - 0xf0];
    unsigned int unknown_d60_;
    unsigned char unknown_d64_[3];
    unsigned char unknown_d67_;
    unsigned char unknown_d68_[0xc];
    char unknown_d74_[2][11];
};

extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_02001aec(const void* arg0, const void* arg1, unsigned int arg2);
extern "C" int func_ov009_0218b150(int arg0);
extern "C" int func_ov009_0218b1e8(const char* arg0, int arg1);
extern char data_ov009_0218bc59[];

// JPN: func_ov009_0218ad0c
extern "C" ARM void func_ov009_0218ad0c(Struct_ov009_0218ad0c* arg0) {
    char var0[11];
    int var1;
    int var5;
    int var6;
    int var8;
    char* var7;
    int var10;
    Struct_ov009_0218ad0c_2* var13;
    int var12;
    Struct_ov009_0218ad0c_2* var24;
    unsigned int var15;
    Struct_ov009_0218ad0c_2* var11;
    int var16;
    int var17;
    int var18;
    char* var19;
    unsigned int var20;
    Struct_ov009_0218ad0c_2* var21;
    char* var23;
    int var26;
    int var27;
    char* var28;
    char* var14;
    char* var25;
    int var29;
    int var30;
    int var4;
    char* var3;
    __clear(var0, 11);
    memcpy(var0, arg0->unknown_d74_[arg0->unknown_d67_], 11);
    for (var1 = 1; var1 < 5; var1++) {
        char var2[3];
        __clear(var2, 3);
        memcpy(var2, var0 + var1 * 2, 2);
        if (func_02001aec(var2, data_ov009_0218bc59, 2) == 0) {
            memset(var0 + var1 * 2, 0, 11 - var1 * 2);
            break;
        }
    }
    var3 = var0;
    var4 = strlen(var3);
    var7 = arg0->unknown_dc_.unknown_c_;
    if (var7 == NULL || (var8 = arg0->unknown_dc_.unknown_10_) == 0) {
        var6 = 0;
    } else {
        while (*var7 != 0 && var8 > 0) {
            var10 = strlen(var7);
            if (var4 == var10 && strcmp(var0, var7) == 0) {
                var6 = 1;
                goto found1;
            }
            var8 -= var10 + 1;
            var7 += var10 + 1;
        }
        var6 = 0;
    }
found1:
    if (var6 != 0) {
        var5 = 1;
        goto done;
    }
    while (*var3 != 0 || var4 > 2) {
        var12 = arg0->unknown_dc_.unknown_0_0_;
        if (var12 <= 0 || (var13 = arg0->unknown_dc_.unknown_4_) == NULL) {
            var13 = NULL;
        }
        var14 = arg0->unknown_dc_.unknown_8_;
        var15 = func_ov009_0218b150(((unsigned char)var3[0] << 8) | (unsigned char)var3[1]);
        var16 = 0;
        var17 = var12 - 1;
        while (var16 <= var17) {
            var18 = var16 + (var17 - var16 + 1) / 2;
            var19 = var14 + var13[var18].unknown_0_5_;
            var20 = ((unsigned char)var19[0] << 8) | (unsigned char)var19[1];
            var21 = &var13[var18];
            if (var15 == var20) {
                var11 = var21 - 1;
                while (var11 >= var13) {
                    var23 = var14 + var11->unknown_0_5_;
                    if (var15 != (((unsigned char)var23[0] << 8) | (unsigned char)var23[1])) {
                        break;
                    }
                    var21 = var11;
                    var11--;
                }
                var24 = var13 + var12;
                for (var11 = var21; var11 < var24; var11++) {
                    var25 = var14 + var11->unknown_0_5_;
                    if (var15 != (((unsigned char)var25[0] << 8) | (unsigned char)var25[1])) {
                        break;
                    }
                    var26 = var11->unknown_0_0_ ? var11->unknown_0_1_ * 2 : var11->unknown_0_1_;
                    if (var26 <= var4) {
                        var28 = var3;
                        while (*var28 != 0 && var26 > 0) {
                            var29 = (*var28 & 0x80) ? 2 : 1;
                            if (func_ov009_0218b150(func_ov009_0218b1e8(var28, var29)) != func_ov009_0218b1e8(var25, var29)) {
                                var27 = 0;
                                goto cmp;
                            }
                            var25 += var29;
                            var28 += var29;
                            var26 -= var29;
                        }
                        var27 = 1;
                    cmp:
                        if (var27 != 0) {
                            goto found2;
                        }
                    }
                }
                var11 = NULL;
                goto found2;
            }
            if (var15 < var20) {
                var17 = var18 - 1;
            } else {
                var16 = var18 + 1;
            }
        }
        var11 = NULL;
    found2:
        if (var11 != NULL) {
            var5 = 1;
            goto done;
        }
        var30 = (*var3 & 0x80) ? 2 : 1;
        var3 += var30;
        var4 -= var30;
    }
    var5 = 0;
done:
    if (var5 != 0) {
        arg0->unknown_d60_ |= 0x400000;
        return;
    }
    char var31[3];
    __clear(var31, 3);
    memcpy(var31, arg0->unknown_d74_[arg0->unknown_d67_], 2);
    if (func_02001aec(var31, data_ov009_0218bc59, 2) == 0) {
        arg0->unknown_d60_ &= ~0x800;
    } else {
        arg0->unknown_d60_ |= 0x800;
    }
    if (arg0->unknown_d60_ & 0x800) {
        for (int var32 = 1; var32 < 5; var32++) {
            memcpy(var31, arg0->unknown_d74_[arg0->unknown_d67_] + var32 * 2, 2);
            if (func_02001aec(var31, data_ov009_0218bc59, 2) == 0) {
                memset(arg0->unknown_d74_[arg0->unknown_d67_] + var32 * 2, 0, 11 - var32 * 2);
                break;
            }
        }
    }
}

#endif
