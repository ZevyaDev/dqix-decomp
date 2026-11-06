#include <globaldefs.h>

struct MenuCursor_0205ba68;
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);
struct MenuCursor_0205bcdc;
extern "C" void SetTouchMenuCursorIndex_0205bcdc(struct MenuCursor_0205bcdc* cursor, int index);
extern "C" void SetMenuCursorIndex_0205bb04(void* cursor, int index);

// USA: func_ov003_0215b3bc
extern "C" ARM void func_ov003_0215b3bc(char* arg0) {
    int var0, var1, var2;
    unsigned char var3 = *(unsigned char*)(arg0 + 0x1a4);
    switch (var3) {
    case 1:
        var0 = *(unsigned char*)(arg0 + 0x589);
        var2 = *(signed char*)(arg0 + 0x584);
        var1 = 1;
        break;
    case 2:
        var0 = *(unsigned char*)(arg0 + 0x590);
        var2 = *(signed char*)(arg0 + 0x585);
        var1 = 1;
        break;
    case 3:
        var2 = *(signed char*)(arg0 + 0x586);
        var1 = 1;
        var0 = 2;
        break;
    }

    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 0xf8), var1, var0, 0);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(arg0 + 0x148), var1, var0, 0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 0xf8), var0);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(arg0 + 0x148), var0);
    *(int*)(arg0 + 0xfc) = var1;
    *(int*)(arg0 + 0x14c) = var1;
    SetTouchMenuCursorIndex_0205bcdc((struct MenuCursor_0205bcdc*)(arg0 + 0xf8), var2);
    SetMenuCursorIndex_0205bb04((void*)(arg0 + 0x148), var2);
}
