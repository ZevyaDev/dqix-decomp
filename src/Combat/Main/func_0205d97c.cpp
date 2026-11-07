#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindowManager_0205d81c {
    char unknown_0_[0xb0];
    unsigned char cursorWindowId_b0_;
};
struct TextWindow_0205d0e0 {
    char unknown_0_[0xa8];
    short width_a8_;
    short unknown_aa_;
    short tileX_ac_;
    short tileY_ae_;
};
extern "C" TextWindow_0205d0e0* FindTextWindow_0205d81c(TextWindowManager_0205d81c*, int);

// USA: HitTestCursorWindowTouch_0205d97c
extern "C" ARM int HitTestCursorWindowTouch_0205d97c(TextWindowManager_0205d81c* windowManager) {
    if (!g_touchInput.pressed_) return -1;
    TextWindow_0205d0e0* var0;
    int touchX;
    int touchY;
    var0 = FindTextWindow_0205d81c(windowManager, windowManager->cursorWindowId_b0_);
    if (var0 == NULL) return 0;
    g_touchInput.GetTouchPoint(&touchX, &touchY);
    if (touchX == 0 || touchY == 0) return 0;
    int left = var0->tileX_ac_;
    int top = var0->tileY_ae_;
    int width = var0->width_a8_;
    int height = var0->unknown_aa_;
    left = (short)(left << 3);
    top = (short)(top << 3);
    width = (short)(width << 3);
    height = (short)(height << 3);
    int right = left + width;
    int bottom = top + height;
    if (left <= touchX && touchX < right && top <= touchY && touchY < bottom) return 1;
    return 2;
}
