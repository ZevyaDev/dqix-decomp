#include <globaldefs.h>

struct TextWindow_0205d0e0 {
    char unknown_0_[0xc2];
    unsigned short palette_c2_;
    char unknown_c4_[0xe0 - 0xc4];
};

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct TextWindow_0205d0e0* pTextWindows_9c_;
    char unknown_a0_[0xe0 - 0xa0];
};

extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c*, int);

// USA: SetTextWindowPalette_0205deb4
extern "C" ARM void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette) {
    struct TextWindow_0205d0e0* textWindow;
    if (windowManager->unknown_98_ == 0 || windowManager->pTextWindows_9c_ == 0) return;
    textWindow = FindTextWindow_0205d81c(windowManager, windowId);
    if (textWindow != 0) {
        unsigned short maskedPalette = palette & 0xf;
        textWindow->palette_c2_ = maskedPalette & 0xf;
    }
}
