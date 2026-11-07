#include <globaldefs.h>

extern int data_0210782c[];
extern "C" int CompareBytes_02001aec(int left, int right, int count);

struct FontGlyph_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

// USA: FindFontGlyph_0204254c
extern "C" ARM struct FontGlyph_0204254c* FindFontGlyph_0204254c(int text, int font) {
    char* fontInfo;
    unsigned int i;
    if (text == 0) {
        return NULL;
    }
    fontInfo = (char*)data_0210782c[font];
    for (i = 0; i < *(unsigned int*)(fontInfo + 4); i++) {
        struct FontGlyph_0204254c* glyph = *(struct FontGlyph_0204254c**)(fontInfo + 0x10) + i;
        if (CompareBytes_02001aec(glyph->unknown_0_, text, glyph->codeLength_5_0_) == 0) {
            return glyph;
        }
    }
    return NULL;
}
