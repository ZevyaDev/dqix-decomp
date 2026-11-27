#include <globaldefs.h>

// USA: ClearFadeInOnMove_02039d58
extern "C" ARM void ClearFadeInOnMove_02039d58(unsigned char* object) {
#if defined(jpn)
    object[0x1c2] &= ~4;
#else
    object[0x1ce] &= ~4;
#endif
}
