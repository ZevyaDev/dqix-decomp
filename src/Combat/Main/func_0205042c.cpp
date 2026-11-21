#include <globaldefs.h>

// USA: SetTextWindowPage_0205042c
extern "C" ARM void SetTextWindowPage_0205042c(unsigned char* textWindow, unsigned char page) {
    textWindow[0xd9] = page;
    textWindow[0xd8] |= 0x2;
}
