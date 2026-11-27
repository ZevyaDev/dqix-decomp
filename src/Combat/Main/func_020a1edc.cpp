#include <globaldefs.h>

extern unsigned char data_02109da4[];

// USA: ClearSubOverlayStack_020a1edc
extern "C" ARM void ClearSubOverlayStack_020a1edc() {
    data_02109da4[1] = 0;
}
