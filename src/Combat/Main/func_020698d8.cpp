#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)

struct Struct_020698d8 {
    char unknown_0_[0x23c];
    char unknown_23c_[0x40];
    char unknown_27c_[0x40];
    char unknown_2bc_[0x40];
    char unknown_2fc_[0x40];
    char unknown_33c_[0x40];
    char unknown_37c_[16][0x40];
    int unknown_77c_;
    int unknown_780_[16];
    unsigned char unknown_7c0_;
    unsigned char unknown_7c1_[16];
    unsigned char unknown_7d1_;
    unsigned char unknown_7d2_[16];
    char unknown_7e2_[0x1750 - 0x7e2];
    signed char unknown_1750_;
};

struct Struct_020698d8_2 {
    char unknown_0_[0x134];
    char* unknown_134_;
};

struct Struct_020698d8_3 {
    void* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int : 28;
    char unknown_c_[0xc];
    short unknown_18_;
};

struct Struct_020698d8_4 {
    char unknown_0_[0x294];
    Struct_020698d8_3 unknown_294_;
};

struct Struct_020698d8_5 {
    char unknown_0_[0x144];
    Struct_020698d8_4* unknown_144_;
};

struct Struct_020698d8_6 {
    char unknown_0_[0x6f9c];
    short unknown_6f9c_;
};

