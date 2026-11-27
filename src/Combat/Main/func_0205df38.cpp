#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindow_0205df38 {
    char unknown_0_[0xa8];
    short width_a8_;
    short height_aa_;
    short tileX_ac_;
    short tileY_ae_;
};

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    void* unknown_98_;
    struct TextWindow_0205df38* pTextWindows_9c_;
};

extern "C" struct TextWindow_0205df38* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);

// USA: IsTextWindowTouched_0205df38
extern "C" ARM int IsTextWindowTouched_0205df38(struct TextWindowManager_0205d81c* windowManager, int windowId) {
    int touchX, touchY;
    struct TextWindow_0205df38* textWindow;
    short tileX, width, tileY, height;
    int tileRight, tileBottom;

    if (windowManager->unknown_98_ == 0) return 0;
    if (windowManager->pTextWindows_9c_ == 0) return 0;

    if (!g_touchInput.pressed_) goto zero;

    g_touchInput.GetTouchPoint(&touchX, &touchY);

    textWindow = FindTextWindow_0205d81c(windowManager, windowId);
    if (textWindow == 0) goto zero;

    tileX = textWindow->tileX_ac_;
    width = textWindow->width_a8_;
    tileY = textWindow->tileY_ae_;
    height = textWindow->height_aa_;
    tileRight = (short)(tileX + width);
    tileBottom = (short)(tileY + height);

    if (touchX > ((tileX << 0x13) >> 0x10)) {
        if (touchX < ((tileRight << 0x13) >> 0x10)) {
            if (touchY > ((tileY << 0x13) >> 0x10)) {
                if (touchY < ((tileBottom << 0x13) >> 0x10)) {
                    return 1;
                }
            }
        }
    }
zero:
    return 0;
}
