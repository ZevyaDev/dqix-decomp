#include <globaldefs.h>

// USA: EnableTouchMenuCursor_0205cef8
extern "C" ARM void EnableTouchMenuCursor_0205cef8(void* windowManager) {
    *(unsigned char*)((char*)windowManager + 0x94) = 1;
}
