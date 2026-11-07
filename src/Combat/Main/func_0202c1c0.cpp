#include <globaldefs.h>

struct LocalWireless_0202b2f0;
extern "C" signed char func_0202bcbc(struct LocalWireless_0202b2f0* arg0, int arg1);

// USA: IsLocalWirelessPlayerJoined_0202c1c0
extern "C" ARM int IsLocalWirelessPlayerJoined_0202c1c0(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console = func_0202bcbc(wireless, protagonistObjectIndex);
    if (console < 0) return 0;
    return *(unsigned char*)((char*)wireless + 0x1000 + 0xc) & (1 << console);
}
