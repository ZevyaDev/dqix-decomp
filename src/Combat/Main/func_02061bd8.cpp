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

// USA: func_02061bd8
extern "C" ARM int func_02061bd8(struct PartyMember_0205faf4_11* arg0) {
    struct PartyMemberData_02061bd8* var0 = arg0->pPartyMemberData_150_;
    if (var0 != NULL) {
        return var0->unknown_56b_0_ != 0;
    }
    return 0;
}
