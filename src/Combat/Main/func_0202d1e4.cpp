#include <globaldefs.h>

extern char gLocalWirelessLink_021015a0;
extern "C" int func_0202d224(void);
extern "C" void SetLocalWirelessLinkError_0202c848(int errorCode);

// USA: func_0202d1e4
extern "C" ARM void func_0202d1e4(unsigned short* arg0) {
    unsigned short var0 = arg0[1];
    if (var0 != 0) {
        SetLocalWirelessLinkError_0202c848(var0);
        *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 9;
        return;
    }
    if (func_0202d224() == 0) {
        *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 9;
    }
}
