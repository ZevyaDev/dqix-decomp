#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_020885b4;
extern "C" int IsPoisoned_020885b4(struct Struct_020885b4* stats);
struct Struct_02088514;
extern "C" int IsEnvenomated_02088514(struct Struct_02088514* stats);
struct Struct_02088644;
extern "C" void func_02088644(struct Struct_02088644* arg0);
extern "C" void SetActionResultFlag_ov000_02159eac(void* battle, void* flags, int flagIndex);
struct ActionRunner_ov024_021e2bd0;
extern "C" void* AddExtraTargetResult_ov024_021e8ca0(struct ActionRunner_ov024_021e2bd0* actionRunner, int messageId);
extern "C" void SetActionResultFromCombatant_ov000_0215cd44(void* battle, void* result, void* combatant, int amount, int flags, int isCriticalHit, int arg6);

struct Struct_ov024_021e324c { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

// USA: func_ov024_021e324c
extern "C" ARM unsigned long long func_ov024_021e324c(struct Struct_ov024_021e324c* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
	var1.unknown_0_ = 0;
	var1.unknown_4_ = 0;
	if (IsPoisoned_020885b4((struct Struct_020885b4*)var0->currentStats_) || IsEnvenomated_02088514((struct Struct_02088514*)var0->currentStats_)) {
		func_02088644((struct Struct_02088644*)var0->currentStats_);
		SetActionResultFlag_ov000_02159eac(arg0->unknown_10_, &var1, 0x11);
		void* var2 = AddExtraTargetResult_ov024_021e8ca0((struct ActionRunner_ov024_021e2bd0*)arg0, 0x54);
		if (var2) {
			SetActionResultFromCombatant_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, 0, 0, 0);
		}
	}
	return var1.unknown1_0_;
}
