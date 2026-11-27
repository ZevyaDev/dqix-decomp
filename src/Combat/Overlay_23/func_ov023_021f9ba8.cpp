#include <globaldefs.h>

// USA: SetMenuGridCursorRow_ov023_021f9ba8
extern "C" ARM void SetMenuGridCursorRow_ov023_021f9ba8(void* grid, unsigned short row) {
    *(unsigned short*)((char*)grid + 0x28) = row;
}
