#include <globaldefs.h>

struct GlobalFlags_02038598_4 {
    unsigned int bits_0_;
};

// USA: ClearGlobalFlags_020466f4
extern "C" ARM void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask) {
    globalFlags->bits_0_ &= ~mask;
}
