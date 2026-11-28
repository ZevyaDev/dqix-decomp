#pragma once

#include <globaldefs.h>

struct Struct_020429e4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

struct Struct_0203bebc {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[2];
    short unknown_6_;
    Struct_020429e4* unknown_8_;
    char* unknown_c_;
};

typedef Struct_0203bebc Struct_0203bebc;

extern "C" Struct_0203bebc* GetFontSetForFontSize_020429bc(int fontSize);
#if defined(jpn)
extern "C" char* FindFontSetGlyph_020429e4(Struct_0203bebc* fontSet, const unsigned char* character);
#else
extern "C" char* FindFontSetGlyph_020429e4(Struct_0203bebc* fontSet, const unsigned char* character);
#endif
extern "C" char* FindGlyphForFontSize_02042a50(int fontSize, const char* character);
