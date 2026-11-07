#include <globaldefs.h>
extern "C" int func_020d5aec(int);

extern char gLocalWirelessLink_021015a0;
extern "C" void func_0202d584(void);
extern "C" void SetLocalWirelessLinkError_0202c848(int);

// USA: func_0202d54c
extern "C" ARM int func_0202d54c(void) {
    int var0;
    *(int*)(&gLocalWirelessLink_021015a0 + 0x10) = 3;
    var0 = func_020d5aec((int)((void*)func_0202d584));
    if (var0 == 2) return 1;
    SetLocalWirelessLinkError_0202c848(var0);
    return 0;
}
