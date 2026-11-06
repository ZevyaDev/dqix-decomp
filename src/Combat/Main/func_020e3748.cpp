#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: func_020e3748
extern "C" ARM void func_020e3748(unsigned char* arg0, int arg1) {
    if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())) {
        arg0[1] &= ~(1 << arg1);
    }
}
