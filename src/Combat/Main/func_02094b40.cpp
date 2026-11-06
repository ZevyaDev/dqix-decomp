#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* memset(void*, int, unsigned int);
#endif

// USA: ClearLoadedFontSets_02094b40
extern "C" ARM void ClearLoadedFontSets_02094b40(FontLoader_0208cb08* loader) {
#if defined(jpn)
    loader->unknown_3c_ = -1;
    loader->unknown_c_ = 0;
    loader->unknown_63_ = 0;
    loader->unknown_40_ = -1;
    loader->unknown_10_ = 0;
    loader->unknown_64_ = 0;
    memset(loader->unknown_44_, 0, sizeof(loader->unknown_44_));
#endif
}
