#include <globaldefs.h>

// USA: ClearBreathResistanceBuff_02087efc
extern "C" ARM void ClearBreathResistanceBuff_02087efc(unsigned char* stats) {
    *(int*)(stats + 0x14) &= ~0x20000;
    *(int*)(stats + 0x58) &= ~0xe00000;
    stats[0x75] = 0;
    stats[0x98] = 0;
}
