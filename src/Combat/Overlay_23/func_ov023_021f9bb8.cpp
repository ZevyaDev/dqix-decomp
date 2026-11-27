#include <globaldefs.h>

// USA: SetMenuGridCursorColumn_ov023_021f9bb8
extern "C" ARM void SetMenuGridCursorColumn_ov023_021f9bb8(void* grid, unsigned short column) {
    *(unsigned short*)((char*)grid + 0x2a) = column;
}
