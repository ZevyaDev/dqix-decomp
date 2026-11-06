#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);

// USA: func_ov001_02161930
extern "C" ARM int func_ov001_02161930(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161930_1844 = 0x524, Enum_ov001_02161930_22 = 0x12 };
#else
    enum { Enum_ov001_02161930_1844 = 0x734, Enum_ov001_02161930_22 = 0x16 };
#endif
	GameState* var0 = GameState::GetInstance();
	char* var1 = (char*)GetGameResources() + 0x3000;
	char* var2 = *(char**)(var1 + Enum_ov001_02161930_1844) + 0x100;
	int var3 = *(signed char*)(var2 + Enum_ov001_02161930_22);
	GameObject* var4 = GetPartyMemberBaseByIndex_0200ff1c(var0, var3);
	int var5 = var3;
	if (var4 == NULL) {
		var5 = GetOwnPartyLeaderObjectIndex_020100b0(var0);
	}
	SetScriptRefInt_ov017_021d6134(arg0, var5);
	return 1;
}
