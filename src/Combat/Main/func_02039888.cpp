#include <globaldefs.h>

// USA: GetPartyLeaderObjectIndex_02039888
extern "C" ARM int GetPartyLeaderObjectIndex_02039888(void* object) {
#if defined(jpn)
    return *(signed char*)((char*)object + 0x1be);
#else
    return *(signed char*)((char*)object + 0x1ca);
#endif
}
