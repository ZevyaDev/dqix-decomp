#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"
#if defined(jpn)
#include <std_library_functions.h>

struct Struct_020469b0 {
    unsigned short unknown_0_;
    char unknown_2_[512];
};
struct Struct_020469b0_2 {
    char unknown_0_[0x800];
    int unknown_800_;
};
struct Struct_020469b0_3 {
    char unknown_0_[0x84];
    Struct_020469b0_2 unknown_84_;
    char unknown_884_[0x1688 - 0x884 - 0x4];
    unsigned char unknown_1688_[0x80];
    char unknown_1708_[0x1c4c - 0x1708];
    char* unknown_1c4c_;
    inline Struct_020469b0_2* inline_020469b0() { return &unknown_84_; }
};
extern "C" void __clear(void*, unsigned int);
extern "C" void func_02044f68(Struct_020469b0_3*, const char*, char*);
extern "C" void RestoreTextureVRAMState_0207df90(char*);
extern "C" void SaveTextureVRAMState_0207dfac(char*);
extern "C" int func_02043014(int, void*);
extern "C" int func_02045c00(Struct_020469b0_3*, void*, int);
extern "C" unsigned short func_02046530(Struct_020469b0_3*, void*, int, int);

// JPN: func_020469b0
extern "C" ARM unsigned short func_020469b0(Struct_020469b0_3* arg0, const char* arg1, unsigned short* arg2, int arg3) {
    unsigned short var0;
    int var1;
    int var2;
    Struct_020469b0_2* var9;
    Struct_020469b0 var3;
    if (arg1 == 0 || arg2 == 0) return 0;
    __clear(var3.unknown_2_, sizeof(var3.unknown_2_));
    func_02044f68(arg0, arg1, var3.unknown_2_);
    var0 = 0;
    var1 = 0;
    var2 = 0;
    if (arg0->unknown_1c4c_) RestoreTextureVRAMState_0207df90(arg0->unknown_1c4c_);
    while (1) {
        if (var2 > 0 && arg2[var2 - 1] == 0xff01) break;
        memcpy(&var3.unknown_0_, var3.unknown_2_ + var1, 2);
        if ((var3.unknown_0_ & 0xff00) == 0xff00) {
            arg2[var2] = var3.unknown_0_;
            ++var0;
            var1 += 2;
            ++var2;
            if ((var3.unknown_0_ == 0xff22) | (var3.unknown_0_ == 0xff23) | (var3.unknown_0_ == 0xff25) | (var3.unknown_0_ == 0xff26)) {
                memcpy(arg2 + var2, var3.unknown_2_ + var1, 2);
                var1 += 2;
                ++var2;
                ++var0;
            } else if ((var3.unknown_0_ == 0xff24) | (var3.unknown_0_ == 0xff27)) {
                memcpy(arg2 + var2, var3.unknown_2_ + var1, 4);
                var1 += 4;
                var2 += 2;
                var0 += 2;
            }
        } else {
            int var4 = func_02043014(arg3, var3.unknown_2_ + var1);
            if (var4 != -1) {
                int var5 = func_02045c00(arg0, var3.unknown_2_ + var1, arg3);
                if (var5 == -1) {
                    arg2[var2] = func_02046530(arg0, var3.unknown_2_ + var1, var4, arg3);
                    var9 = arg0->inline_020469b0();
                    ++var9->unknown_800_;
                    var9->unknown_800_ &= 0x7f;
                } else {
                    unsigned short var6 = var5;
                    arg2[var2] = var6;
                    if (arg0->unknown_1688_[var6] < 0xff) ++arg0->unknown_1688_[var6];
                }
            } else {
                arg2[var2] = 0xff19;
            }
            var1 += 2;
            ++var2;
            ++var0;
        }
    }
    if (arg0->unknown_1c4c_) SaveTextureVRAMState_0207dfac(arg0->unknown_1c4c_);
    return var0;
}

struct Struct_02046c78 {
    void* unknown_0_;
    char unknown_4_[0x888 - 0x4];
    Struct_0204166c unknown_888_[0x80];
    char unknown_1688_[0x17e0 - 0x1688];
    unsigned char unknown_17e0_;
};

extern "C" void func_02066934(Struct_02046c78* arg0, void* arg1, Struct_0204166c* arg2, int arg3, short arg4, int arg5);
extern "C" void func_020417b0(Struct_0204166c* arg0, int arg1, void* arg2, int arg3);

// JPN: func_02046c78
extern "C" ARM void func_02046c78(Struct_02046c78* arg0, unsigned short* arg1, int arg2, int arg3, int arg4, int arg5,
                                  int arg6, int arg7) {
    if (arg1 == NULL || arg0->unknown_17e0_ == 0 || arg1[0] == 0xffff) {
        return;
    }
    unsigned short var1 = arg1[0];
    if (var1 == 0 && var1 == arg1[1] && var1 == arg1[2] && var1 == arg1[3] && var1 == arg1[4]) {
        return;
    }
    *(volatile int*)0x04000444 = 0;
    int var4 = 0;
    int var5 = arg2;
    int var6 = arg3;
    unsigned short var7 = arg1[0];
    while (var7 != 0xff01) {
        var7 = arg1[var4];
        var4++;
        if ((var7 & 0xff00) == 0xff00) {
            if (var7 == 0xff18) {
                var5 = arg2;
                arg3 += 0x11;
                continue;
            }
            if (var7 == 0xff1a) {
                var5 += arg5;
                continue;
            }
            if (var7 == 0xff1b) {
                var5 += arg5 >> 1;
                continue;
            }
            if (var7 == 0xff19) {
                var5 += arg5;
                continue;
            }
            if (var7 == 0xff22) {
                var5 = arg2 + arg1[var4];
                var4++;
                continue;
            }
            if (var7 == 0xff23) {
                var6 = arg3 + arg1[var4];
                var4++;
                continue;
            }
            if (var7 == 0xff24) {
                var5 = arg2 + arg1[var4];
                var6 = arg3 + arg1[var4 + 1];
                var4 += 2;
                continue;
            }
            if (var7 == 0xff25) {
                var5 += arg1[var4];
                var4++;
                continue;
            }
            if (var7 == 0xff26) {
                var6 += arg1[var4];
                var4++;
                continue;
            }
            if (var7 == 0xff27) {
                var5 += arg1[var4];
                var6 += arg1[var4 + 1];
                var4 += 2;
                continue;
            }
            break;
        }
        if (var7 >= 0x80) {
            break;
        }
        Struct_0204166c* var8 = &arg0->unknown_888_[var7];
        if (var8->unknown_8_ < 0) {
            break;
        }
        var8->unknown_c_ = var5;
        var8->unknown_10_ = var6;
        var8->unknown_14_ = 0;
        if (arg7) {
            int var9 = 15;
            if (arg4 != 0x7fff) {
                var9 = 5;
            }
            func_02066934(arg0, arg0->unknown_0_, var8, (short)var5, (short)var6, var9);
        } else {
            func_020417b0(var8, arg4, 0, 0x1f);
        }
        var5 += arg5;
    }
    *(volatile int*)0x04000448 = 1;
}
#endif
