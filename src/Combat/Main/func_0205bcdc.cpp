#include <globaldefs.h>

extern "C" void SetMenuCursorIndex_0205bb04(void*, int);

struct MenuCursor_0205bcdc {
    int itemCount_0_;
    char unknown_4_[0x2c];
    int unknown_30_;
};

// USA: SetTouchMenuCursorIndex_0205bcdc
extern "C" ARM void SetTouchMenuCursorIndex_0205bcdc(struct MenuCursor_0205bcdc* cursor, int index) {
    if (index < 0) return;
    if (cursor->itemCount_0_ <= index) return;
    cursor->unknown_30_ = -1;
    SetMenuCursorIndex_0205bb04(cursor, index);
}
