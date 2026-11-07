#include <globaldefs.h>

// USA: IsOnLadder_02039d7c
extern "C" ARM unsigned char IsOnLadder_02039d7c(char* object) {
#if defined(jpn)
    return object[0x260];
#else
    return object[0x26c];
#endif
}
