#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
struct Party_02048150;
extern "C" int IsInParty_02086ef0(Party_02048150*, int);
extern "C" void RebuildFieldPartyOrder_ov017_02191108(GameResources*, int, int, int, int);

// USA: RevivePartyMember_02048150
extern "C" ARM void RevivePartyMember_02048150(GameObject* gameObject, int hp, int isPartyOrderRebuildAllowed) {
    GameState* gameState = GameState::GetInstance();
    GameResources* gameResources = GetGameResources();
    Party_02048150* party = (Party_02048150*)GetParty_02010828(gameState);
    Struct_020200c0* status = gameObject->unknown_ac_.unknown_84_;
    int isDead = 0;
    if (status->unknown_0_ & 1) isDead = 1;
    int maxHP = gameObject->baseStats_->primaryStats.maxHP;
    if (hp > 0) {
        if (hp > maxHP) hp = maxHP;
        status->unknown_4_ = hp;
    } else if (status->unknown_4_ == 0) status->unknown_4_ = maxHP;
    int isCursed = 0;
    Struct_020200c0* clearedStatus = gameObject->unknown_ac_.unknown_84_;
    if (clearedStatus->unknown_0_ & 4) isCursed = 1;
    clearedStatus->unknown_0_ = 0;
    if (isCursed) gameObject->unknown_ac_.unknown_84_->unknown_0_ |= 4;
    if (isDead && IsInParty_02086ef0(party, gameObject->obj3D_.objectIndex_4_) && isPartyOrderRebuildAllowed)
        RebuildFieldPartyOrder_ov017_02191108(gameResources, 1, 1, 1, 1);
}
