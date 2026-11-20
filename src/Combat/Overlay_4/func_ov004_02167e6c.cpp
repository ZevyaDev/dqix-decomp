#include <globaldefs.h>
#include "GameState/GameState.h"

struct Party_02053f7c;
extern "C" short CountOwnedItem_02086aec(struct Party_02053f7c* party, int itemId);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_02167e6c
extern "C" ARM int func_ov004_02167e6c(void* arg0) {
	if (CountOwnedItem_02086aec((struct Party_02053f7c*)GetParty_02010828(GameState::GetInstance()), 0x5617) > 0) {
		QueueMenuScriptEntry_ov011_021848a0(arg0, 0x1f);
	} else {
		QueueMenuScriptEntry_ov011_021848a0(arg0, 0x32);
	}
	return 0;
}
