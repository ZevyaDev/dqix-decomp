#include <globaldefs.h>

// USA: EnableKeyMenuCursor_0205cf04
extern "C" ARM void EnableKeyMenuCursor_0205cf04(void* windowManager) {
    *(unsigned char*)((char*)windowManager + 0x95) = 1;
}
