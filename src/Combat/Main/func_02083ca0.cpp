#include <globaldefs.h>

// USA: SetVocation_02083ca0
extern "C" ARM void SetVocation_02083ca0(unsigned char* memberData, int vocation) {
#if defined(jpn)
    *(unsigned short*)(memberData + 0x8bc) |= 1 << vocation;
#else
    *(unsigned short*)(memberData + 0x954) |= 1 << vocation;
#endif
#if defined(jpn)
    *(int*)(memberData + 0x8b8) = vocation;
#else
    *(int*)(memberData + 0x950) = vocation;
#endif
}
