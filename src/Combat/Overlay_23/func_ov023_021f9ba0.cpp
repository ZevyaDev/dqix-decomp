#include <globaldefs.h>

// USA: GetMenuGridRowCount_ov023_021f9ba0
extern "C" ARM unsigned int GetMenuGridRowCount_ov023_021f9ba0(void* grid) {
    return *(unsigned short*)((char*)grid + 0x24);
}
