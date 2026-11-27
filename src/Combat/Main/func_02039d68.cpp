#include <globaldefs.h>

// USA: IsFadeInOnMove_02039d68
extern "C" ARM int IsFadeInOnMove_02039d68(unsigned char* object) {
#if defined(jpn)
    return (object[0x1c2] & 4) != 0;
#else
    return (object[0x1ce] & 4) != 0;
#endif
}
