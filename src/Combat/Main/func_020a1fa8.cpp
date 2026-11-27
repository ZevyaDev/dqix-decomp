#include <globaldefs.h>

extern unsigned char data_02109da4[];
extern signed char data_02109da6[];

// USA: GetCurrentSubOverlay_020a1fa8
extern "C" ARM int GetCurrentSubOverlay_020a1fa8(void) {
    const unsigned char* overlayStacks = data_02109da4;
    if (overlayStacks[1] != 0) {
        return data_02109da6[data_02109da4[1] - 1];
    }
    return -1;
}
