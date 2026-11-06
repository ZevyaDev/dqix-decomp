#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84* arg0);
extern "C" void SetMenuCursorIndex_0205bb04(void* cursor, int index);

struct MenuCursor_0205bacc {
    int itemCount_0_;
};

// USA: SetMenuCursorItemCount_0205bacc
extern "C" ARM void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount) {
    if (itemCount < 0) return;
    cursor->itemCount_0_ = itemCount;
    if (func_0205bb84((struct Struct_0205bb84*)cursor) < itemCount) return;
    SetMenuCursorIndex_0205bb04(cursor, itemCount - 1);
}
