#include <globaldefs.h>

extern char gLocalWirelessLink_021015a0;

// USA: func_0202d0b4
extern "C" ARM int func_0202d0b4(void) {
    if (*(int*)(&gLocalWirelessLink_021015a0 + 0x10) != 2) return 0;
    *(short*)(&gLocalWirelessLink_021015a0 + 0x4) = 0;
    *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 3;
    return 1;
}
