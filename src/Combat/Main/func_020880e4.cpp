#include <globaldefs.h>

// USA: ClearBlockChanceBuff_020880e4
extern "C" ARM void ClearBlockChanceBuff_020880e4(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x18) &= ~0x1;
    *(int*)(statsBytes + 0x58) &= ~0x7000000;
    statsBytes[0x76] = 0;
    statsBytes[0x99] = 0;
}
