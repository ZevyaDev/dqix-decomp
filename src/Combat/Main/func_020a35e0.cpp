#include <globaldefs.h>

// USA: IsPartyMemberInBattle_020a35e0
extern "C" ARM int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex) {
    if (partyMemberIndex >= 4) {
        return 0;
    }
    return battleSetup[0x34] & (1 << partyMemberIndex);
}
