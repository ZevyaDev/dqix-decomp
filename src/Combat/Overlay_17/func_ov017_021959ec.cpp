#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

extern "C" int GetCameraClassFlags_0202e09c(int camera);
extern "C" void func_ov000_0216d50c(void* arg0);
extern "C" void UpdateCamera_0202e0a4(int camera);

// USA: func_ov017_021959ec
extern "C" ARM void func_ov017_021959ec(void*) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = func_020100bc(var0);
	if (var1 == 0) return;
	if (GetCameraClassFlags_0202e09c((int)var1) & 8) {
		func_ov000_0216d50c(var1);
	} else {
		UpdateCamera_0202e0a4((int)var1);
	}
}
