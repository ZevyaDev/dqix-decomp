#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_6;
extern "C" int HasTension_ov024_021da998(struct Struct_ov024_021da670_6* combatant);
struct Struct_ov024_021dd028_5;
extern "C" int HasSuperHighTension_ov024_021dd260(struct Struct_ov024_021dd028_5* combatant);

extern "C" void func_02088234(void* arg0);
extern "C" void func_020881ac(void* arg0);
extern "C" void func_02088914(unsigned char* arg0);
extern "C" void func_020889b4(void* arg0);
extern "C" void func_02088a04(void* arg0);
extern "C" void func_02088a54(unsigned char* arg0);
extern "C" void func_02088aa8(unsigned char* arg0);
extern "C" void func_02088b34(unsigned char* arg0);
extern "C" void func_02088964(unsigned char* arg0);
extern "C" void func_02088b84(unsigned char* arg0);
extern "C" void func_020888c4(unsigned char* arg0);
extern "C" void func_02088af0(unsigned char* arg0);
extern "C" void func_02088bd4(unsigned char* arg0);
struct Struct_02088674;
extern "C" void ClearFource_02088674(struct Struct_02088674* stats);
extern "C" void ClearHolyImpregnable_02088cf4(unsigned char* stats);
extern "C" void ClearEerieLight_02088d4c(unsigned char* stats);
extern "C" void ClearFireBarrier_02088c38(unsigned char* stats);
extern "C" void ClearIceBarrier_02088c9c(unsigned char* stats);
extern "C" void func_020890f4(unsigned char* arg0);
extern "C" void func_02089144(unsigned char* arg0);
extern "C" void func_02089194(unsigned char* arg0);
extern "C" void func_02088d9c(unsigned char* arg0);
extern "C" void ClearAttackBuff_02087838(void* stats);
extern "C" void ClearDefenseBuff_0208792c(void* stats);
extern "C" void ClearAgilityBuff_02087a20(void* stats);
extern "C" void ClearCharmBuff_02087b14(void* stats);
extern "C" void ClearMagicalMightBuff_02087c08(void* stats);
extern "C" void ClearMagicalMendingBuff_02087cfc(void* stats);
extern "C" void ClearSpellResistanceBuff_02087df0(void* stats);
extern "C" void ClearBreathResistanceBuff_02087efc(unsigned char* stats);
extern "C" void ClearBlockChanceBuff_020880e4(void* stats);
extern "C" void ClearEvasionBuff_02087ff0(void* stats);

void ApplyCombatantBuffs(int unused, int combatantId);

struct Struct_ov024_021ddc80_5;
extern "C" void* func_ov024_021e8cfc(struct Struct_ov024_021ddc80_5* arg0, void* arg1, int arg2, int arg3);

struct ActionRunner_ov024_021e2bd0;
extern "C" void* AddExtraTargetResult_ov024_021e8ca0(struct ActionRunner_ov024_021e2bd0* actionRunner, int messageId);

extern "C" void SetActionResultFromCombatant_ov000_0215cd44(void* battle, void* result, void* combatant, int amount, int flags, int isCriticalHit, int arg6);

struct Struct_ov024_021ea85c { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021ea85c
extern "C" ARM void* func_ov024_021ea85c(struct Struct_ov024_021ea85c* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
	if (!var0) return 0;
	int var1 = HasTension_ov024_021da998((struct Struct_ov024_021da670_6*)var0);
	int var2 = HasSuperHighTension_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0);
	func_02088234(var0->currentStats_);
	func_020881ac(var0->currentStats_);
	func_02088914((unsigned char*)var0->currentStats_);
	func_020889b4(var0->currentStats_);
	func_02088a04(var0->currentStats_);
	func_02088a54((unsigned char*)var0->currentStats_);
	func_02088aa8((unsigned char*)var0->currentStats_);
	func_02088b34((unsigned char*)var0->currentStats_);
	func_02088964((unsigned char*)var0->currentStats_);
	func_02088b84((unsigned char*)var0->currentStats_);
	func_020888c4((unsigned char*)var0->currentStats_);
	func_02088964((unsigned char*)var0->currentStats_);
	func_02088af0((unsigned char*)var0->currentStats_);
	func_02088bd4((unsigned char*)var0->currentStats_);
	ClearFource_02088674((struct Struct_02088674*)var0->currentStats_);
	ClearHolyImpregnable_02088cf4((unsigned char*)var0->currentStats_);
	ClearEerieLight_02088d4c((unsigned char*)var0->currentStats_);
	ClearFireBarrier_02088c38((unsigned char*)var0->currentStats_);
	ClearIceBarrier_02088c9c((unsigned char*)var0->currentStats_);
	func_020890f4((unsigned char*)var0->currentStats_);
	func_02089144((unsigned char*)var0->currentStats_);
	func_02089194((unsigned char*)var0->currentStats_);
	func_02088d9c((unsigned char*)var0->currentStats_);
	ClearAttackBuff_02087838(var0->currentStats_);
	ClearDefenseBuff_0208792c(var0->currentStats_);
	ClearAgilityBuff_02087a20(var0->currentStats_);
	ClearCharmBuff_02087b14(var0->currentStats_);
	ClearMagicalMightBuff_02087c08(var0->currentStats_);
	ClearMagicalMendingBuff_02087cfc(var0->currentStats_);
	ClearSpellResistanceBuff_02087df0(var0->currentStats_);
	ClearBreathResistanceBuff_02087efc((unsigned char*)var0->currentStats_);
	ClearBlockChanceBuff_020880e4(var0->currentStats_);
	ClearEvasionBuff_02087ff0(var0->currentStats_);
	ApplyCombatantBuffs((int)arg0->unknown_10_, arg1);
	void* var3 = 0;
	if (var1) {
		var3 = func_ov024_021e8cfc((struct Struct_ov024_021ddc80_5*)arg0, var0, 0, arg2);
	} else if (var2 && !HasSuperHighTension_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0)) {
		var3 = func_ov024_021e8cfc((struct Struct_ov024_021ddc80_5*)arg0, var0, 8, arg2);
	}
	if (arg2 != 0 && var3 == 0) {
		void* var4 = AddExtraTargetResult_ov024_021e8ca0((struct ActionRunner_ov024_021e2bd0*)arg0, 0xf1);
		var3 = var4;
		SetActionResultFromCombatant_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, 0, 0, 0);
	}
	return var3;
}
