#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: GetLoadedFontSetForSize_02094b44
extern "C" ARM void* GetLoadedFontSetForSize_02094b44(FontLoader_0208cb08* loader, int fontSize) {
    void* fontSet = 0;
#if defined(jpn)
    switch (fontSize) {
    case 8:
        if (loader->unknown_40_ >= 0) fontSet = loader->unknown_4_;
        break;
    case 10:
        if (loader->unknown_3c_ >= 0) fontSet = loader->unknown_0_;
        break;
    case 12:
        if (loader->unknown_40_ >= 0) fontSet = loader->unknown_4_;
        break;
    }
#endif
    return fontSet;
}
