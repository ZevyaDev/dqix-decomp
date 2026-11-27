#include <globaldefs.h>

extern void* gWirelessIPC_021142e0[];

// USA: GetWirelessDriver_020d41d8
extern "C" ARM void* GetWirelessDriver_020d41d8(void) {
    return gWirelessIPC_021142e0[1];
}
