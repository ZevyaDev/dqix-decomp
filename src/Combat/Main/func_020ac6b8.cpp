#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" void AddPlayTimeMinutes_020ac644(struct PlayTime_020ac4f8* playTime, int minutes);

// USA: func_020ac6b8
extern "C" ARM void func_020ac6b8(struct PlayTime_020ac4f8* arg0, int arg1) {
    arg0->seconds_3_ = arg0->seconds_3_ + arg1;
    unsigned char var0 = arg0->seconds_3_;
    if (var0 <= 0x3b) return;

    unsigned char var1 = var0 / 0x3c;
    if (arg0->hours_0_ == 0x270f) {
        int var2 = arg0->minutes_2_ + var1;
        if (var2 > 0x3b) {
            arg0->hours_0_ = 0x270f;
            arg0->minutes_2_ = 0x3b;
            arg0->seconds_3_ = 0x3b;
            return;
        }
    }
    AddPlayTimeMinutes_020ac644(arg0, var1);
    arg0->seconds_3_ = arg0->seconds_3_ % 0x3c;
}
