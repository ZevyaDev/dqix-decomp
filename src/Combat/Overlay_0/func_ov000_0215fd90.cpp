#include <globaldefs.h>

struct ActionResult_ov000_0215fd90 {
    unsigned long long flags_0_;
};

// USA: HasActionResultFlag_ov000_0215fd90
extern "C" ARM int HasActionResultFlag_ov000_0215fd90(struct ActionResult_ov000_0215fd90* result, unsigned int flagIndex) {
    unsigned long long matchedBits;
    if (flagIndex > 31) {
        matchedBits = result->flags_0_ & (((unsigned long long)(1 << (flagIndex - 31)) << 32) & 0xFFFFFFFF00000000ULL);
    } else {
        matchedBits = result->flags_0_ & ((long long)(1 << flagIndex) & 0xFFFFFFFFULL);
    }
    return matchedBits != 0;
}
