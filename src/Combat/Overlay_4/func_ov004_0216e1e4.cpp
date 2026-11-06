#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02012028(void* arg0, unsigned char arg1);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216e1e4
extern "C" ARM int func_ov004_0216e1e4(void* arg0) {
	GameState* var0 = GameState::GetInstance();
	func_02012028(var0, 1);
	QueueMenuScriptEntry_ov011_021848a0(arg0, 0x3e7);
	return 0;
}
