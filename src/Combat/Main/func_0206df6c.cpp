#include <globaldefs.h>


// USA: SetFlag_0206df6c
extern "C" ARM void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet) {
    int byteIndex = flagIndex / 8;
    unsigned char mask = 1 << (flagIndex % 8);
    unsigned int flagByte = flags[byteIndex];
    if (isSet != 0) {
        flagByte |= mask;
    } else {
        flagByte &= ~mask;
    }
    flags[byteIndex] = flagByte;
}
