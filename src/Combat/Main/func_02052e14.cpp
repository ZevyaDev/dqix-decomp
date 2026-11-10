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

// USA: GetEquippedItems_02052e14
extern "C" ARM short* GetEquippedItems_02052e14(struct PartyMember_02052e14* gameObject) {
    struct PartyMemberData_02052e14_2* memberData = gameObject->pPartyMemberData_150_;
    return memberData ? &memberData->equippedItems_488_[0] : NULL;
}
