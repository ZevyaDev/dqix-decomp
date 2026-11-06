#include <globaldefs.h>
#include "std_library_functions.h"

// USA: GetPartyOrder_020114ec
extern "C" ARM unsigned char GetPartyOrder_020114ec(char* gameState, void* outPartyOrder) {
#if defined(jpn)
    unsigned char count = *(unsigned char*)(gameState + 0x54c1);
#else
    unsigned char count = *(unsigned char*)(gameState + 0x5721);
#endif
#if defined(jpn)
    memcpy(outPartyOrder, gameState + 0x54bd, count);
#else
    memcpy(outPartyOrder, gameState + 0x571d, count);
#endif
#if defined(jpn)
    return *(unsigned char*)(gameState + 0x54c1);
#else
    return *(unsigned char*)(gameState + 0x5721);
#endif
}
