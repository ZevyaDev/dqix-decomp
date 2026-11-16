#include <globaldefs.h>

#if defined(jpn)
#define func_0204be20 func_0204cc40
#endif

// USA: func_0204be20
extern "C" ARM int func_0204be20(unsigned short* arg0) {
    return ((arg0[1] & 0x3e0) >> 5) == 2;
}
