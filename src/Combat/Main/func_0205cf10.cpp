#include <globaldefs.h>

// USA: DisableTouchMenuCursor_0205cf10
extern "C" ARM void DisableTouchMenuCursor_0205cf10(void* windowManager) {
    *(unsigned char*)((char*)windowManager + 0x94) = 0;
}
