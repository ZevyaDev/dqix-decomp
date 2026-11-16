#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);

// USA: GetPartyMemberDataByIndex_ov000_02153710
extern "C" ARM int GetPartyMemberDataByIndex_ov000_02153710(int battle, int combatantIndex) {
    int isPartyMember = combatantIndex >= 0 && combatantIndex <= 3;
    if (!isPartyMember) return 0;
    GameObject* member = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), combatantIndex);
    if (member == 0) return 0;
    return func_02053c6c((unsigned char*)member);
}
