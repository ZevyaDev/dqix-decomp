#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" ARM unsigned short* GetZone3D_02012fe4(void);
extern "C" ARM int GetFollowCamera_020100f8(char* gameState);
extern "C" ARM void EnableCameraTurning_020a27ac(void* camera);
extern "C" ARM int func_0201b5d8(int arg0);
extern "C" ARM void DisableInputForDuration_020e1154(void* durationMs);

// USA: func_ov017_021a9fa0
extern "C" ARM void func_ov017_021a9fa0(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	((int)GetGameResources());
	unsigned short* var1 = GetZone3D_02012fe4();
	EnableCameraTurning_020a27ac((void*)GetFollowCamera_020100f8((char*)var0));
	if (func_0201b5d8(*var1))
		DisableInputForDuration_020e1154((void*)0x3e8);
	((unsigned char*)arg0)[1] = 1;
}
