#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"

#if defined(jpn)
extern "C" void func_02042ea4(unsigned char*, const unsigned char*);
#endif

// USA: FindFontSetGlyph_020429e4
extern "C" ARM char* FindFontSetGlyph_020429e4(Struct_0203bebc* fontSet, const unsigned char* character) {
    if (fontSet == NULL) return NULL;
    Struct_020429e4 var0;
#if defined(jpn)
    func_02042ea4(reinterpret_cast<unsigned char*>(&var0), character);
#else
    if (character == NULL) {
        var0.unknown_0_ = 0;
        var0.unknown_1_ = 0;
    } else {
        var0.unknown_0_ = character[0];
        var0.unknown_1_ = character[1];
    }
#endif
    int var1 = fontSet->unknown_6_;
    Struct_020429e4* var2 = fontSet->unknown_8_;
    for (int var3 = 0; var3 < var1; ++var2, ++var3) {
        if (var0.unknown_0_ == var2->unknown_0_ && var0.unknown_1_ == var2->unknown_1_) {
            return fontSet->unknown_c_ + var3 * fontSet->unknown_0_;
        }
    }
    return NULL;
}
