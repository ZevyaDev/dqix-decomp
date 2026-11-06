#include <globaldefs.h>

// USA: IsFlagSet_0206dfb0
extern "C" ARM int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex) {
    unsigned char mask;
    if (flagIndex < 0) {
        return 0;
    }
    mask = 1 << (flagIndex % 8);
    return mask & flags[flagIndex / 8];
}
