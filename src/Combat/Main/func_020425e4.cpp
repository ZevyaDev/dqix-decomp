#include <globaldefs.h>

extern int data_0210782c[];

struct KerningPair_020425e4 { unsigned short glyphPair_0_; signed char xOffset_2_; unsigned char unknown_3_; };

// USA: GetFontKerning_020425e4
extern "C" ARM int GetFontKerning_020425e4(int previousGlyphIndex, int glyphIndex, int font) {
    char* fontInfo = (char*)data_0210782c[font];
    unsigned short glyphPair = (previousGlyphIndex & 0xff) | ((glyphIndex & 0xff) << 8);
    unsigned int kerningPairCount = *(unsigned int*)(fontInfo + 0x8);
    struct KerningPair_020425e4* kerningPair = *(struct KerningPair_020425e4**)(fontInfo + 0xc);
    unsigned int i;
    for (i = 0; i < kerningPairCount; i++) {
        if (kerningPair->glyphPair_0_ == glyphPair) return kerningPair->xOffset_2_;
        kerningPair++;
    }
    return 0;
}
