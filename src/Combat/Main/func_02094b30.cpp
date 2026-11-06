#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
#include "GameState/GameState.h"

enum Enum_02094b30 {
    Enum_02094b30_1000 = 1000,
    Enum_02094b30_5000 = 5000
};

extern "C" int func_020952f4(char* arg0);
extern "C" int CompareBytes_02001aec(const void*, const void*, unsigned int);
extern "C" int GetStoryChapter_0201079c(char* gameState);
#endif

// USA: RequestSingleFontLoad_02094b30
extern "C" ARM void RequestSingleFontLoad_02094b30(FontLoader_0208cb08* loader, int fontSetId, int isPackArchive) {
#if defined(jpn)
    if (fontSetId < 0 || loader->requestedFontSetId_34_ >= 0 || loader->unknown_3c_ == fontSetId) return;
    if (loader->unknown_40_ == fontSetId) {
        int isLoaded = 1;
        char fontName[8] = {};
        switch (loader->unknown_40_) {
        case Enum_02094b30_5000:
            if (CompareBytes_02001aec(fontName, loader->unknown_59_, func_020952f4(fontName)) != 0) {
                isLoaded = 0;
            }
            break;
        case Enum_02094b30_1000: {
            int variant = GetStoryChapter_0201079c((char*)GameState::GetInstance());
            variant &= 0xff;
            if (variant != loader->unknown_58_) {
                isLoaded = 0;
            }
            break;
        }
        }
        if (isLoaded) return;
    }
    CancelFontLoad_02094ab0(loader);
    loader->requestedFontSetId_34_ = fontSetId;
    loader->loadState_56_ = 0;
    loader->unknown_57_ = 0;
    loader->unknown_61_ = isPackArchive;
#endif
}
