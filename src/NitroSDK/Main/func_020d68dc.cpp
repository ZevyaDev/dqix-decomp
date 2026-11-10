#include <globaldefs.h>

extern "C" int func_020d4204(void);
void CleanCacheRange(const void* addr, unsigned int size);
extern "C" void SetWirelessCommandCallback_020d404c(int command, int callback);
extern "C" int SendWirelessCommand_020d40bc(int command, int paramCount, unsigned int arg2, int arg3);

// USA: func_020d68dc
extern "C" ARM int func_020d68dc(int arg0, unsigned int arg1, void* arg2) {
    int var0 = func_020d4204();
    if (var0 != 0) return var0;
    if (arg1 > 3) return 6;
    if (arg1 != 0) {
        if (arg2 == 0) return 6;
        CleanCacheRange((const void*)((int)arg2), 0x50);
    }
    SetWirelessCommandCallback_020d404c(0x14, arg0);
    int var1 = SendWirelessCommand_020d40bc(0x14, 2, arg1, (int)arg2);
    return (var1 == 0) ? 2 : var1;
}
