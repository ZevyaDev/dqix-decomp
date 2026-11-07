#include <globaldefs.h>
extern "C" int func_020d472c(void*);

extern char gLocalWirelessLink_021015a0;
extern "C" void SetLocalWirelessLinkError_0202c848(int);

// USA: func_0202db08
extern "C" ARM void func_0202db08(unsigned short* arg0) {
    int var0;
    if (arg0[1] != 0) {
        SetLocalWirelessLinkError_0202c848(arg0[1]);
        *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 0xa;
        return;
    }
    var0 = func_020d472c((void*)(*(int*)(&gLocalWirelessLink_021015a0 + 0x40)));
    if (var0 == 0) {
        *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 1;
        return;
    }
    SetLocalWirelessLinkError_0202c848(var0);
    *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 0xa;
}
