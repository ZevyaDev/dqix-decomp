#include <globaldefs.h>

extern unsigned char data_02109da4[];
extern signed char data_02109dae[];

// USA: GetCurrentOverlay_020a1eb0
extern "C" ARM int GetCurrentOverlay_020a1eb0(void) {
    const unsigned char* overlayStacks = data_02109da4;
    if (overlayStacks[0] != 0) {
        return data_02109dae[data_02109da4[0] - 1];
    }
    return -1;
}
