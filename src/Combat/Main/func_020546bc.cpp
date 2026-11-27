#include <globaldefs.h>

// USA: GetFollowerIndex_020546bc
extern "C" ARM int GetFollowerIndex_020546bc(void* companion) {
#if defined(jpn)
    return *(signed char*)((char*)companion + 0x2c5);
#else
    return *(signed char*)((char*)companion + 0x2d1);
#endif
}
