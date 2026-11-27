#include <globaldefs.h>

// USA: SetFadeInOnMove_02039d48
extern "C" ARM void SetFadeInOnMove_02039d48(unsigned char* object) {
#if defined(jpn)
    object[0x1c2] |= 4;
#else
    object[0x1ce] |= 4;
#endif
}
