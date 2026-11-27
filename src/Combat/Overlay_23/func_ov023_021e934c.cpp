#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetStoryProgress_0201081c(char* gameState);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: SetScriptRefToStoryProgress_ov023_021e934c
extern "C" ARM int SetScriptRefToStoryProgress_ov023_021e934c(void* scriptRef) {
	GameState* gameState = GameState::GetInstance();
	int storyProgress = GetStoryProgress_0201081c((char*)gameState);
	SetScriptRefInt_ov017_021d6134(scriptRef, storyProgress);
	return 1;
}
