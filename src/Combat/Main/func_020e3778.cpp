#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" int* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: func_020e3778
extern "C" ARM void func_020e3778(unsigned char* arg0) {
    if (IsLocalWirelessOn_0202b7d8(func_0202ae18())) {
        arg0[2] = 1;
    }
}
