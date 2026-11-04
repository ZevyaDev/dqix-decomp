#include <globaldefs.h>

#if defined(jpn)
// JPN: func_ov009_0218b1e8
extern "C" ARM int func_ov009_0218b1e8(unsigned char* arg0, int arg1) {
    if (arg1 == 2) {
        return (arg0[0] << 8) | arg0[1];
    }
    return *(signed char*)arg0;
}
#endif
