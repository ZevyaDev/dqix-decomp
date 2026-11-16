#include <globaldefs.h>

#if defined(jpn)
#define func_020c54a4 func_020c6f70
#endif

// USA: func_020c54a4
extern "C" ARM void func_020c54a4(int isEnabled, unsigned int type, unsigned int depthShift, unsigned short offset) {
    if (isEnabled) {
        *(volatile unsigned short*)0x400035c = offset;
        *(volatile unsigned short*)0x4000060 =
            (depthShift << 8) | (type << 6) | 0x80 | (*(volatile unsigned short*)0x4000060 & ~0x3f40);
    } else {
        *(volatile unsigned short*)0x4000060 &= 0xcf7f;
    }
}
