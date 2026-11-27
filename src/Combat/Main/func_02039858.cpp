#include <globaldefs.h>

// USA: SetFollowedObjectIndex_02039858
extern "C" ARM void SetFollowedObjectIndex_02039858(unsigned char* object, int index) {
#if defined(jpn)
    object[0x1bc] = index;
#else
    object[0x1c8] = index;
#endif
}
