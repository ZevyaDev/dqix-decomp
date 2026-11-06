#include <globaldefs.h>

// USA: IsTextWindowOpen_0204c7e0
extern "C" ARM int IsTextWindowOpen_0204c7e0(unsigned char* textWindow) {
    if (*(int*)(textWindow + 0xd4) == 0) return 0;
    return *(int*)(textWindow + 0x9c) != 0;
}
