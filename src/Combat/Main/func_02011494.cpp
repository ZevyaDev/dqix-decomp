#include <globaldefs.h>
#include "std_library_functions.h"

// USA: GetOwnPartyOrder_02011494
extern "C" ARM unsigned char GetOwnPartyOrder_02011494(char* gameState, void* arg1) {
#if defined(jpn)
    unsigned char count = *(unsigned char*)(gameState + 0x54bc);
#else
    unsigned char count = *(unsigned char*)(gameState + 0x571c);
#endif
#if defined(jpn)
    memcpy(arg1, gameState + 0x54b8, count);
#else
    memcpy(arg1, gameState + 0x5718, count);
#endif
#if defined(jpn)
    return *(unsigned char*)(gameState + 0x54bc);
#else
    return *(unsigned char*)(gameState + 0x571c);
#endif
}
