#include <globaldefs.h>

struct FontGlyph_020426bc {
    int unknown_0_;
    char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" struct FontGlyph_020426bc* func_0204254c(int arg0, int arg1);
extern "C" int func_020424e4(int arg0, int arg1);

// USA: ConvertTextToGlyphIndices_020426bc
extern "C" ARM int ConvertTextToGlyphIndices_020426bc(char* text, unsigned char* outGlyphIndices, int font) {
    if (outGlyphIndices == 0) return 0;
    if (text == 0) {
        if (outGlyphIndices != 0) *outGlyphIndices = 0;
        return 0;
    }
    int count = 0;
    for (;;) {
        signed char character = *text;
        if (character == 0) {
            *outGlyphIndices = 0;
            break;
        }
        int codeLength = 1;
        int glyphByte = 0;
        struct FontGlyph_020426bc* glyph = func_0204254c((int)text, font);
        if (glyph != 0) {
            codeLength = glyph->codeLength_5_0_;
        }
        if (character == 0x20) glyphByte = 0xff;
        int glyphIndex = func_020424e4((int)text, font);
        if (glyphIndex > 0) glyphByte = glyphIndex & 0xff;
        *outGlyphIndices++ = (unsigned char)glyphByte;
        text += codeLength;
        count++;
    }
    return count;
}
