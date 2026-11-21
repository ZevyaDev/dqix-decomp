#include <globaldefs.h>
#include "GameState/GameState.h"

struct PartyMember_02053f7c_3;
extern "C" unsigned int SetPartyMemberBattleId_02053f7c(PartyMember_02053f7c_3*, unsigned short, int);

struct Struct_ov017_021cbeec {
    unsigned char unknown_0_[4];
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
};

// USA: func_ov017_021cbeec
extern "C" ARM void func_ov017_021cbeec(int arg0, Struct_ov017_021cbeec* arg1, GameState* arg2, unsigned char* arg3) {
    unsigned int var0 = (unsigned int)arg2->GetPartyMemberByIndex(arg1->unknown_4_);
    if (var0 != 0) {
        SetPartyMemberBattleId_02053f7c((PartyMember_02053f7c_3*)var0, arg1->unknown_6_, 1);
    }
}
