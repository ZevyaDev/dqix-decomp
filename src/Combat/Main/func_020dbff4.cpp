#include <globaldefs.h>


extern "C" int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg);

// USA: func_020dbff4
extern "C" ARM int func_020dbff4() {
    return ReadBrightnessRegister_020c39c8((volatile unsigned short*)0x400006c);
}
