#include <globaldefs.h>

// USA: GetFollowedObjectIndex_02039860
extern "C" ARM int GetFollowedObjectIndex_02039860(void* object) {
#if defined(jpn)
    return *(signed char*)((char*)object + 0x1bc);
#else
    return *(signed char*)((char*)object + 0x1c8);
#endif
}
