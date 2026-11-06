#include <globaldefs.h>

extern "C" void SetBattleSceneFlags_ov000_02160fa8(void* battleScene, int flags);

// USA: func_ov000_02166e3c
extern "C" ARM void func_ov000_02166e3c(void* arg0) {
	SetBattleSceneFlags_ov000_02160fa8(arg0, 2);
	SetBattleSceneFlags_ov000_02160fa8(arg0, 4);
}
