#include <globaldefs.h>

struct BGLayer_0204b010 { char unknown_0_[0x20]; };
extern "C" void ClearBGScreenData_0204b010(BGLayer_0204b010*, void*);

struct TextWindowManager_0205d1e0 {
    char unknown_0_[0x98];
    BGLayer_0204b010* pBGLayers_98_;
    char unknown_9c_[0x16];
    unsigned char bgLayerCount_b2_;
};

// USA: ClearTextWindowManagerBGScreenData_0205d1e0
extern "C" ARM void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0* windowManager) {
    unsigned char i;
    if (windowManager->pBGLayers_98_ == NULL) return;
    for (i = 0; i < windowManager->bgLayerCount_b2_; i++) {
        ClearBGScreenData_0204b010(&windowManager->pBGLayers_98_[i], NULL);
    }
}
