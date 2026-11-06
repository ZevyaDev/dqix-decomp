#include "NitroSDK/Interrupts.h"
#include <globaldefs.h>

extern "C" void WaitByLoop(int);

// USA: WaitForVBlank_020c9820
extern "C" ARM void WaitForVBlank_020c9820(void) {
    WaitByLoop(1);
    WaitForInterrupt(1, 1);
}
