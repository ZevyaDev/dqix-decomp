#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void*);
extern "C" void func_ov017_021ced48(int, int);

// USA: func_020e36f0
extern "C" ARM void func_020e36f0(unsigned char* arg0) {
    void* var0 = GetLocalWireless_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) return;
    if (IsNotLocalWirelessGuest_0202c508(var0)) {
        if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())) {
            arg0[0] |= 1;
        }
        return;
    }
    func_ov017_021ced48(0, 0);
}
