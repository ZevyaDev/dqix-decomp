#include <globaldefs.h>

extern char gLocalWirelessLink_021015a0;
extern "C" void SetLocalWirelessLinkError_0202c848(int);

// USA: func_0202cd28
extern "C" ARM void func_0202cd28(unsigned short* arg0) {
    if (arg0[1] == 0) {
        *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 1;
        return;
    }
    SetLocalWirelessLinkError_0202c848(arg0[1]);
}
