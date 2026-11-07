#include <globaldefs.h>

// USA: SetMenuCursorTouchedIndex_0205bc24
extern "C" ARM void SetMenuCursorTouchedIndex_0205bc24(void* cursor, int index) {
    *(int*)((char*)cursor + 0x30) = index;
}
