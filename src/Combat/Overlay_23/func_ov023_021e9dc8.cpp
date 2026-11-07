#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: func_ov023_021e9dc8
extern "C" ARM int func_ov023_021e9dc8(void* arg0) {
    BattleRecords_02061c04 var0;
    GetBattleRecords_020ac4c0(&var0);
    SetScriptRefInt_ov017_021d6134(arg0, var0.unknown_8_0_);
    return 1;
}
