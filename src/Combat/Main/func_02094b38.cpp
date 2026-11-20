#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* memset(void*, int, unsigned int);
#endif

// USA: ClearLoadedFontSet_02094b38
extern "C" ARM void ClearLoadedFontSet_02094b38(FontLoader_0208cb08* loader, int fontSetId) {
#if defined(jpn)
    if (fontSetId < 0) return;
    if (loader->unknown_3c_ == fontSetId) {
        loader->unknown_3c_ = -1;
        loader->unknown_c_ = 0;
        loader->unknown_63_ = 0;
        return;
    }
    if (loader->unknown_40_ == fontSetId) {
        loader->unknown_40_ = -1;
        loader->unknown_10_ = 0;
        if (fontSetId == 1000) memset(loader->unknown_44_, 0, sizeof(loader->unknown_44_));
        if (fontSetId == 5000) memset(loader->unknown_59_, 0, sizeof(loader->unknown_59_));
        loader->unknown_64_ = 0;
    }
#endif
}
