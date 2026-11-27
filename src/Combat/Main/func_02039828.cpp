#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039828_595 = 0x247 };
#else
enum { Enum_02039828_595 = 0x253 };
#endif

// USA: IsControlRequested_02039828
extern "C" ARM unsigned char IsControlRequested_02039828(void* object) {
    return *((unsigned char*)object + Enum_02039828_595);
}
