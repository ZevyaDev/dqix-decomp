#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int CanRaiseTension_020881c4(unsigned char* stats);
extern "C" void SetSuperHighTension_02088150(void* stats);
extern "C" void func_02088220(void*, int);
extern "C" void* GetNextActionResult_ov000_0215e958(void* battle);
extern "C" void SetActionResultFlag_ov000_02159eac(void* battle, void* flags, int flagIndex);
extern "C" void AddActionResultMessage_ov000_0215a88c(void* battle, void* result, int messageId);
extern "C" void SetActionResultFromCombatant_ov000_0215cd44(void* battle, void* result, void* combatant, int amount, unsigned long long flags, int isCriticalHit);
extern "C" void AppendActorResult_ov000_0215fe84(void* actor, void* result, int listIndex);

struct Struct_ov024_021e5ec4 { char unknown_0_[0x2d]; unsigned char unknown_2d_; };
struct Struct_ov024_021e5ec4_2 { char unknown_0_[8]; struct Struct_ov024_021e5ec4* unknown_8_; char unknown_c_[4]; unsigned char* unknown_10_; };
struct Struct_ov024_021e5ec4_3 { char unknown_0_[0x24]; unsigned char unknown_24_; };

// USA: func_ov024_021e5ec4
extern "C" ARM void func_ov024_021e5ec4(struct Struct_ov024_021e5ec4_2* arg0, int arg1) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    if (!CanRaiseTension_020881c4((unsigned char*)var0->currentStats_)) return;

    int var1;
    int var2 = 0;
    var1 = ((struct Struct_ov024_021e5ec4_3*)var0->currentStats_)->unknown_24_;
    switch (var1 + 1) {
    case 1: var2 = 0x31; break;
    case 2: var2 = 0x32; break;
    case 3: var2 = 0x33; break;
    case 4: var2 = 0x34; break;
    }

    void* var3 = GetNextActionResult_ov000_0215e958(arg0->unknown_10_);
    if (!var3) return;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var4;
    var4.unknown_0_ = 0;
    var4.unknown_4_ = 0;
    if (var1 + 1 >= 4) {
        SetSuperHighTension_02088150(var0->currentStats_);
        SetActionResultFlag_ov000_02159eac(arg0->unknown_10_, &var4, 7);
        SetActionResultFromCombatant_ov000_0215cd44(arg0->unknown_10_, var3, var0, 0, var4.unknown1_0_, 0);
        AppendActorResult_ov000_0215fe84(arg0->unknown_8_, var3, 2);
        arg0->unknown_10_[0x8e02]++;
        arg0->unknown_8_->unknown_2d_ = 1;
    } else {
        func_02088220(var0->currentStats_, var1 + 1);
        SetActionResultFlag_ov000_02159eac(arg0->unknown_10_, &var4, 0x23);
        SetActionResultFromCombatant_ov000_0215cd44(arg0->unknown_10_, var3, var0, (short)(var1 + 1), var4.unknown1_0_, 0);
        AppendActorResult_ov000_0215fe84(arg0->unknown_8_, var3, 2);
        arg0->unknown_10_[0x8e02]++;
    }
    AddActionResultMessage_ov000_0215a88c(arg0->unknown_10_, var3, (unsigned short)var2);
}
