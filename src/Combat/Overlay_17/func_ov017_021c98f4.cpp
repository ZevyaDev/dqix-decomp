#include <globaldefs.h>
#include "GameState/GameState.h"

struct PartyMember_02053f7c_3;
extern "C" void SetPartyMemberBattleId_02053f7c(PartyMember_02053f7c_3* member, unsigned short battleId, int isForced);

// USA: func_ov017_021c98f4
extern "C" ARM void func_ov017_021c98f4(int arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_021c98f4_434=0x1a6};
#else
 enum {Enum_ov017_021c98f4_434=0x1b2};
#endif
	GameState* var0 = GameState::GetInstance();
	int var1;
	for (var1 = 0; var1 < 4; var1++) {
		GameObject* var2 = GetPartyMemberBaseByIndex_0200ff1c(var0, var1);
		if (!var2) {
			continue;
		}
		unsigned short var3 = *(unsigned short*)((char*)var2 + Enum_ov017_021c98f4_434);
		if (arg0 != var3) {
			continue;
		}
		SetPartyMemberBattleId_02053f7c((struct PartyMember_02053f7c_3*)var2, 0, arg1);
	}
}
