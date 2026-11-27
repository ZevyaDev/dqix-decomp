#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);

extern "C" int GetWardrobeCompletion_020a08d8(BattleRecords_02061c04* records);

extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: SetScriptRefToWardrobeCompletion_ov023_021e9a44
extern "C" ARM int SetScriptRefToWardrobeCompletion_ov023_021e9a44(void* scriptRef) {
	BattleRecords_02061c04 records;
	GetBattleRecords_020ac4c0(&records);
	int percent = GetWardrobeCompletion_020a08d8(&records);
	SetScriptRefInt_ov017_021d6134(scriptRef, percent);
	return 1;
}
