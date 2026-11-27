#include <globaldefs.h>

struct PattyMember_0201099c_16 {
    char unknown_0_[0x50];
    int vocation_50_;
};

// USA: GetPattyMemberVocation_020865b0
extern "C" ARM int GetPattyMemberVocation_020865b0(struct PattyMember_0201099c_16* pattyMember) {
    return pattyMember->vocation_50_;
}
