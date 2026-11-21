#include <globaldefs.h>
#include <std_library_functions.h>
#include "Graphics/TextureArena.h"

struct FontGlyph_02045d14_3 {
    const char* unknown_0_;
    signed char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};
struct CodedText_02045d14 {
    unsigned short code_0_;
    unsigned short controlCode_2_;
    char buffer_4_[512];
};
struct Struct_02045d14_2 {
    char unknown_0_[0x800];
    int usedGlyphSlotCount_800_;
};
struct MessageWindow_02045c00_2 {
    char unknown_0_[0x1b4];
    Struct_02045d14_2 unknown_1b4_;
    char unknown_9b8_[0x17b8 - 0x9b8];
    unsigned char glyphSlotUseCounts_17b8_[0x80];
    char unknown_1838_[0x1e28 - 0x1838];
    char* pTextureArena_1e28_;
    inline Struct_02045d14_2* inline_02045d14() { return &unknown_1b4_; }
};
typedef MessageWindow_02045c00_2 MessageWindow_02045c00_2;
extern "C" void __clear(void*, unsigned int);
extern "C" void func_0204483c(MessageWindow_02045c00_2*, const char*, char*);
extern "C" int func_02044420(void*, void*);
extern "C" FontGlyph_02045d14_3* FindFontGlyph_0204254c(int, int);
extern "C" int FindFontGlyphIndex_020424e4(int, int);
extern "C" int func_02045c00(MessageWindow_02045c00_2*, int);
extern "C" unsigned short func_020459b8(MessageWindow_02045c00_2*, int, FontGlyph_02045d14_3*, int);

// USA: ConvertTextToMessageGlyphs_02045d14
extern "C" ARM unsigned short ConvertTextToMessageGlyphs_02045d14(MessageWindow_02045c00_2* window, const char* text, unsigned short* glyphCodes, int font) {
    unsigned short codeCount;
    int textOffset;
    int codeIndex;
    int paramCount;
    FontGlyph_02045d14_3* glyph;
    Struct_02045d14_2* glyphSlotCounter;
    CodedText_02045d14 codedText;
    if (text == 0 || glyphCodes == 0) return 0;
    __clear(codedText.buffer_4_, sizeof(codedText.buffer_4_));
    func_0204483c(window, text, codedText.buffer_4_);
    codeCount = 0;
    textOffset = 0;
    codeIndex = 0;
    if (window->pTextureArena_1e28_) ((TextureArena*)(window->pTextureArena_1e28_))->Restore();
    while (1) {
        if (codeIndex > 0 && glyphCodes[codeIndex - 1] == 0xff01) break;
        memcpy(&codedText.code_0_, codedText.buffer_4_ + textOffset, 2);
        if ((codedText.code_0_ & 0xff00) == 0xff00) {
            memcpy(&codedText.controlCode_2_, codedText.buffer_4_ + textOffset, 2);
            glyphCodes[codeIndex] = codedText.controlCode_2_;
            textOffset += 2;
            ++codeIndex;
            ++codeCount;
            paramCount = func_02044420(window, &codedText.controlCode_2_);
            unsigned int paramSize = paramCount * sizeof(unsigned short);
            memcpy(glyphCodes + codeIndex, codedText.buffer_4_ + textOffset, paramSize);
            codeCount += paramCount;
            textOffset += paramCount * 2;
            codeIndex += paramCount;
        } else {
            glyph = FindFontGlyph_0204254c((int)(codedText.buffer_4_ + textOffset), font);
            int glyphIndex = FindFontGlyphIndex_020424e4((int)(codedText.buffer_4_ + textOffset), font);
            if (glyph != 0 && glyphIndex >= 0) {
                int foundSlot = func_02045c00(window, (int)glyph);
                if (foundSlot == -1) {
                    glyphCodes[codeIndex] = func_020459b8(window, glyphIndex & 0xff, glyph, font);
                    glyphSlotCounter = window->inline_02045d14();
                    ++glyphSlotCounter->usedGlyphSlotCount_800_;
                    glyphSlotCounter->usedGlyphSlotCount_800_ &= 0x7f;
                } else {
                    unsigned short slot = foundSlot;
                    glyphCodes[codeIndex] = slot;
                    if (window->glyphSlotUseCounts_17b8_[slot] < 0xff) ++window->glyphSlotUseCounts_17b8_[slot];
                }
                textOffset += glyph->codeLength_5_0_;
            } else {
                glyphCodes[codeIndex] = 0xff19;
                ++textOffset;
            }
            ++codeIndex;
            ++codeCount;
        }
    }
    if (window->pTextureArena_1e28_) ((TextureArena*)(window->pTextureArena_1e28_))->Save();
    return codeCount;
}
