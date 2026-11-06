#include <globaldefs.h>

struct TextWindow_0205cf78_2 {
    struct TextWindow_0205cf78_2* pPreviousTextWindow_0_;
    char unknown_4_[0xE0 - 4];
};

struct TextWindowManager_0205cf78 {
    char unknown_0_[0x9C];
    struct TextWindow_0205cf78_2* pTextWindows_9c_;
    char unknown_a0_[0xB3 - 0xA0];
    unsigned char textWindowCapacity_b3_;
};

// USA: SetTextWindowArray_0205cf78
extern "C" ARM void SetTextWindowArray_0205cf78(struct TextWindowManager_0205cf78* windowManager, struct TextWindow_0205cf78_2* textWindows, unsigned char textWindowCapacity) {
    unsigned char i;
    windowManager->pTextWindows_9c_ = textWindows;
    windowManager->textWindowCapacity_b3_ = textWindowCapacity;
    if (windowManager->pTextWindows_9c_ == 0 || windowManager->textWindowCapacity_b3_ == 0) return;
    for (i = 1; i < windowManager->textWindowCapacity_b3_; i++) {
        windowManager->pTextWindows_9c_[i].pPreviousTextWindow_0_ = &windowManager->pTextWindows_9c_[i - 1];
    }
}
