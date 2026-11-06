#include <globaldefs.h>

struct ActionResultFlags_ov000_02159eac {
    unsigned long long bits_0_;
};

// USA: SetActionResultFlag_ov000_02159eac
extern "C" ARM void SetActionResultFlag_ov000_02159eac(void* battle, struct ActionResultFlags_ov000_02159eac* flags, unsigned int flagIndex) {
    if (flagIndex > 31) {
        flags->bits_0_ |= ((unsigned long long)(1 << (flagIndex - 31)) << 32) & 0xFFFFFFFF00000000ULL;
    } else {
        flags->bits_0_ |= (unsigned long long)(1 << flagIndex) & 0xFFFFFFFFULL;
    }
}
