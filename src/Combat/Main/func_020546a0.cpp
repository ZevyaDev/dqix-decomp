#include <globaldefs.h>

// USA: SetLeaderObjectIndex_020546a0
extern "C" ARM void SetLeaderObjectIndex_020546a0(void* companion, int leaderObjectIndex) {
#if defined(jpn)
    *(unsigned char*)((char*)companion + 0x2c4) = leaderObjectIndex;
#else
    *(unsigned char*)((char*)companion + 0x2d0) = leaderObjectIndex;
#endif
}
