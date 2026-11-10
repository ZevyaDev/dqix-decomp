#include <globaldefs.h>

struct LocalWireless_0202b2f0;
extern "C" signed char func_0202bcbc(struct LocalWireless_0202b2f0* arg0, int arg1);
extern "C" void UpdateLocalWirelessPlayerCount_0202c288(void* wireless);

// USA: func_0202c1e8
extern "C" ARM void func_0202c1e8(struct LocalWireless_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) return;
    *((unsigned char*)arg0 + 0x100c) |= (1 << var0);
    UpdateLocalWirelessPlayerCount_0202c288(arg0);
}
