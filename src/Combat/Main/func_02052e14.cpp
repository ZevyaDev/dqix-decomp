#include <globaldefs.h>

struct PartyMemberData_02052e14_2 {
    char unknown_0_[0x488];
    short equippedItems_488_[1];
};
struct PartyMember_02052e14 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct PartyMemberData_02052e14_2* pPartyMemberData_150_;
};

// USA: func_02052e14
extern "C" ARM short* func_02052e14(struct PartyMember_02052e14* arg0) {
    struct PartyMemberData_02052e14_2* var0 = arg0->pPartyMemberData_150_;
    return var0 ? &var0->equippedItems_488_[0] : NULL;
}
