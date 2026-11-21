#include <globaldefs.h>

// USA: SetTextWindowPageCount_02050440
extern "C" ARM void SetTextWindowPageCount_02050440(unsigned char* textWindow, int pageCount) {
    textWindow[0xda] = pageCount;
    textWindow[0xd8] |= 2;
}
