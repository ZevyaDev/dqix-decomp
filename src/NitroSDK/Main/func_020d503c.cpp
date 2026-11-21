#include <globaldefs.h>

extern "C" int CheckWirelessState_020d424c(int, int);
extern "C" int SendWirelessCommand_020d40bc(int, int);
extern "C" void SetWirelessCommandCallback_020d404c(int command, int callback);

// USA: ShutDownWirelessDriver_020d503c
extern "C" ARM int ShutDownWirelessDriver_020d503c(int callback) {
    int result = CheckWirelessState_020d424c(1, 2);
    if (result != 0) return result;
    SetWirelessCommandCallback_020d404c(2, callback);
    result = SendWirelessCommand_020d40bc(2, 0);
    if (result == 0) result = 2;
    return result;
}
