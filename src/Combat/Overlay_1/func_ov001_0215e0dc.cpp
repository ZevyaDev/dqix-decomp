#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

extern "C" void SetCameraRoll_0202e874(unsigned char* camera, short roll);
extern "C" float GetScriptValueAsFloat_ov017_021d6110(void*);

// USA: func_ov001_0215e0dc
extern "C" ARM int func_ov001_0215e0dc(void* arg0) {
	unsigned char* var0 = (unsigned char*)func_020100bc(GameState::GetInstance());
	int var1 = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110(arg0));
	fix32_t var2 = fix32ReduceAngle0To2Pi(FIX32_MULTIPLY(var1, 0x47));
	SetCameraRoll_0202e874(var0, var2);
	return 1;
}
