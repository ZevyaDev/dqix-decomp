#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);

extern "C" int GetItemListCompletion_020a08a4(BattleRecords_02061c04* records);

extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: SetScriptRefToItemListCompletion_ov023_021e9a10
extern "C" ARM int SetScriptRefToItemListCompletion_ov023_021e9a10(void* scriptRef) {
	BattleRecords_02061c04 records;
	GetBattleRecords_020ac4c0(&records);
	int percent = GetItemListCompletion_020a08a4(&records);
	SetScriptRefInt_ov017_021d6134(scriptRef, percent);
	return 1;
}
