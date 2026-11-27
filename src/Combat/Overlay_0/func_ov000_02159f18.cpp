#include <globaldefs.h>

// USA: IsActionResultFlagSet_ov000_02159f18
extern "C" ARM int IsActionResultFlagSet_ov000_02159f18(void* battle, unsigned long long flags, unsigned int flagIndex) {
    if (flagIndex > 31) {
        flags &= ((unsigned long long)(1 << (flagIndex - 31)) << 32) & 0xFFFFFFFF00000000ULL;
    } else {
        flags &= (unsigned long long)(1 << flagIndex) & 0xFFFFFFFFULL;
    }
    return flags != 0;
}
