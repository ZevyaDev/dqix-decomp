#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_02167e28
extern "C" ARM int func_ov004_02167e28(void* arg0) {
	if (func_02086aec((struct Struct_02053f7c*)GetParty_02010828(GameState::GetInstance()), 0x5617) > 0) {
		QueueMenuScriptEntry_ov011_021848a0(arg0, 0x14);
	} else {
		QueueMenuScriptEntry_ov011_021848a0(arg0, 0x3);
	}
	return 0;
}
