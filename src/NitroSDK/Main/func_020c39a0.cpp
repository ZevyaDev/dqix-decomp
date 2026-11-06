#include <globaldefs.h>


// USA: WriteBrightnessRegister_020c39a0
extern "C" ARM void WriteBrightnessRegister_020c39a0(short* reg, int brightness) {
    if (brightness == 0) {
        *reg = 0;
    } else if (brightness > 0) {
        *reg = brightness | 0x4000;
    } else {
        *reg = (-brightness) | 0x8000;
    }
}
