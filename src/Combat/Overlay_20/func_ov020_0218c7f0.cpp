#include <globaldefs.h>

struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);

// USA: func_ov020_0218c7f0
extern "C" ARM void func_ov020_0218c7f0(unsigned char* arg0, int arg1, int arg2) {
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 0x20), arg1, arg2, 0);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 0x70), arg1, arg2, 0);
    int var0 = arg1 * arg2;
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 0x20), var0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 0x70), var0);
}
