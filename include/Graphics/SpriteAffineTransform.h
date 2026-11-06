#pragma once

#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Matrix2x2_0205ac40_3 {
    fix32_t unknown_0_[4];
};

struct SpriteSet_0205ac40 {
    char unknown_0_[0x50];
    unsigned char unknown_50_;
};

struct Struct_0205b174 {
    unsigned short unknown_0_;
};

struct Sprite_0205ac40_2 {
    unsigned short oamCount_0_;
    unsigned short unknown_2_;
    Struct_0205b174* unknown_4_;
    char unknown_8_[4];
    fix32_t unknown_c_;
    fix32_t unknown_10_;
    fix32_t position_14_[2];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned short affineIndex_20_;
    unsigned char oamIndex_22_;
    unsigned char isAffine_23_;
    unsigned char isDoubleSize_24_;
    signed char paletteOverride_25_;
    signed char priorityOverride_26_;
};


extern "C" void func_020c111c(Matrix2x2_0205ac40_3* arg0, fix32_t arg1, fix32_t arg2);
extern "C" void func_020c1128(const Matrix2x2_0205ac40_3* arg0, Matrix2x2_0205ac40_3* arg1,
                           fix32_t arg2, fix32_t arg3);
extern "C" void func_0205b0d8(SpriteSet_0205ac40* arg0, Matrix2x2_0205ac40_3* arg1,
                             Matrix2x2_0205ac40_3* arg2, Sprite_0205ac40_2* arg3);
extern "C" int func_0205b174(SpriteSet_0205ac40* arg0, Sprite_0205ac40_2* arg1);
