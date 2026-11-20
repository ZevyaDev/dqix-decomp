#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

// USA: ClearLoadedFontSetForSize_02094b3c
extern "C" ARM void ClearLoadedFontSetForSize_02094b3c(FontLoader_0208cb08* loader, int fontSize) {
#if defined(jpn)
    switch (fontSize) {
    case 8:
        ClearLoadedFontSet_02094b38(loader, loader->unknown_40_);
        break;
    case 10:
        ClearLoadedFontSet_02094b38(loader, loader->unknown_3c_);
        break;
    case 12:
        ClearLoadedFontSet_02094b38(loader, loader->unknown_40_);
        break;
    }
#endif
}
