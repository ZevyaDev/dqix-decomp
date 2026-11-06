#include <globaldefs.h>

// USA: IsTextWindowReady_0204c7cc
extern "C" ARM int IsTextWindowReady_0204c7cc(unsigned char* textWindow) {
    return *(int*)(textWindow + 0x9c) == 3;
}
