#include <globaldefs.h>

struct Struct_0205d304_2;
extern "C" void func_0205d594(struct Struct_0205d304_2* arg0, unsigned char* arg1, unsigned char* arg2);

struct TextWindow_0205de24 {
    char unknown_0_[0x4];
    void* pBGLayer_4_;
    char unknown_8_[0xE0 - 0x8];
};

struct TextWindowManager_0205de24_2 {
    char unknown_0_[0x98];
    unsigned char* pBGLayers_98_;
    unsigned char* pTextWindows_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char bgLayerCount_b2_;
    char unknown_b3_[0xb4 - 0xb3];
    unsigned char textWindowCount_b4_;
};

// USA: SetNextTextWindowBGLayer_0205de24
extern "C" ARM void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex) {
    if (windowManager->pBGLayers_98_ == 0 || windowManager->pTextWindows_9c_ == 0) return;
    struct TextWindow_0205de24* nextWindow = (struct TextWindow_0205de24*)(windowManager->pTextWindows_9c_ + windowManager->textWindowCount_b4_ * 0xE0);
    if (nextWindow == 0) return;
    unsigned char* layer;
    unsigned char i = 0;
    unsigned char layerIsSubScreen, layerBGIndex;
    while (i < windowManager->bgLayerCount_b2_) {
        layer = windowManager->pBGLayers_98_ + i * 0x20;
        func_0205d594((struct Struct_0205d304_2*)layer, &layerIsSubScreen, &layerBGIndex);
        if (layerIsSubScreen == isSubScreen && layerBGIndex == bgIndex) {
            nextWindow->pBGLayer_4_ = layer;
            return;
        }
        i++;
    }
}
