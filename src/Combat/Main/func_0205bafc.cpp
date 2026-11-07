#include <globaldefs.h>

// USA: GetMenuCursorItemCount_0205bafc
extern "C" ARM int GetMenuCursorItemCount_0205bafc(void* cursor) {
    return *(int*)cursor;
}
