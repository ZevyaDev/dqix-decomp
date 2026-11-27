#include <globaldefs.h>

struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorGrid_0205ba68(struct MenuCursor_0205ba68* cursor, int columnCount, int rowCount, int isRowMajor);
extern "C" void SetMenuCursorItemCount_0205bacc(struct MenuCursor_0205bacc* cursor, int itemCount);

// USA: SetMenuCursorsGrid_0205cf28
extern "C" ARM void SetMenuCursorsGrid_0205cf28(unsigned char* cursors, int columnCount, int rowCount, int isRowMajor) {
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(cursors + 4), columnCount, rowCount, isRowMajor);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)(cursors + 0x54), columnCount, rowCount, isRowMajor);
    int itemCount = columnCount * rowCount;
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(cursors + 4), itemCount);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)(cursors + 0x54), itemCount);
}
