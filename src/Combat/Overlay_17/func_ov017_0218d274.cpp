#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/VRAMAllocation.h"

extern "C" unsigned char GetGameMode_0200fb9c(char* gameState);
extern "C" void MapVRAMBanksToTextureImage(int a);

// USA: func_ov017_0218d274
extern "C" ARM void func_ov017_0218d274(void* arg0) {
	if (GetGameMode_0200fb9c((char*)GameState::GetInstance()) == 6) {
		MapVRAMBanksToTextureImage(3);
		InitializeTextureImageAllocation(2, 1);
	} else {
		MapVRAMBanksToTextureImage(0xf);
		InitializeTextureImageAllocation(4, 1);
	}
	InitializeTexturePaletteVRAMAllocation((unsigned int)((void*)0x4000), 1);
}
