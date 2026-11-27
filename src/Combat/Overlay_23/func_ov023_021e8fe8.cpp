#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void AddPlayTimeHours_020ac614(struct PlayTime_020ac4f8* playTime, int hours);

extern "C" void AddPlayTimeMinutes_020ac644(struct PlayTime_020ac4f8* playTime, int minutes);

struct GameState_020103f0;
extern "C" void GetElapsedPlayTime_020103f0(struct GameState_020103f0* gameState, unsigned short* hours, unsigned char* minutes, unsigned char* seconds);

struct GameState_020104cc;
extern "C" void GetElapsedMultiplayerTime_020104cc(struct GameState_020104cc* gameState, unsigned short* hours, unsigned char* minutes, unsigned char* seconds);

extern "C" void* func_0202ae18(void);
extern "C" int GetLocalWirelessState_0202ba00(int* wireless);

extern "C" int _s32_div_f(int a, int b);

// USA: func_ov023_021e8fe8
extern "C" ARM struct PlayTime_020ac4f8 func_ov023_021e8fe8(struct PlayTime_020ac4f8 arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct PlayTime_020ac4f8 var1;
    unsigned short var2;
    unsigned char var3;
    unsigned char var4;

    var2 = 0;
    var3 = 0;
    var4 = 0;
    var1.hours_0_ = 0;
    var1.minutes_2_ = 0;
    var1.seconds_3_ = 0;

    if (arg1 == 0) {
        GetElapsedPlayTime_020103f0((struct GameState_020103f0*)var0, &var2, &var3, &var4);
    } else {
        void* var5 = func_0202ae18();
        int var6 = GetLocalWirelessState_0202ba00((int*)var5);
        int var7 = *((unsigned char*)var5 + 0x100d);
        if ((var6 == 5 && var7 > 1) || var6 == 6) {
            GetElapsedMultiplayerTime_020104cc((struct GameState_020104cc*)var0, &var2, &var3, &var4);
        } else {
            var2 = 0;
            var3 = 0;
            var4 = 0;
        }
    }

    AddPlayTimeHours_020ac614(&var1, (unsigned short)(arg0.hours_0_ + var2));
    AddPlayTimeMinutes_020ac644(&var1, (unsigned char)(arg0.minutes_2_ + var3));

    var1.seconds_3_ = var1.seconds_3_ + (unsigned char)(arg0.seconds_3_ + var4);
    unsigned char var8 = var1.seconds_3_;
    if (var8 > 0x3b) {
        unsigned char var9 = var8 / 0x3c;
        if (var1.hours_0_ == 0x270f) {
            int var10 = var1.minutes_2_ + var9;
            if (var10 > 0x3b) {
                var1.hours_0_ = 0x270f;
                var1.minutes_2_ = 0x3b;
                var1.seconds_3_ = 0x3b;
                goto done;
            }
        }
        AddPlayTimeMinutes_020ac644(&var1, var9);
        var1.seconds_3_ = var1.seconds_3_ % 0x3c;
    }
done:
    return var1;
}
