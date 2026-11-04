#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

#if defined(jpn)

struct Struct_02067ea0_2 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    signed char unknown_18_[2];
    char unknown_1a_[2];
};

struct Struct_02067ea0_3 {
    char unknown_0_[0x50];
    unsigned int unknown_50_0_ : 16;
    unsigned int unknown_52_0_ : 16;
};

struct Struct_02067ea0 {
    void* unknown_0_;
    char* unknown_4_;
    char unknown_8_[0x10 - 0x8];
    unsigned int unknown_10_;
    char unknown_14_[0x44 - 0x14];
    unsigned int unknown_44_;
    char unknown_48_[0x888 - 0x48];
    Struct_02067ea0_2 unknown_888_[128];
    char unknown_1688_[0x1730 - 0x1688];
    int unknown_1730_;
    char unknown_1734_[0x17e1 - 0x1734];
    unsigned char unknown_17e1_;
    char unknown_17e2_[0x17ff - 0x17e2];
    unsigned char unknown_17ff_0_ : 1;
    unsigned char unknown_17ff_1_ : 7;
    char unknown_1800_[0x1c4c - 0x1800];
    Struct_02067ea0_3* unknown_1c4c_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02069430(Struct_02067ea0* arg0, unsigned short arg1);
extern "C" int func_02042764(char* arg0);
extern "C" void func_02066934(Struct_02067ea0* arg0, void* arg1, Struct_02067ea0_2* arg2, int arg3, short arg4, unsigned char arg5);
extern "C" void func_02066794(void* arg0, int arg1, int arg2, Struct_02067ea0_2* arg3, short arg4, short arg5, unsigned char arg6);
extern "C" void func_020e2310(char* arg0, int arg1, int arg2, int arg3, char* arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_020417b0(Struct_02067ea0_2* arg0, int arg1, void* arg2, int arg3);

// JPN: func_02067ea0
extern "C" ARM int func_02067ea0(Struct_02067ea0* arg0, int arg1, int arg2, unsigned short* arg3, unsigned short* arg4,
                                 int arg5, int arg6) {
    Struct_02067ea0_2* var5;
    int var1;
    int var3;
    unsigned short var4;
    int var0;

    var0 = 0;
    var1 = 0;
    while (arg3[var1] != 0xff37) {
        var1++;
    }
    var3 = 0;
    for (; (var4 = arg4[var3]) != 0xff38; var3++) {
        if (func_02069430(arg0, var4) == 0 && var4 < 0x80) {
            var5 = &arg0->unknown_888_[var4];
            char var6[3];
            __clear(var6, 3);
            var6[0] = var5->unknown_18_[0];
            var6[1] = var5->unknown_18_[1];
            var0 += func_02042764(var6);
        }
    }
    var0 = arg1 + ((var1 - 2) * arg0->unknown_1730_ + 12 - var0 >> 1);
    int var7 = arg2 - 7;
    int var9;
    short var10;
    short var11;
    Struct_02067ea0_2* var14;
    int var8;
    var8 = 0x56b5;
    if (arg0->unknown_17e1_ == 0) {
        var8 = 0x6b5a;
    }
    var14 = arg0->unknown_888_;
    var9 = var7 - 0x74;
    var10 = var9;
    var11 = var7 + 2;

    unsigned short* var12 = arg4;
    unsigned short var13;
    for (; (var13 = *var12) != 0xff38; var12++) {
        if (func_02069430(arg0, var13) == 0) {
            Struct_02067ea0_2* var19 = &var14[var13];
            if (arg6 != 0) {
                func_02066934(arg0, arg0->unknown_0_, var19, (short)var0, var11, 6);
            } else if (arg0->unknown_17ff_0_) {
                if (arg0->unknown_10_ != arg0->unknown_44_) {
                    void* var15 = AllocateVRAMStagingMemory(0x3000);
                    if (var15 != NULL) {
                        unsigned int var16 = arg0->unknown_1c4c_->unknown_50_0_ * 8;
                        func_02066794(var15, 0x100, 0x60, var19, (short)var0, var10, (arg0->unknown_17e1_ == 0) + 6);
                        StageMemoryToVRAM(VRAMSubregion_TextureImage, var15, var16 + 0x700, 0x3000, true, false);
                        FreeVRAMStagingMemory(var15);
                    }
                }
            } else if (arg0->unknown_4_ != NULL) {
                char var17[3];
                __clear(var17, 3);
                var17[0] = var19->unknown_18_[0];
                var17[1] = var19->unknown_18_[1];
                func_020e2310(arg0->unknown_4_, 0, var0, var9, var17, 6, 6);
            } else {
                var19->unknown_c_ = var0;
                var19->unknown_10_ = var7;
                var19->unknown_14_ = 0;
                func_020417b0(var19, var8, 0, arg5);
            }
            char var18[3];
            __clear(var18, 3);
            var18[0] = var19->unknown_18_[0];
            var18[1] = var19->unknown_18_[1];
            var0 += func_02042764(var18);
        }
    }
    return var3 - 1;
}

#endif
