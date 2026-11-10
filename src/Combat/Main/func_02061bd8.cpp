#include <globaldefs.h>

struct PartyMemberData_02061bd8 {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct PartyMember_0205faf4_11 {
#if defined(jpn)
    unsigned char unknown_0_[0x144];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct PartyMemberData_02061bd8* pPartyMemberData_150_;
};

// USA: IsNPCCompanion_02061bd8
extern "C" ARM int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember) {
    struct PartyMemberData_02061bd8* memberData = partyMember->pPartyMemberData_150_;
    if (memberData != NULL) {
        return memberData->unknown_56b_0_ != 0;
    }
    return 0;
}
