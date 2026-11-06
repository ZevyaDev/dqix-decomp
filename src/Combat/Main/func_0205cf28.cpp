#include <globaldefs.h>

struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);

// USA: func_0205cf28
extern "C" ARM void func_0205cf28(unsigned char* arg0, int arg1, int arg2, int arg3) {
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 4), arg1, arg2, arg3);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 0x54), arg1, arg2, arg3);
    int var0 = arg1 * arg2;
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 4), var0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 0x54), var0);
}
