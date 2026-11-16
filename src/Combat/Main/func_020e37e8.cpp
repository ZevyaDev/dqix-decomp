#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" int* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: func_020e37e8
extern "C" ARM int func_020e37e8(unsigned char* arg0) {
    if (IsLocalWirelessOn_0202b7d8(func_0202ae18())) {
        return arg0[2];
    }
    return 1;
}
