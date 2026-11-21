#include <globaldefs.h>

// USA: GetFontForFontSize_02042190
extern "C" ARM int GetFontForFontSize_02042190(int fontSize) {
    int font = 0;
    if (fontSize == 0xc) {
        font = 1;
    }
    return font;
}
