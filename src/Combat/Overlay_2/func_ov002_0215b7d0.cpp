#include <globaldefs.h>

extern "C" void* GetWirelessLockTable_020e2ff8(void);

struct WirelessLockTable_0208ab34;
extern "C" int GetWirelessLockStatus_020e34bc(struct WirelessLockTable_0208ab34* lockTable, int lockId);

struct WirelessLock_0208ab34_2;
extern "C" void func_020e3468(struct WirelessLock_0208ab34_2* arg0, int arg1);

// USA: func_ov002_0215b7d0
extern "C" ARM int func_ov002_0215b7d0(char* arg0) {
    void* var0 = GetWirelessLockTable_020e2ff8();
    int var1 = GetWirelessLockStatus_020e34bc((struct WirelessLockTable_0208ab34*)var0, 1);
    if (var1 == 1) {
        return 1;
    }
    if ((unsigned int)(var1 - 3) > 2) {
        return 0;
    }
    func_020e3468((struct WirelessLock_0208ab34_2*)var0, 1);
    return -1;
}
