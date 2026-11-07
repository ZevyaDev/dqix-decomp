#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: func_ov023_021e9d2c
extern "C" ARM int func_ov023_021e9d2c(void* arg0) {
    BattleRecords_02061c04 var0;
    GetBattleRecords_020ac4c0(&var0);
    SetScriptRefInt_ov017_021d6134(arg0, var0.unknown_34_0_);
    return 1;
}
