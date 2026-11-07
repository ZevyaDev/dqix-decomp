#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

// USA: func_020a0460
extern "C" ARM void func_020a0460(BattleRecords_02061c04* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->defeatedMonsterListCount_14_0_ + arg1;
    if (var0 > 500) {
        var0 = 500;
    }
    arg0->defeatedMonsterListCount_14_0_ = var0;
}
