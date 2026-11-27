#include <globaldefs.h>

// USA: SetPartyWipedOut_0201075c
extern "C" ARM void SetPartyWipedOut_0201075c(char* gameState, unsigned char isWipedOut) {
#if defined(jpn)
    *(unsigned char*)(gameState + 0x54c9) = isWipedOut;
#else
    *(unsigned char*)(gameState + 0x5729) = isWipedOut;
#endif
}
