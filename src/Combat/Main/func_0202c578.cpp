#include <globaldefs.h>

struct LocalWireless_0202b2f0;
struct Struct_0202bcf8;
extern "C" signed char func_0202bcbc(struct LocalWireless_0202b2f0* arg0, int arg1);
extern "C" signed char func_0202bcf8(struct Struct_0202bcf8* arg0, int arg1);

// USA: IsLocalWirelessPlayerDisconnected_0202c578
extern "C" ARM int IsLocalWirelessPlayerDisconnected_0202c578(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console = func_0202bcbc(wireless, protagonistObjectIndex);
    if (console < 0) {
        console = func_0202bcf8((struct Struct_0202bcf8*)wireless, protagonistObjectIndex);
        if (console < 0) return 0;
    }
    return *((unsigned char*)wireless + 0x100e) & (1 << console);
}
