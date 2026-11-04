#include <globaldefs.h>
#if defined(jpn)
#include <std_library_functions.h>
#include "Resource/FontGlyphTable.h"
#include "Resource/MessageSystem.h"

struct Struct_0203d028 {
    unsigned int unknown_0_[10];
    unsigned int unknown_28_[10];
    unsigned int unknown_50_;
};

struct Struct_02107800_4 {
    unsigned char unknown_0_[0x30];
    unsigned char* unknown_30_;
};

extern Struct_02107800_4 data_02107800;
extern const short data_020e843e[];
extern const short data_020e8406[];
extern const short data_020e8418[];
extern const unsigned char data_020e83e9[];
extern const short data_020e83f2[];
extern const short data_020e83fc[];
extern const unsigned char data_020e83e4[];

extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" unsigned char* func_02043110(int arg0, int arg1);
extern "C" void func_02041c10(Struct_0204166c*, const char*, unsigned char*, int, unsigned int, unsigned char);
extern "C" void func_02046458(int, short, unsigned char, unsigned char*, short, short, unsigned char*, short, short);

static inline unsigned int inline_02046530(Struct_0203d028* arg0) {
    return (arg0->unknown_50_ << 16) >> 13;
}

// JPN: func_02046530
extern "C" ARM int func_02046530(Struct_02021b84* arg0, const char* arg1, int arg2, unsigned char arg3) {
    Struct_0203bebc* var0 = func_020429bc(arg3);
    if (var0 == NULL) {
        return 0;
    }
    unsigned char var1 = var0->unknown_2_ >> 1;
    unsigned char var2 = var0->unknown_3_;
    unsigned char* var3 = data_02107800.unknown_30_;
    unsigned char* var4 = arg0->unknown_17b8_;
    Struct_0204166c* var5 = arg0->unknown_9b8_;
    int var6 = arg0->func_02042a90(arg0->unknown_2cc_, 4);
    if (var6 < 0) {
        return 0;
    }
    for (int var7 = 0; var7 < 0x80; var7++) {
        if (var4[var7] == 0) {
            if (arg0->unknown_1e28_ != NULL) {
                unsigned char* var8 = func_02043110(arg3, arg2);
                unsigned char* var9 = var3 + (var6 << 7);
                if (var8 == NULL) {
                    return 0;
                }
                Struct_0204166c* var10 = &var5[var7];
                bool var11 = false;
                bool var12 = false;
                if (arg0->unknown_19cc_ == 0) {
                    short var13 = var1 << 1;
                    memset(var9, 0, 0x80);
                    bool var16;
                    for (unsigned char var17 = 0; var17 < 10; var17++) {
                        if (func_02001aec((void*)(data_020e843e + var17), (void*)arg1, 2) == 0) {
                            var16 = true;
                            goto label_02046530;
                        }
                    }
                    var16 = false;
                label_02046530:
                    bool var14 = false;
                    if (var16) {
                        if (arg3 == 8) {
                            var14 = true;
                        }
                    }
                    if ((arg0->unknown_195b_ & 0x80) || var14) {
                        if (var14) {
                            for (unsigned char var15 = 0; var15 < 9; var15++) {
                                func_02046458(data_020e8406[var15], data_020e8418[var15], data_020e83e9[var15], var8,
                                              var13, var2, var9, 16, 16);
                            }
                        } else {
                            var12 = true;
                            for (unsigned char var15 = 0; var15 < 5; var15++) {
                                func_02046458(data_020e83f2[var15], data_020e83fc[var15], data_020e83e4[var15], var8,
                                              var13, var2, var9, 16, 16);
                            }
                        }
                    } else if (arg0->unknown_195b_ & 2) {
                        var11 = true;
                        func_02046458(1, 1, 1, var8, var13, var2, var9, 16, 16);
                        func_02046458(0, 0, 0xf, var8, var13, var2, var9, 16, 16);
                    } else {
                        func_02046458(0, 0, 0xf, var8, var13, var2, var9, 16, 16);
                    }
                }
                func_02041c10(var10, arg1, var9, var6, (var7 << 7) + inline_02046530(arg0->unknown_1e28_), arg3);
                if (var12) {
                    var10->unknown_16_2_ = 1;
                }
                if (var11) {
                    var10->unknown_16_1_ = 1;
                }
            }
            var4[var7] = 1;
            return var7;
        }
    }
    return 0;
}
#endif
