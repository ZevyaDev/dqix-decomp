#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: GetLoadedFontSetForSize_02094b44
extern "C" ARM void* GetLoadedFontSetForSize_02094b44(FontLoader_0208cb08* arg0, int fontSize) {
    void* fontSet = 0;
#if defined(jpn)
    switch (fontSize) {
    case 8:
        if (arg0->unknown_40_ >= 0) fontSet = arg0->unknown_4_;
        break;
    case 10:
        if (arg0->unknown_3c_ >= 0) fontSet = arg0->unknown_0_;
        break;
    case 12:
        if (arg0->unknown_40_ >= 0) fontSet = arg0->unknown_4_;
        break;
    }
#endif
    return fontSet;
}
