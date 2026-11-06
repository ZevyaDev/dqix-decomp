#include <globaldefs.h>

// USA: GetLeaderObjectIndex_020546a8
extern "C" ARM int GetLeaderObjectIndex_020546a8(void* companion) {
#if defined(jpn)
    return *(signed char*)((char*)companion + 0x2c4);
#else
    return *(signed char*)((char*)companion + 0x2d0);
#endif
}
