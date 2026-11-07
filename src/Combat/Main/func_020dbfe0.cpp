#include <globaldefs.h>


extern "C" int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg);

// USA: func_020dbfe0
extern "C" ARM int func_020dbfe0() {
    return ReadBrightnessRegister_020c39c8((volatile unsigned short*)0x400106c);
}
