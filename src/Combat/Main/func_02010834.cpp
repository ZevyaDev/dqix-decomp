#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02010834_10756 = 0x27a4 };
#else
enum { Enum_02010834_10756 = 0x2a04 };
#endif


struct Party_02010834_2 {
    unsigned char unknown_0_[0xf78];
    unsigned char memberObjectIndices_f78_[4];
    unsigned char memberCount_f7c_;
};

struct GameState_02010834 {
    unsigned char unknown_0_[Enum_02010834_10756];
    struct Party_02010834_2 party_2a04_;
};

// USA: GetOwnPartyMemberObjectIndices_02010834
extern "C" ARM void GetOwnPartyMemberObjectIndices_02010834(struct GameState_02010834* arg0, int protagonistObjectIndex, int* outMemberObjectIndices, int* outMemberCount) {
    int isValidIndex;
    unsigned char i;
    struct Party_02010834_2* party;
    if (protagonistObjectIndex >= 0 && protagonistObjectIndex <= 3) {
        isValidIndex = 1;
    } else {
        isValidIndex = 0;
    }
    if (isValidIndex == 0) {
        return;
    }
    party = &arg0->party_2a04_;
    for (i = 0; i < party->memberCount_f7c_; i++) {
        outMemberObjectIndices[i] = party->memberObjectIndices_f78_[i];
    }
    *outMemberCount = party->memberCount_f7c_;
}
