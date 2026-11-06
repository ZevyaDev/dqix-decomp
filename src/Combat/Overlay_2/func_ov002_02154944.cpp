#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);

struct Struct_ov002_02154944 {
    char unknown_0_[6];
    unsigned short unknown_6_;
};

// USA: func_ov002_02154944
extern "C" ARM short func_ov002_02154944(void* arg0, int arg1, int arg2, unsigned char* arg3) {
    GameObject* var0 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) {
        return 0;
    }

    GetPartyMemberData_02053c6c((unsigned char*)var0);

    unsigned short var1 = var0->baseStats_->primaryStats.maxMP;
    unsigned short var2 = (*(struct Struct_ov002_02154944**)((char*)var0 + 0x130))->unknown_6_;
    int var3 = var2 + arg2;
    int var4;

    if (var3 >= var1) {
        var4 = var1 - var2;
        if (var4 == 0) {
            *arg3 = 0;
        } else {
            *arg3 = 3;
        }
    } else {
        *arg3 = 3;
        var4 = var3 - var2;
    }

    (*(struct Struct_ov002_02154944**)((char*)var0 + 0x130))->unknown_6_ = var2 + var4;
    return (short)var4;
}
