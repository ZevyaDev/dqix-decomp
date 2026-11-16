#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct Struct_0204b088_2 { unsigned char unknown_0_[0x20]; };

struct TextWindowManager_0205d2bc {
    char unknown_0_[0x98];
    struct Struct_0204b088_2* pBGLayers_98_;   // 0x98
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char bgLayerCount_b2_;           // 0xb2
};


// USA: CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc
extern "C" ARM void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc* windowManager) {
    unsigned char i;
    if (windowManager->pBGLayers_98_ == 0) return;
    for (i = 0; i < windowManager->bgLayerCount_b2_; i++) {
        ((BGLayer*)(&windowManager->pBGLayers_98_[i]))->UploadIndexBuffer((const void*)(0));
    }
}
