#include <globaldefs.h>

extern "C" int GetMenuCursorItemCount_0205bafc(void* cursor);
extern "C" void SetMenuCursorIndex_0205bb04(void* cursor, int index);
struct MenuCursor_0205bcdc {
    int itemCount_0_;
    char unknown_4_[0x2c];
    int unknown_30_;
};
extern "C" void SetTouchMenuCursorIndex_0205bcdc(struct MenuCursor_0205bcdc* cursor, int index);

// USA: SetCursorIndex_0205d7a0
extern "C" ARM void SetCursorIndex_0205d7a0(unsigned char* windowManager, int index) {
    int itemCount;
    if (windowManager[0x95]) {
        itemCount = GetMenuCursorItemCount_0205bafc(windowManager + 0x54);
    } else if (windowManager[0x94]) {
        itemCount = GetMenuCursorItemCount_0205bafc(windowManager + 0x4);
    }
    if (index < 0) {
        if (itemCount <= index) return;
    }
    if (windowManager[0x95]) {
        SetMenuCursorIndex_0205bb04(windowManager + 0x54, index);
    }
    if (windowManager[0x94] == 0) return;
    SetTouchMenuCursorIndex_0205bcdc((struct MenuCursor_0205bcdc*)(windowManager + 0x4), index);
}
