#include <globaldefs.h>
#include "GameState/GameState.h"

struct PartyMember_02053f7c_3;
extern "C" void SetPartyMemberBattleId_02053f7c(PartyMember_02053f7c_3* member, unsigned short battleId, int isForced);

// USA: func_ov017_02192594
extern "C" ARM void func_ov017_02192594(unsigned char* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1;
	for (var1 = 0; var1 < 4; var1++) {
		GameObject* var2 = var0->GetPartyMemberByIndex(var1);
		if (var2) {
			SetPartyMemberBattleId_02053f7c((struct PartyMember_02053f7c_3*)var2, 0, 1);
		}
	}
}
