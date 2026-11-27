#include <globaldefs.h>


extern "C" int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg);

// USA: ReadMainBrightness_020dbff4
extern "C" ARM int ReadMainBrightness_020dbff4() {
    return ReadBrightnessRegister_020c39c8((volatile unsigned short*)0x400006c);
}
