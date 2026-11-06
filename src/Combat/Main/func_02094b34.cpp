#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" int func_020965c0(FontLoader_0208cb08*, int);
#endif

// USA: RequestFontLoad_02094b34
extern "C" ARM void RequestFontLoad_02094b34(FontLoader_0208cb08* loader, int fontSetId, int nextFontSetId, unsigned char isPackArchive,
                               const volatile unsigned char isNextPackArchive) {
#if defined(jpn)
    if (loader->requestedFontSetId_34_ >= 0) return;
    volatile int fontSetIds[2];
    fontSetIds[1] = nextFontSetId;
    fontSetIds[0] = fontSetId;
    unsigned char isSecondPackArchive = isNextPackArchive;
    if (func_020965c0(loader, fontSetId)) {
        fontSetIds[0] = -1;
        isPackArchive = 1;
    }
    if (func_020965c0(loader, fontSetIds[1])) {
        fontSetIds[1] = -1;
        isSecondPackArchive = 1;
    }
    for (unsigned char i = 0; i < 2; ++i) {
        if (fontSetIds[0] < 0) {
            fontSetIds[0] = fontSetIds[1];
            isPackArchive = isSecondPackArchive;
            fontSetIds[1] = -1;
            isSecondPackArchive = 1;
        }
    }
    if (fontSetIds[0] < 0 && fontSetIds[1] < 0) return;
    CancelFontLoad_02094ab0(loader);
    loader->requestedFontSetId_34_ = fontSetIds[0];
    loader->nextRequestedFontSetId_38_ = fontSetIds[1];
    loader->loadState_56_ = 0;
    loader->unknown_57_ = 0;
    loader->unknown_61_ = isPackArchive;
    loader->unknown_62_ = isSecondPackArchive;
#endif
}
