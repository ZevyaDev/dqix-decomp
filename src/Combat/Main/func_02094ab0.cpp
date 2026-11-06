#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct FontLoader_02094ab0 {
    unsigned char unknown_0_[0x14];
    int loadTaskIds_14_[8];
    int requestedFontSetId_34_;
    int nextRequestedFontSetId_38_;
    unsigned char unknown_3c_[0x54 - 0x3c];
    unsigned char unknown_54_;
    unsigned char unknown_55_;
    unsigned char loadState_56_;
    unsigned char unknown_57_;
    unsigned char unknown_58_[0x61 - 0x58];
    unsigned char unknown_61_;
    unsigned char unknown_62_;
};

// USA: CancelFontLoad_02094ab0
extern "C" ARM void CancelFontLoad_02094ab0(struct FontLoader_02094ab0* loader) {
    int backgroundLoader = (int)BackgroundLoader::GetInstance();
    unsigned char i;
    for (i = 0; i < 8; i++) {
        if (loader->loadTaskIds_14_[i] >= 0) {
            ((BackgroundLoader*)(backgroundLoader))->RemoveTask((int)(loader->loadTaskIds_14_[i]));
            loader->loadTaskIds_14_[i] = -1;
        }
    }
    loader->requestedFontSetId_34_ = loader->nextRequestedFontSetId_38_ = -1;
    loader->loadState_56_ = 1;
    loader->unknown_54_ = loader->unknown_55_ = loader->unknown_61_ = loader->unknown_62_ = loader->unknown_57_ = 0;
}
