#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020546b4_721 = 0x2c5 };
#else
enum { Enum_020546b4_721 = 0x2d1 };
#endif

// USA: SetFollowerIndex_020546b4
extern "C" ARM void SetFollowerIndex_020546b4(void* companion, int followerIndex) {
    *(unsigned char*)((char*)companion + Enum_020546b4_721) = followerIndex;
}
