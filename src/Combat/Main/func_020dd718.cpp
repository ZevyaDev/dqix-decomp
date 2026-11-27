#include <globaldefs.h>
#include "GameState/GameState.h"

struct PartyMember_02052e14;
extern "C" short* GetEquippedItems_02052e14(struct PartyMember_02052e14* gameObject);

// USA: IsItemEquippedByPartyMember_020dd718
extern "C" ARM int IsItemEquippedByPartyMember_020dd718(int memberIndex, int itemId) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, memberIndex);
    short* var2 = GetEquippedItems_02052e14((struct PartyMember_02052e14*)var1);
    unsigned char var3 = 0;
    while (var3 < 10) {
        if (itemId == var2[var3]) return 1;
        var3 = (var3 + 1) & 0xff;
    }
    return 0;
}
