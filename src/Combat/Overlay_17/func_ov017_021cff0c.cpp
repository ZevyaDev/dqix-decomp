#include <globaldefs.h>
#include "GameState/GameState.h"

struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void RebuildPartyOrders_ov017_02191234(int gameResources);
extern "C" void func_02026394(unsigned char* arg0, unsigned int arg1);
extern "C" GameObject* GetCompanionByIndex_0200ff58(GameState* gameState, int index);
extern "C" int GetLeaderObjectIndex_020546a8(void* companion);
extern "C" void func_ov017_021907dc(int arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_ov017_021cff0c {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
};

// USA: func_ov017_021cff0c
extern "C" ARM void func_ov017_021cff0c(int arg0, Struct_ov017_021cff0c* arg1, GameState* arg2, int arg3, struct LocalWireless_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021cff0c_1744=0x4c0};
#else
 enum {Enum_ov017_021cff0c_1744=0x6d0};
#endif
	signed char var0 = GetOwnProtagonistObjectIndex_0202c1a4(arg4);
	if (arg1->unknown_4_ != var0) {
		return;
	}
	RebuildPartyOrders_ov017_02191234(arg3);
	unsigned char* var1 = *(unsigned char**)((unsigned char*)arg3 + 0x3000 + Enum_ov017_021cff0c_1744);
	func_02026394(var1, arg1->unknown_5_);
	int var2 = arg1->unknown_5_;
	GameObject* var3 = GetCompanionByIndex_0200ff58(arg2, var2);
	if (var3 != NULL) {
		var2 = GetLeaderObjectIndex_020546a8(var3);
	}
	func_ov017_021907dc(arg3, var2, 1, 1, 1);
}
