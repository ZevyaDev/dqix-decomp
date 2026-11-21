#include <globaldefs.h>

// USA: SetTextWindowPageNumberShown_02050400
extern "C" ARM void SetTextWindowPageNumberShown_02050400(unsigned char* textWindow, int isShown) {
    textWindow[0xd8] = (textWindow[0xd8] & ~1) | (isShown & 1);
    textWindow[0xd8] |= 2;
    textWindow[0xd9] = 0;
    textWindow[0xda] = 0;
}
