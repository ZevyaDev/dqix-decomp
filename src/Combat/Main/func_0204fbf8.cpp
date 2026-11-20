#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "Graphics/BGLayer.h"


struct BGLayer_0204fbf8 {
    char unknown_0_[0x1c];
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
};

struct TextWindow_0204fbf8_2 {
    char unknown_0_[0x4];
    struct BGLayer_0204fbf8* pBGLayer_4_;
    void* pCharacterData_8_;
    char unknown_c_[0xa0 - 0xc];
    int characterDataOffset_a0_;
    int characterDataSize_a4_;
};

// USA: LoadTextWindowCharacterData_0204fbf8
extern "C" ARM void LoadTextWindowCharacterData_0204fbf8(TextWindow_0204fbf8_2* textWindow) {
    unsigned char bgIndex = textWindow->pBGLayer_4_->bgIndex_1c_4_;
    unsigned char isSubScreen = textWindow->pBGLayer_4_->isSubScreen_1c_0_;
    unsigned char screenAndBGIndex[2];
    screenAndBGIndex[0] = isSubScreen;
    screenAndBGIndex[1] = bgIndex;
    void (*loadProc)(void*, int, unsigned int) = (void(*)(void*, int, unsigned int))((int)GetCharVRAMLoadProc(screenAndBGIndex[0], screenAndBGIndex[1]));
    CleanInvalidateCacheRange((const void*)(textWindow->pCharacterData_8_), textWindow->characterDataSize_a4_);
    loadProc(textWindow->pCharacterData_8_, textWindow->characterDataOffset_a0_, textWindow->characterDataSize_a4_);
}
