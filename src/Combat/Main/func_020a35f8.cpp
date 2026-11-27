#include <globaldefs.h>

extern "C" ARM int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex);

// USA: CountPartyMembersInBattle_020a35f8
extern "C" ARM int CountPartyMembersInBattle_020a35f8(unsigned char* battleSetup) {
    int count = 0;
    int i;
    for (i = 0; i < 4; i++) {
        if (IsPartyMemberInBattle_020a35e0(battleSetup, i)) {
            count++;
        }
    }
    return count;
}
