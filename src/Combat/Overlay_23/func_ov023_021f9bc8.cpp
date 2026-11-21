#include <globaldefs.h>

// USA: GetMenuGridCursorIndex_ov023_021f9bc8
extern "C" ARM int GetMenuGridCursorIndex_ov023_021f9bc8(char* grid) {
    return *(unsigned short*)(grid + 0x28) * *(unsigned short*)(grid + 0x26) + *(unsigned short*)(grid + 0x2a);
}
