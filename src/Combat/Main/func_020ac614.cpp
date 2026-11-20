#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: func_020ac614
extern "C" ARM void func_020ac614(struct PlayTime_020ac4f8* arg0, int arg1) {
    arg0->hours_0_ += arg1;
    if (arg0->hours_0_ > 0x270f) {
        arg0->hours_0_ = 0x270f;
        arg0->minutes_2_ = 0x3b;
        arg0->seconds_3_ = 0x3b;
    }
}
