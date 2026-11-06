#include <globaldefs.h>

struct MenuCursor_0205bb84;
extern "C" int GetMenuCursorIndex_0205bb84(struct MenuCursor_0205bb84* cursor);
extern "C" void SetMenuCursorIndex_0205bb04(void* cursor, int index);

struct MenuCursor_0205bacc {
    int itemCount_0_;
};

// USA: SetMenuCursorItemCount_0205bacc
extern "C" ARM void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount) {
    if (itemCount < 0) return;
    cursor->itemCount_0_ = itemCount;
    if (GetMenuCursorIndex_0205bb84((struct MenuCursor_0205bb84*)cursor) < itemCount) return;
    SetMenuCursorIndex_0205bb04(cursor, itemCount - 1);
}
