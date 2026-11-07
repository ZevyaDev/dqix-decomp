#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void EnableCameraTurning_020a27ac(void* camera);

struct Struct_02033e2c;
extern "C" void func_02033e2c(struct Struct_02033e2c* arg0);
struct Struct_02033b58;
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);

// USA: func_ov017_021bff2c
extern "C" ARM void func_ov017_021bff2c(void) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = var0->GetUnknownGameObject();
	EnablePlayerControl_020397c0(var1);
	func_02033e2c((struct Struct_02033e2c*)var1);
	func_02033b58((struct Struct_02033b58*)var1, 0);

	void* var2 = GetGameResources();

	int var3 = GetFollowCamera_020100f8((char*)var0);
	if (var3 != 0) {
		EnableCameraTurning_020a27ac((void*)var3);
	}

	if (var2 != NULL) {
		ClearFlags04((GameResources*)var2, 0x80);
	}
}