extern "C" int func_020d857c(signed char* arg0, signed char* arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" int func_02005a94(void* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020474b4(Struct_020698d8* arg0, int arg1);
extern "C" void func_020de968(int arg0, char* arg1);

extern signed char data_020f07d1[];
extern signed char* data_020f0784[];
extern char data_020f07d4[];
extern char data_020f07d9[];
extern char data_020f07e0[];
extern char data_020f07e5[];
extern char data_020f07ed[];
extern char data_020f07f5[];
extern char data_020f07fd[];
extern char data_020f0802[];
extern char data_020f0805[];
extern char data_020f080d[];
extern char data_020f0817[];
extern char data_020f0820[];
extern char data_020f0829[];
extern char data_020f082f[];
extern char data_020f0838[];
extern char data_020f0841[];
extern char data_020f0848[];
extern char data_020f084f[];

// JPN: func_020698d8
extern "C" ARM void func_020698d8(Struct_020698d8* arg0, int arg1, signed char* arg2, char* arg3) {
    if (arg2 == 0 || arg3 == 0) {
        return;
    }
    unsigned char var0 = arg1;
    while (*arg2 != 0) {
        if (func_020d857c(arg2, data_020f07d1)) {
            GameState* var1 = GameState::GetInstance();
            signed char var2[5];
            __clear(var2, 5);
            var2[2] = func_020100b0(var1);
            var2[3] = func_020100a8(var1);
            var2[4] = func_020100b0(var1);
            unsigned char var3 = 0;
            int var4 = 0;
            for (signed char** var5 = data_020f0784; *var5 != 0; var3++, var5++) {
                if (func_020d857c(arg2 + 2, *var5 + 2)) {
                    Struct_020698d8_2* var6 = (Struct_020698d8_2*)var1->GetPartyMemberByIndex(var2[var3]);
                    if (var6 != 0) {
                        arg2 += func_020d2ff0((char*)*var5);
                        arg3 += sprintf(arg3, var6->unknown_134_);
                        var4 = 1;
                    }
                    break;
                }
            }
            if (var4) {
                continue;
            }
        }
        signed char var7 = *arg2;
        if (var7 == '[') {
            int var8 = 0;
            if (func_02001aec(arg2, data_020f07d4, 4) == 0) {
                arg2 += 4;
                Struct_020698d8_5* var9 = (Struct_020698d8_5*)func_0200ff1c(GameState::GetInstance(), arg0->unknown_1750_);
                if (var9 != 0) {
                    Struct_020698d8_3* var10 = &var9->unknown_144_->unknown_294_;
                    if (var10 != 0 && var10->unknown_18_ > 0 && var10->unknown_8_0_ == 0) {
                        arg3 += sprintf(arg3, var10->unknown_4_);
                    }
                }
            } else if (func_02001aec(arg2, data_020f07d9, 6) == 0) {
                arg2 += 6;
                arg3 += sprintf(arg3, arg0->unknown_23c_);
            } else if (func_02001aec(arg2, data_020f07e0, 4) == 0) {
                arg2 += 4;
                arg3 += sprintf(arg3, arg0->unknown_27c_);
            } else if (func_02001aec(arg2, data_020f07e5, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_2bc_);
            } else if (func_02001aec(arg2, data_020f07ed, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_2fc_);
            } else if (func_02001aec(arg2, data_020f07f5, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_33c_);
            } else if (func_02001aec(arg2, data_020f07fd, 4) == 0) {
                arg2 += 4;
                arg3 += sprintf(arg3, data_020f0802, arg0->unknown_77c_);
            } else if (func_02001aec(arg2, data_020f0805, 7) == 0) {
                arg2 += 7;
                int var11 = func_02005a94(arg2) - 1;
                if (var11 >= 0 && var11 < 16) {
                    arg3 += sprintf(arg3, arg0->unknown_37c_[var11]);
                } else {
                    var8 = 1;
                }
            } else if (func_02001aec(arg2, data_020f080d, 9) == 0) {
                arg2 += 9;
            } else if (func_02001aec(arg2, data_020f0817, 8) == 0 || func_02001aec(arg2, data_020f0820, 8) == 0) {
                arg2 += 8;
            } else if (func_02001aec(arg2, data_020f0829, 5) == 0) {
                arg2 += 5;
                int var12 = func_02005a94(arg2) - 1;
                if (var12 >= 0 && var12 < 16) {
                    int var14 = arg0->unknown_780_[var12];
                    unsigned char var13 = arg0->unknown_7d2_[var12];
                    if (var13 != 0) {
                        unsigned char var15 = var13 - func_020474b4(arg0, var14);
                        int var16 = var15 * var0;
                        switch (arg0->unknown_7c1_[var12]) {
                            case 0:
                                arg3 += sprintf(arg3, data_020f082f, var14, var16);
                                break;
                            case 1:
                                arg3 += sprintf(arg3, data_020f0838, var16, var14);
                                break;
                            default:
                                arg3 += sprintf(arg3, data_020f0802, var14);
                                break;
                        }
                    } else {
                        arg3 += sprintf(arg3, data_020f0802, var14);
                    }
                } else {
                    var8 = 1;
                }
            } else {
                *arg3++ = var7;
                arg2++;
                continue;
            }
            while (*arg2 != ']' && *arg2 != 0) {
                arg2++;
            }
            if (*arg2 == 0) {
                arg3 += sprintf(arg3, data_020f0841);
                break;
            }
            arg2++;
            if (var8) {
                arg3 += sprintf(arg3, data_020f0841);
            }
            continue;
        }
        if (var7 == '<') {
            if (func_02001aec(arg2, data_020f0848, 6) == 0) {
                switch ((unsigned char)func_02005a94(arg2 + 6)) {
                    case 8:
                        var0 = 8;
                        break;
                    case 10:
                        var0 = 10;
                        break;
                    case 12:
                        var0 = 12;
                        break;
                    default:
                        var0 = arg1;
                        break;
                }
            }
            if (func_02001aec(arg2, data_020f084f, 13) == 0) {
                arg2 += 13;
                GameState* var16 = GameState::GetInstance();
                char var17[0x30];
                __clear(var17, 0x30);
                func_020de968(((Struct_020698d8_6*)var16)->unknown_6f9c_, var17);
                if (func_020d2ff0(var17) != 0) {
                    arg3 += sprintf(arg3, var17);
                }
            }
        }
        unsigned char var18 = *arg2;
        if ((var18 >= 0x81 && var18 <= 0x9f) || (var18 >= 0xe0 && var18 <= 0xea)) {
            *arg3++ = *arg2++;
        }
        *arg3++ = *arg2++;
    }
    *arg3 = 0;
}

#endif
