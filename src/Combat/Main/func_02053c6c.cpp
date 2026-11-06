#include <globaldefs.h>

// USA: GetPartyMemberData_02053c6c
extern "C" ARM int GetPartyMemberData_02053c6c(unsigned char* gameObject) {
#if defined(jpn)
    return *(int*)(gameObject + 0x144);
#else
    return *(int*)(gameObject + 0x150);
#endif
}
