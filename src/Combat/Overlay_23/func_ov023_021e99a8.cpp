#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" int GetDefeatedMonsterListCompletion_020a0870(BattleRecords_02061c04* records);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: SetScriptRefToDefeatedMonsterListCompletion_ov023_021e99a8
extern "C" ARM int SetScriptRefToDefeatedMonsterListCompletion_ov023_021e99a8(void* scriptRef) {
    BattleRecords_02061c04 records;
    GetBattleRecords_020ac4c0(&records);
    int percent = GetDefeatedMonsterListCompletion_020a0870(&records);
    SetScriptRefInt_ov017_021d6134(scriptRef, percent);
    return 1;
}
