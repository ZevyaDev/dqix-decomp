#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);

extern "C" int GetAlchenomiconCompletion_020a090c(BattleRecords_02061c04* records);

extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: SetScriptRefToAlchenomiconCompletion_ov023_021e99dc
extern "C" ARM int SetScriptRefToAlchenomiconCompletion_ov023_021e99dc(void* scriptRef) {
	BattleRecords_02061c04 records;
	GetBattleRecords_020ac4c0(&records);
	int percent = GetAlchenomiconCompletion_020a090c(&records);
	SetScriptRefInt_ov017_021d6134(scriptRef, percent);
	return 1;
}
