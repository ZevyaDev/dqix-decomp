#include <globaldefs.h>

struct TextWindowManager_0205d0e0_2 {
    char unknown_0_[0x98];
    int pBGLayers_98_;
    void* pTextWindows_9c_;
    char unknown_a0_[0x14];
    unsigned char textWindowCount_b4_;
};

// USA: GetLastOpenedTextWindow_0205d888
extern "C" ARM void* GetLastOpenedTextWindow_0205d888(struct TextWindowManager_0205d0e0_2* windowManager) {
    void* textWindows;
    if (windowManager->pBGLayers_98_ == 0) return 0;
    textWindows = windowManager->pTextWindows_9c_;
    if (textWindows == 0) return 0;
    return windowManager->textWindowCount_b4_ != 0 ? (char*)textWindows + (windowManager->textWindowCount_b4_ - 1) * 0xE0 : 0;
}
