#include <globaldefs.h>

// USA: IsControllable_02039820
extern "C" ARM unsigned char IsControllable_02039820(void* object) {
#if defined(jpn)
    return *((unsigned char*)object + 0x246);
#else
    return *((unsigned char*)object + 0x252);
#endif
}
