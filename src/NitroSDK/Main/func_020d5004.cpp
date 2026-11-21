#include <globaldefs.h>

extern "C" int SendWirelessCommand_020d40bc(int, int);
extern "C" int func_020d4204(void);
extern "C" void SetWirelessCommandCallback_020d404c(int command, int callback);

// USA: ResetWirelessDriver_020d5004
extern "C" ARM int ResetWirelessDriver_020d5004(int callback) {
    int result = func_020d4204();
    if (result != 0) return result;
    SetWirelessCommandCallback_020d404c(1, callback);
    result = SendWirelessCommand_020d40bc(1, 0);
    if (result == 0) result = 2;
    return result;
}
