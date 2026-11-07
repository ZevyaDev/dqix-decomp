#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
extern "C" void* GetNPCManager_0203cf4c(void);
extern "C" void* FindNPCById_0203df78(void* npcManager, int id);
extern "C" void SetGameObjectByIndex_0200fd38(GameState* gameState, int index, GameObject* object);

struct Struct_ov001_02160c78 {
	unsigned char unknown_0_[0xd4];
	unsigned char unknown_d4_0_ : 1;
};

// USA: func_ov001_02160c78
extern "C" ARM int func_ov001_02160c78(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = GetNPCManager_0203cf4c();
	int var2 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	int var3 = func_ov001_0215ad2c(GetScriptValueAsInt_ov017_021d60f4(arg0 + 0x8));
	if (var3 < 0xa0 || var3 > 0xbf) return 0;
	void* var4 = FindNPCById_0203df78(var1, var2);
	if (var4 == 0) return 0;
	struct Struct_ov001_02160c78* var5 = *(struct Struct_ov001_02160c78**)((char*)var4 + 0x18);
	if (var5 == 0) return 0;
	var5->unknown_d4_0_ = 1;
	SetGameObjectByIndex_0200fd38(var0, var3, *(GameObject**)((char*)var4 + 0x18));
	return 1;
}
