#include <globaldefs.h>
#include "Resource/MessageGlyphSlot.h"

struct Struct_020424e4;
struct Canvas_0205b234_2 { unsigned char* pCharacterData_0_; Struct_020424e4* pRects_4_; unsigned char rectCount_8_; };

#if defined(jpn)
extern "C" FontGlyph_020420e8* func_02042a50(unsigned char arg0, const char* arg1);
extern "C" void func_0205b36c(Canvas_0205b234_2* arg0, FontGlyph_020420e8* arg1, short arg2, short arg3, int arg4, int arg5);

// JPN: DrawCanvasText_0205b234 (fixed-width Shift-JIS text)
extern "C" ARM void DrawCanvasText_0205b234(Canvas_0205b234_2* canvas, short x, short y, const char* text, unsigned char arg4, int arg5) {
    if (canvas->pCharacterData_0_ == 0 || canvas->pRects_4_ == 0 || canvas->rectCount_8_ == 0 || text == 0) return;
    unsigned char glyphSize = arg4;
    while (*text != 0) {
        FontGlyph_020420e8* glyph = func_02042a50(glyphSize, text);
        if (glyph != 0) func_0205b36c(canvas, glyph, x, y, glyphSize & 0xff, arg5);
        unsigned char firstByte = *text;
        if ((firstByte >= 0x81 && firstByte <= 0x9f) || (firstByte >= 0xe0 && firstByte <= 0xea)) text++;
        text++;
        x += glyphSize;
    }
}
#else
extern "C" int func_02042648(int);
extern "C" int FindFontGlyphIndex_020424e4(int, int);
extern "C" int func_020425e4(int, int, int);
extern "C" FontGlyph_020420e8* GetFontGlyph_020425b4(int glyphIndex, int font);
extern "C" void func_0205b36c(Canvas_0205b234_2* arg0, FontGlyph_020420e8* arg1, short arg2, short arg3, unsigned char arg4, unsigned char arg5);

// USA: DrawCanvasText_0205b234
extern "C" ARM int DrawCanvasText_0205b234(Canvas_0205b234_2* canvas, short x, short y, const char* text, unsigned char arg4, unsigned char arg5) {
    if (canvas->pCharacterData_0_ == 0) return 0;
    if (canvas->pRects_4_ == 0) return 0;
    if (canvas->rectCount_8_ == 0) return 0;
    if (text == 0) return 0;
    unsigned char defaultWidth = func_02042648(arg5);
    int var4 = 0xff;
    short glyphX = x;
    while (*text != 0) {
        int glyphIndex;
        signed char advance = defaultWidth + 1;
        glyphIndex = FindFontGlyphIndex_020424e4((int)text, arg5) & 0xff;
        glyphX += func_020425e4(var4, glyphIndex, arg5);
        int codeLength = 1;
        if (glyphIndex != 0xff) {
            FontGlyph_020420e8* glyph = GetFontGlyph_020425b4(glyphIndex, arg5);
            func_0205b36c(canvas, glyph, glyphX, y, arg4, arg5);
            advance = glyph->width_4_ + 1;
            codeLength = glyph->codeLength_5_0_;
        }
        var4 = glyphIndex;
        text += codeLength;
        glyphX += advance;
    }
    return glyphX - x;
}
#endif
