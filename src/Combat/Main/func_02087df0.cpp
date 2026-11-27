#include <globaldefs.h>

// USA: ClearSpellResistanceBuff_02087df0
extern "C" ARM void ClearSpellResistanceBuff_02087df0(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x10000;
    *(int*)(statsBytes + 0x58) &= ~0x1c0000;
    statsBytes[0x74] = 0;
    statsBytes[0x97] = 0;
}
