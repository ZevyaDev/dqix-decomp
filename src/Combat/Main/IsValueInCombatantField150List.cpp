#include <globaldefs.h>
#include "GameState/GameState.h"

struct Field150Holder02052e14;
short* GetField150Ptr0x488(struct Field150Holder02052e14* obj);

// USA: func_020dd718
ARM int IsValueInCombatantField150List(int combatantId, int value) {
    GameState* bs = GameState::GetInstance();
    GameObject* c = GetCombatantWithFlag0x100(bs, combatantId);
    short* list = GetField150Ptr0x488((struct Field150Holder02052e14*)c);
    unsigned char i = 0;
    while (i < 10) {
        if (value == list[i]) return 1;
        i = (i + 1) & 0xff;
    }
    return 0;
}
