#pragma once

#include <globaldefs.h>

struct BGLayer_02020cb8;
struct TextWindow_0207f7f0_2 {
    TextWindow_0207f7f0_2* pPreviousTextWindow_0_;
    BGLayer_02020cb8* unknown_4_;
    unsigned char unknown_8_[0xd8];
};

struct MenuLayout_0207f7f0 {
    int unknown_0_;
    unsigned char unknown_4_[8];
    unsigned char unknown_c_[8];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
#if !defined(jpn)
    int unknown_20_[3];
#endif
    BGLayer_02020cb8* unknown_2c_;
    TextWindow_0207f7f0_2* pWindows_30_;
    short unknown_34_;
    short unknown_36_;
    unsigned char unknown_38_;
    unsigned char windowCount_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
};

extern "C" void ResetMenuLayout_0207f84c(MenuLayout_0207f7f0*);
extern "C" void SetMenuLayoutWindowArray_0207f7f0(MenuLayout_0207f7f0*, TextWindow_0207f7f0_2*, int);

extern "C" void func_0207f8bc(MenuLayout_0207f7f0*);
