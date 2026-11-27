#include <globaldefs.h>

// USA: SetFollowLineIndex_0203986c
extern "C" ARM void SetFollowLineIndex_0203986c(unsigned char* object, int lineIndex) {
#if defined(jpn)
    object[0x1bd] = lineIndex;
#else
    object[0x1c9] = lineIndex;
#endif
}
