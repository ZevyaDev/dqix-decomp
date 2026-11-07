#include <globaldefs.h>

extern int data_0210782c[];
extern "C" int CompareBytes_02001aec(int left, int right, int count);

struct FontGlyph_020424e4_2 {
    int code_0_;
    char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

// USA: FindFontGlyphIndex_020424e4
extern "C" ARM int FindFontGlyphIndex_020424e4(int text, int font) {
    char* fontInfo;
    unsigned int i;
    if (text == 0) {
        return -1;
    }
    fontInfo = (char*)data_0210782c[font];
    for (i = 0; i < *(unsigned int*)(fontInfo + 4); i++) {
        struct FontGlyph_020424e4_2* glyph = *(struct FontGlyph_020424e4_2**)(fontInfo + 0x10) + i;
        if (CompareBytes_02001aec(glyph->code_0_, text, glyph->codeLength_5_0_) == 0) {
            return i;
        }
    }
    return -1;
}
