#include <globaldefs.h>

extern "C" void FlushBGScreenData_0204b04c(void* layer, int screenData);

struct Struct_0204b04c_2 { char unknown_0_[0x20]; };

struct TextWindowManager_0205d274 {
    char unknown_0_[0x98];
    Struct_0204b04c_2* pBGLayers_98_;
    char unknown_9c_[0x16];
    unsigned char bgLayerCount_b2_;
};

// USA: FlushTextWindowManagerBGScreenData_0205d274
extern "C" ARM void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274* windowManager) {
    unsigned char i;
    if (windowManager->pBGLayers_98_ == NULL) return;
    for (i = 0; i < windowManager->bgLayerCount_b2_; i++) {
        FlushBGScreenData_0204b04c(&windowManager->pBGLayers_98_[i], 0);
    }
}
