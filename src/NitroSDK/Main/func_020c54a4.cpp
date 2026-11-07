#include <globaldefs.h>

// USA: Set3DFog_020c54a4
extern "C" ARM void Set3DFog_020c54a4(int isEnabled, unsigned int type, unsigned int depthShift, unsigned short offset) {
    if (isEnabled) {
        *(volatile unsigned short*)0x400035c = offset;
        *(volatile unsigned short*)0x4000060 =
            (depthShift << 8) | (type << 6) | 0x80 | (*(volatile unsigned short*)0x4000060 & ~0x3f40);
    } else {
        *(volatile unsigned short*)0x4000060 &= 0xcf7f;
    }
}
