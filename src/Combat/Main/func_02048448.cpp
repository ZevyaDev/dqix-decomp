#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);

struct Struct_02048448 {
    char unknown_0_[0x6];
    unsigned short unknown_6_;
};

struct Struct_02048448_2 {
    char unknown_0_[0x4];
    short unknown_4_;
    char unknown_6_[0x130 - 0x6];
    struct Struct_02048448* unknown_130_;
};

// USA: func_02048448
extern "C" ARM int func_02048448(struct Struct_02048448_2* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0->unknown_4_);
    if (var1 != NULL) {
        unsigned char* var2 = (unsigned char*)GetPartyMemberData_02053c6c((unsigned char*)var1);
        if (var2 != NULL) {
            if (HasLearnedSkillEntry_02083b00(var2, 0x106)) {
                arg1 = (int)(0.75f + 0.75f * (float)arg1);
                if (arg1 <= 0) {
                    arg1 = 0;
                }
            }
        }
    }
    return arg1 <= arg0->unknown_130_->unknown_6_ ? 1 : 0;
}
