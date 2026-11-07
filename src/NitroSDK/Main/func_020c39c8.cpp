#include <globaldefs.h>


// USA: ReadBrightnessRegister_020c39c8
extern "C" ARM int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg) {
    unsigned short mode = *reg & 0xc000;
    if (mode == 0) {
        return 0;
    }
    if (mode == 0x4000) {
        return *reg & 0x1f;
    }
    if (mode == 0x8000) {
        return -(*reg & 0x1f);
    }
    return 0;
}
