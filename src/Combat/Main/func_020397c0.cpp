#include <globaldefs.h>

// USA: EnablePlayerControl_020397c0
extern "C" ARM void EnablePlayerControl_020397c0(void* object) {
#if defined(jpn)
    *(unsigned char*)((char*)object + 0x247) = 1;
#else
    *(unsigned char*)((char*)object + 0x253) = 1;
#endif
}
