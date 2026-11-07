#include <globaldefs.h>

extern int data_0210782c[];

// USA: GetFontGlyph_020425b4
extern "C" ARM void* GetFontGlyph_020425b4(int glyphIndex, int font) {
    char* fontInfo = (char*)data_0210782c[font];
    if (glyphIndex >= 0 && (unsigned int)glyphIndex < *(unsigned int*)(fontInfo + 0x4))
        return (void*)(*(int*)(fontInfo + 0x10) + (glyphIndex << 3));
    return NULL;
}
