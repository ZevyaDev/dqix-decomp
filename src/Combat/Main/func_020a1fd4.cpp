#include <globaldefs.h>

extern unsigned char data_02109da4;
extern unsigned char data_02109da6;

// USA: SetCurrentSubOverlay_020a1fd4
extern "C" ARM void SetCurrentSubOverlay_020a1fd4(unsigned char subOverlayEntry) {
    const unsigned char* overlayStacks = &data_02109da4;
    if (overlayStacks[1] != 0) {
        (&data_02109da6)[(&data_02109da4)[1] - 1] = subOverlayEntry;
    }
}
