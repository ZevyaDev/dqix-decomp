#include <globaldefs.h>

// USA: SetVBlankInterruptEnabled_020c3864
extern "C" ARM int SetVBlankInterruptEnabled_020c3864(int isEnabled) {
    volatile unsigned short* displayStatusRegister = (volatile unsigned short*)0x4000004;
    int previousEnableBit = *displayStatusRegister & 8;
    if (isEnabled != 0) {
        *displayStatusRegister |= 8;
    } else {
        *displayStatusRegister &= ~8;
    }
    return previousEnableBit;
}
