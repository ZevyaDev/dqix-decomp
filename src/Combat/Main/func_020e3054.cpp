#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct WirelessLock_0208ab34_2 {
    unsigned char ownerObjectIndex_0_;
    unsigned char unknown_1_;
    unsigned char state_2_;
    unsigned char unknown_3_;
};

// USA: func_020e3054
extern "C" ARM struct WirelessLock_0208ab34_2* func_020e3054(struct WirelessLock_0208ab34_2* arg0, int arg1) {
    int var0;
    if (!IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) return NULL;
    for (var0 = 0; var0 < 8; var0++) {
        if (arg0->unknown_1_ == arg1) return arg0;
        arg0++;
    }
    return NULL;
}
