#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void*);
extern "C" void func_ov017_021ced48(int, int);

// USA: func_020e36f0
extern "C" ARM void func_020e36f0(unsigned char* arg0) {
    void* var0 = func_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) return;
    if (IsNotLocalWirelessGuest_0202c508(var0)) {
        if (IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) {
            arg0[0] |= 1;
        }
        return;
    }
    func_ov017_021ced48(0, 0);
}
