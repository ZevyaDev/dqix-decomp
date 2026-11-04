#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)
struct Struct_02095d18 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short unknown_4_;
    short unknown_6_;
    unsigned short* unknown_8_;
    char* unknown_c_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_0209651c(Struct_0208cb08* arg0);
extern "C" Struct_02095d18* func_020429bc(int arg0);

extern char data_020f151f[];

static inline int inline_02095d18(int arg0, int arg1, int arg2) {
    return arg0 >= arg1 && arg0 <= arg1 + arg2 ? 1 : 0;
}

// JPN: func_02095d18
extern "C" ARM void func_02095d18(Struct_0208cb08* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    for (unsigned char var1 = 0; var1 < arg0->unknown_54_; var1++) {
        if (var0->GetTaskStatus(arg0->unknown_14_[var1]) == 0) return;
    }
    void* var2;
    unsigned int var3;
    int var4 = 1;
    var0->GetLoadedFileByID(arg0->unknown_14_[0], &var2, &var3);
    if (var2 == NULL || var3 == 0) {
        for (unsigned char var1 = 0; var1 < arg0->unknown_54_; var1++) {
            var0->RemoveTask(arg0->unknown_14_[var1]);
            arg0->unknown_14_[var1] = -1;
        }
        func_0209651c(arg0);
        return;
    }
    Struct_02095d18* var5[8];
    __clear(var5, 0x20);
    int var6 = arg0->unknown_34_;
    if (var6 == 5000 || var6 == 502 || var6 == 1000 || var6 == 0x200 || var6 == 0x6f || var6 == 0x210 ||
        var6 == 510) {
        var5[0] = (Struct_02095d18*)var2;
    } else if (inline_02095d18(var6, 0x31, 0x31)) {
        var5[0] = (Struct_02095d18*)var2;
        var0->GetLoadedFileByID(arg0->unknown_14_[1], &var2, &var3);
        var5[1] = (Struct_02095d18*)var2;
        var4 = 2;
    } else {
        var4 = 0;
        if (var6 == 505) {
            const void* var7[16];
            unsigned int var8[16];
            __clear(var7, 0x40);
            __clear(var8, 0x40);
            int var9 = FindFilesInNarcBySubstring(var2, data_020f151f, var7, var8, 0x10);
            if (var9 != 0) {
                for (int var10 = 0; var10 < var9; var10++) {
                    var5[var4] = (Struct_02095d18*)var7[var10];
                    var4++;
                }
            }
            var0->GetLoadedFileByID(arg0->unknown_14_[1], &var2, &var3);
            var5[var4] = (Struct_02095d18*)var2;
            var4++;
        } else {
            const void* var7[16];
            unsigned int var8[16];
            __clear(var7, 0x40);
            __clear(var8, 0x40);
            int var9 = FindFilesInNarcBySubstring(var2, data_020f151f, var7, var8, 0x10);
            if (var9 != 0) {
                for (int var10 = 0; var10 < var9; var10++) {
                    var5[var4] = (Struct_02095d18*)var7[var10];
                    var4++;
                }
            }
        }
    }
    int var11 = 0;
    int var12 = 1;
    for (unsigned char var1 = 0; var1 < var4; var1++) {
        if (var5[var1] != NULL) {
            var11 = var5[var1]->unknown_4_;
            var12 = 0;
            break;
        }
    }
    if (var12 != 0) {
        for (unsigned char var1 = 0; var1 < arg0->unknown_54_; var1++) {
            var0->RemoveTask(arg0->unknown_14_[var1]);
            arg0->unknown_14_[var1] = -1;
        }
        func_0209651c(arg0);
        return;
    }
    for (unsigned char var1 = 0; var1 < var4; var1++) {
        Struct_02095d18* var13 = var5[var1];
        if (var13 != NULL) {
            var13->unknown_8_ = (unsigned short*)((char*)var13 + (int)var13->unknown_8_);
            var13->unknown_c_ = (char*)var13 + (int)var13->unknown_c_;
        }
    }
    unsigned char var14[4][2] = {{6, 7}, {8, 8}, {10, 13}, {12, 18}};
    Struct_02095d18** var15 = var5;
    Struct_02095d18** var16 = var5;
    int var17 = var4;
    var4 = 0;
    for (unsigned int var18 = 0; var18 < var17; var18++, var16++) {
        unsigned int var19;
        Struct_02095d18* var13 = *var16;
        if (var13 != NULL) {
            for (var19 = 0; var19 < 4; var19++) {
                if (var13->unknown_4_ == var14[var19][0]) {
                    if (var13->unknown_0_ == var14[var19][1]) {
                        *var15 = var13;
                        var15++;
                        var4++;
                    }
                    break;
                }
            }
        }
    }
    for (unsigned char var1 = 0; var1 < var4 - 1; var1++) {
        Struct_02095d18* var13 = var5[var1];
        if (var13 != NULL) {
            for (unsigned char var20 = var1 + 1; var20 < var4; var20++) {
                if (var5[var20] != NULL && var5[var20]->unknown_6_ > var13->unknown_6_) {
                    var13 = var5[var20];
                }
            }
        }
    }
    unsigned short var21[0x400];
    __clear(var21, 0x800);
    short var22 = 0;
    for (unsigned char var1 = 0; var1 < var4; var1++) {
        Struct_02095d18* var13 = var5[var1];
        if (var13 != NULL) {
            unsigned short* var23 = var13->unknown_8_;
            for (short var24 = 0; var24 < var13->unknown_6_; var24++) {
                int var25 = 0;
                for (short var26 = 0; var26 < var22; var26++) {
                    if (*var23 == var21[var26]) {
                        *var23 = 0;
                        var25 = 1;
                        break;
                    }
                }
                if (var25 == 0) {
                    int var27 = 0;
                    Struct_02095d18* var28 = func_020429bc(var11);
                    unsigned short* var29 = &var28->unknown_8_[0xd2];
                    unsigned short var30 = *var23;
                    short var31 = var28->unknown_6_;
                    for (short var26 = 0xd2; var26 < var31; var26++) {
                        if (var30 == *var29) {
                            *var23 = 0;
                            var27 = 1;
                            break;
                        }
                        var29++;
                    }
                    if (var27 == 0) {
                        var21[var22] = *var23;
                        var22++;
                    }
                }
                var23++;
            }
        }
    }
    Struct_02095d18* var13 = var5[0];
    for (unsigned char var1 = 0; var1 < var4; var1++) {
        var13 = var5[var1];
        if (var13 != NULL) break;
    }
    int var32 = (var22 * 2 + 3) & ~3;
    Struct_02095d18 var33;
    int var34 = var13->unknown_0_;
    var33.unknown_0_ = var34;
    var33.unknown_2_ = var13->unknown_2_;
    var33.unknown_3_ = var13->unknown_3_;
    var33.unknown_4_ = var13->unknown_4_;
    var33.unknown_8_ = (unsigned short*)0x10;
    var33.unknown_c_ = (char*)var33.unknown_8_ + var32;
    var33.unknown_6_ = var22;
    unsigned int var35 = var32 + 0x10 + var22 * var34;
    var35 = (var35 + 3) & ~3;
    char* var36 = (char*)arg0->unknown_0_;
    int var37 = 0;
    switch (var33.unknown_4_) {
    case 8:
        if (var35 + arg0->unknown_10_ <= *(unsigned int*)arg0->unknown_8_) {
            arg0->unknown_4_ = (char*)arg0->unknown_0_ + (*(unsigned int*)arg0->unknown_8_ - var35);
            var36 = (char*)arg0->unknown_4_;
            arg0->unknown_40_ = arg0->unknown_34_;
            arg0->unknown_10_ = var35;
            arg0->unknown_64_ = arg0->unknown_61_;
            var37 = 1;
        }
        break;
    case 10:
        if (var35 + arg0->unknown_10_ <= *(unsigned int*)arg0->unknown_8_) {
            arg0->unknown_3c_ = arg0->unknown_34_;
            arg0->unknown_c_ = var35;
            arg0->unknown_63_ = arg0->unknown_61_;
            var37 = 1;
        }
        break;
    case 12:
        if (var35 + arg0->unknown_c_ <= *(unsigned int*)arg0->unknown_8_) {
            arg0->unknown_4_ = (char*)arg0->unknown_0_ + (*(unsigned int*)arg0->unknown_8_ - var35);
            var36 = (char*)arg0->unknown_4_;
            arg0->unknown_40_ = arg0->unknown_34_;
            arg0->unknown_10_ = var35;
            arg0->unknown_64_ = arg0->unknown_61_;
            var37 = 1;
        }
        break;
    }
    if (var37 != 0) {
        var33.unknown_8_ = (unsigned short*)(var36 + (int)var33.unknown_8_);
        var33.unknown_c_ = var36 + (int)var33.unknown_c_;
        memcpy(var36, &var33, 0x10);
        memcpy(var33.unknown_8_, var21, var33.unknown_6_ * 2);
        unsigned char var38 = var4;
        var36 = var33.unknown_c_;
        for (unsigned char var1 = 0; var1 < var38; var1++) {
            Struct_02095d18* var39 = var5[var1];
            if (var39 != NULL) {
                short var40 = var39->unknown_6_;
                unsigned short* var41 = var39->unknown_8_;
                unsigned short var42 = var39->unknown_0_;
                char* var43 = var39->unknown_c_;
                for (short var24 = 0; var24 < var40; var24++) {
                    if (*var41 != 0) {
                        memcpy(var36, var43, var42);
                        var36 += var42;
                    }
                    var43 += var42;
                    var41++;
                }
            }
        }
        if (var33.unknown_4_ == 12) {
            if (arg0->unknown_34_ != 5000) {
                memset(arg0->unknown_59_, 0, 8);
            }
            if (arg0->unknown_34_ != 1000) {
                arg0->unknown_58_ = 0;
                memset(arg0->unknown_44_, 0, 0x10);
            }
        }
    }
    for (unsigned char var1 = 0; var1 < arg0->unknown_54_; var1++) {
        var0->RemoveTask(arg0->unknown_14_[var1]);
        arg0->unknown_14_[var1] = -1;
    }
    func_0209651c(arg0);
}
#endif
