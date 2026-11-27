#include <globaldefs.h>

struct TextWindow_0205e00c { char unknown_0_[0xe0]; };

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct TextWindow_0205e00c* pTextWindows_9c_;
    char unknown_a0_[0xb4 - 0xa0];
    unsigned char unknown_b4_;
};

extern "C" struct TextWindow_0205e00c* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c*, int);

// USA: GetNextTextWindowSlot_0205e00c
extern "C" ARM struct TextWindow_0205e00c* GetNextTextWindowSlot_0205e00c(struct TextWindowManager_0205d81c* windowManager, int windowId) {
    if (FindTextWindow_0205d81c(windowManager, windowId) != 0) return 0;
    return &windowManager->pTextWindows_9c_[windowManager->unknown_b4_];
}
