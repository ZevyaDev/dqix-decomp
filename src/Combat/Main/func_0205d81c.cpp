#include <globaldefs.h>

struct TextWindow_0205d0e0 {
    char unknown_0_[0xC4];
    unsigned char unknown_c4_;
    char unknown_c5_[0xE0 - 0xC5];
};

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct TextWindow_0205d0e0* pTextWindows_9c_;
    char unknown_a0_[0xB3 - 0xA0];
    unsigned char textWindowCapacity_b3_;
    unsigned char unknown_b4_;
};

// USA: FindTextWindow_0205d81c
extern "C" ARM struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId) {
    unsigned char i;
    if (windowManager->unknown_98_ == 0) return 0;
    if (windowManager->pTextWindows_9c_ == 0) return 0;
    for (i = 0; i < windowManager->textWindowCapacity_b3_; i++) {
        if (i == windowManager->unknown_b4_) break;
        if (windowId == windowManager->pTextWindows_9c_[i].unknown_c4_) return &windowManager->pTextWindows_9c_[i];
    }
    return 0;
}
