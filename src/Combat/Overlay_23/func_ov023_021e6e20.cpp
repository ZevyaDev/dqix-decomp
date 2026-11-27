#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindowManager_0205d81c {
    char unknown_0_[0xb0];
    unsigned char cursorWindowId_b0_;
};

extern "C" int HitTestCursorWindowTouch_0205d97c(TextWindowManager_0205d81c* windowManager);

struct ProfileMenu_ov012_02186a7c {
#if defined(jpn)
    char unknown_0_[0x90];
#else
    char unknown1_0_[0xac];
#endif
    TextWindowManager_0205d81c windowManager_ac_;
};

extern "C" ARM int IsProfileMenuCancelPressed_ov023_021e6e20(ProfileMenu_ov012_02186a7c* menu) {
    int isCancelKeyPressed = g_keyManager.TestKeysPressed(2);
    int isTouchedOutside = HitTestCursorWindowTouch_0205d97c(&menu->windowManager_ac_) == 2;
    return (isCancelKeyPressed | isTouchedOutside) != 0;
}
