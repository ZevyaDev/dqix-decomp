#include <globaldefs.h>
#include "std_library_functions.h"

// USA: SetPartyOrder_020114c0
extern "C" ARM void SetPartyOrder_020114c0(char* gameState, int count, void* partyOrder) {
#if defined(jpn)
    memcpy(gameState + 0x54bd, partyOrder, count);
#else
    memcpy(gameState + 0x571d, partyOrder, count);
#endif
#if defined(jpn)
    *(unsigned char*)(gameState + 0x54c1) = (unsigned char)count;
#else
    *(unsigned char*)(gameState + 0x5721) = (unsigned char)count;
#endif
}
