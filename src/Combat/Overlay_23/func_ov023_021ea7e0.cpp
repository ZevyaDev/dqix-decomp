#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea7e0
extern "C" ARM int func_ov023_021ea7e0(void *arg0) {
	GameState *var0 = GameState::GetInstance();
	int var1 = GetProtagonistObjectIndex_020100a8(var0);
	void *var2 = (void*)func_0200ff1c(var0, var1);
	int var3 = 0;
	if (var2) {
		int var4 = GetPartyMemberData_02053c6c((unsigned char*)var2);
		int *var5 = (int*)(var4 + 0x138);
		for (int var6 = 0; var6 < 13; var6++) {
			var3 += var5[var6];
			if ((unsigned int)var3 > 0x7fffffffu) {
				var3 = 0x7fffffff;
				break;
			}
		}
	}
	func_ov017_021d6134(arg0, var3);
	return 1;
}
