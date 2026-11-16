#pragma once

#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "Graphics/OBJSpriteSet.h"

struct Matrix2x2_0205ac40_3 {
    fix32_t unknown_0_[4];
};

struct SpriteSet_0205ac40 {
    char unknown_0_[0x50];
    unsigned char isSubScreen_50_;
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


