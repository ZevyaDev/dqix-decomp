#include <globaldefs.h>

extern "C" int* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: func_020e3778
extern "C" ARM void func_020e3778(unsigned char* arg0) {
    if (IsLocalWirelessOn_0202b7d8(GetLocalWireless_0202ae18())) {
        arg0[2] = 1;
    }
}
