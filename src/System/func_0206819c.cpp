#include <globaldefs.h>

#include "std_library_functions.h"

struct FontGlyph_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};

extern "C" FontGlyph_0204254c *FindFontGlyph_0204254c(int text, int font);
extern "C" void func_02067f5c(signed char *arg0, int arg1);

// USA: CopyCapitalizedText_0206819c
extern "C" ARM void CopyCapitalizedText_0206819c(const char *text, char *outText, int font) {
    if (text == NULL) return;
    sprintf(outText, text);
    if (*text == 0) return;
    FontGlyph_0204254c *glyph = FindFontGlyph_0204254c(reinterpret_cast<int>(text), font);
    if (glyph == NULL || !glyph->unknown_5_7_) return;
    func_02067f5c(reinterpret_cast<signed char *>(outText), glyph->codeLength_5_0_);
}
