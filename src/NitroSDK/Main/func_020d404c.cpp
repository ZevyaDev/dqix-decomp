#include <globaldefs.h>

struct Struct_020d404c { unsigned char unknown_0_[0x18]; int commandCallbacks_18_[1]; };

extern char data_021142e0;

// USA: SetWirelessCommandCallback_020d404c
extern "C" ARM void SetWirelessCommandCallback_020d404c(int command, int callback) {
    struct Struct_020d404c* wirelessDriver = *(struct Struct_020d404c**)(&data_021142e0 + 4);
    wirelessDriver->commandCallbacks_18_[command] = callback;
}
