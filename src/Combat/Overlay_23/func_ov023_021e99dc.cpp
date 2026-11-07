#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);

extern "C" int GetAlchenomiconCompletion_020a090c(BattleRecords_02061c04* records);

extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e99dc
extern "C" ARM int func_ov023_021e99dc(void* arg0) {
	BattleRecords_02061c04 var0;
	GetBattleRecords_020ac4c0(&var0);
	int var1 = GetAlchenomiconCompletion_020a090c(&var0);
	SetScriptRefInt_ov017_021d6134(arg0, var1);
	return 1;
}
