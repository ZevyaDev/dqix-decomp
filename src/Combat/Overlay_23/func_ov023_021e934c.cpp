#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0201081c(char* arg0);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: func_ov023_021e934c
extern "C" ARM int func_ov023_021e934c(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1 = func_0201081c((char*)var0);
	SetScriptRefInt_ov017_021d6134(arg0, var1);
	return 1;
}
