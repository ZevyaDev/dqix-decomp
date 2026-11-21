#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);
struct PartyMemberData_02061c04_22;
extern "C" void RemoveHeldItemByIndex_0208386c(struct PartyMemberData_02061c04_22* memberData, int index);

struct Struct_ov017_021d0164 { unsigned char unknown_0_[4]; int unknown_4_; signed char unknown_8_; };

// USA: func_ov017_021d0164
extern "C" ARM void func_ov017_021d0164(int arg0, Struct_ov017_021d0164* arg1, GameState* arg2) {
	GameObject* var0 = GetPartyMemberBaseByIndex_0200ff1c(arg2, arg1->unknown_4_);
	if (var0 == NULL) return;
	int var1 = func_02053c6c((unsigned char*)var0);
	if (var1 == 0) return;
	RemoveHeldItemByIndex_0208386c((struct PartyMemberData_02061c04_22*)var1, arg1->unknown_8_);
}
