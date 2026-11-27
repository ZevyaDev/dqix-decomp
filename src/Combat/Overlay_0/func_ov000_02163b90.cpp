#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x21c
#else
#define REGION_OFFSET_0 0x2a0
#endif

#include "GameState/GameState.h"

struct Struct_ov000_02163b90 { char unknown_0_[REGION_OFFSET_0]; unsigned char* unknown_2a0_; };

extern "C" int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex);
extern "C" void SetCombatantOnBattlefield_02049f28(unsigned char* combatant);
extern "C" void SetCombatantOffBattlefield_02049f3c(unsigned char* combatant);

// USA: SetBattlingPartyMembersVisible_ov000_02163b90
extern "C" ARM void SetBattlingPartyMembersVisible_ov000_02163b90(struct Struct_ov000_02163b90* arg0, int isVisible) {
    GameState* gameState = GameState::GetInstance();
    int memberIndex;
    for (memberIndex = 0; memberIndex <= 3; memberIndex++) {
        GameObject* member = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
        if (!member) continue;
        if (!IsPartyMemberInBattle_020a35e0(arg0->unknown_2a0_, memberIndex & 0xff)) continue;
        if (isVisible) {
            ((Object3D*)((unsigned char*)member))->MakeVisible();
            SetCombatantOnBattlefield_02049f28((unsigned char*)member);
        } else {
            ((Object3D*)((unsigned char*)member))->MakeHidden();
            SetCombatantOffBattlefield_02049f3c((unsigned char*)member);
        }
    }
}
