#include <globaldefs.h>

// USA: SetTextWindowPageNumberShown_02050400
extern "C" ARM void SetTextWindowPageNumberShown_02050400(unsigned char* arg0, int isShown) {
    arg0[0xd8] = (arg0[0xd8] & ~1) | (isShown & 1);
    arg0[0xd8] |= 2;
    arg0[0xd9] = 0;
    arg0[0xda] = 0;
}
