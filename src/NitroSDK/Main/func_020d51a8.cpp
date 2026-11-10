#include <globaldefs.h>

extern "C" int CheckWirelessState_020d424c(int, int);
extern "C" int SendWirelessCommand_020d40bc(int, int, int);
extern "C" void SetWirelessCommandCallback_020d404c(int command, int callback);
extern "C" void* func_020d41d8(void);

// USA: func_020d51a8
extern "C" ARM int func_020d51a8(int arg0, int arg1) {
    int var0 = CheckWirelessState_020d424c(1, 2);
    if (var0 != 0) {
        return var0;
    }
    char* var1 = (char*)func_020d41d8();
    *(unsigned short*)(var1 + 0x150) = 0;
    *(int*)(var1 + 0x14c) = 0;
    SetWirelessCommandCallback_020d404c(8, arg0);
    var0 = SendWirelessCommand_020d40bc(8, 1, arg1);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
