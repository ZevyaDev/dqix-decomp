#include <globaldefs.h>
#include "std_library_functions.h"

// USA: SetOwnPartyOrder_02011468
// Copies 'size' bytes from 'src' into the buffer at +0x5718 and stores the size byte at +0x571c.
extern "C" ARM void SetOwnPartyOrder_02011468(void* gameState, int count, void* ownPartyOrder) {
#if defined(jpn)
    memcpy((char*)gameState + 0x54b8, ownPartyOrder, count);
#else
    memcpy((char*)gameState + 0x5718, ownPartyOrder, count);
#endif
#if defined(jpn)
    *((char*)gameState + 0x54bc) = (char)count;
#else
    *((char*)gameState + 0x571c) = (char)count;
#endif
}
