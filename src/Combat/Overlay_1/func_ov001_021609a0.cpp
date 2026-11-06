#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021bd5d0(void);

struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);

// USA: func_ov001_021609a0
extern "C" ARM int func_ov001_021609a0(void) {
	func_ov017_021bd5d0();
	GameState* var0 = GameState::GetInstance();
	struct Struct_02018300_3* var1 = (struct Struct_02018300_3*)var0->GetUnknownGameObject();
	DisablePlayerControl_020397cc(var1, 1);
	return 1;
}
