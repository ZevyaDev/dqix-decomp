#include <globaldefs.h>

// USA: ClearDefenseBuff_0208792c
extern "C" ARM void ClearDefenseBuff_0208792c(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x800;
    *(int*)(statsBytes + 0x58) &= ~0x38;
    statsBytes[0x6f] = 0;
    statsBytes[0x92] = 0;
}
