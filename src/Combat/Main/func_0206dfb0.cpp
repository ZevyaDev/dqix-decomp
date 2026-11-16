#include <globaldefs.h>

#if defined(jpn)
#define func_0206dfb0 func_0206f104
#endif

// USA: func_0206dfb0
extern "C" ARM int func_0206dfb0(int flagManager, unsigned char* flags, int flagIndex) {
    unsigned char mask;
    if (flagIndex < 0) {
        return 0;
    }
    mask = 1 << (flagIndex % 8);
    return mask & flags[flagIndex / 8];
}
