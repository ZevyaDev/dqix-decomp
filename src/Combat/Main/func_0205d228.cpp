#include <globaldefs.h>
extern "C" void func_0204c8f0(struct Struct_0204c8f0*);


struct TextWindow_0204c8f0_2 { char unknown_0_[0xe0]; };

struct TextWindowManager_0205d228 {
    char unknown_0_[0x98];
    void* pBGLayers_98_;
    TextWindow_0204c8f0_2* pTextWindows_9c_;
    char unknown_a0_[0x13];
    unsigned char textWindowCapacity_b3_;
};

// USA: DrawTextWindows_0205d228
extern "C" ARM void DrawTextWindows_0205d228(TextWindowManager_0205d228* windowManager) {
    unsigned char i;
    if (windowManager->pBGLayers_98_ == NULL || windowManager->pTextWindows_9c_ == NULL) return;
    for (i = 0; i < windowManager->textWindowCapacity_b3_; i++) {
        func_0204c8f0((struct Struct_0204c8f0*)(&windowManager->pTextWindows_9c_[i]));
    }
}
