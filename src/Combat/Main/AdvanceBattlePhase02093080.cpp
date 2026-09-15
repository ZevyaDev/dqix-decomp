#include <globaldefs.h>
#include "GameState/GameState.h"

void ClearSubstructBytes(void* obj);
extern "C" void func_02092d60(void* s, int b);

struct BattlePhaseState02093080 {
    char unk0[0x34];
    unsigned char field34;   // 0x34
    unsigned char field35;   // 0x35 - phase counter
};

// USA: func_02093080
ARM void AdvanceBattlePhase02093080(struct BattlePhaseState02093080* s) {
    GameState* bs = GameState::GetInstance();
    unsigned char state = s->field35;
    if (state == 0) {
        ClearSubstructBytes(bs);
        func_02092d60(s, 1);
        s->field35++;
        return;
    }
    if (state == 1) {
        s->field34 = 2;
        s->field35 = 0;
    }
}
