#include <globaldefs.h>

extern "C" void* GetBattleSetup_ov017_021b8478(void* battleManager);
extern "C" int GetBattleScene_ov017_021b8468(void* battleManager);
extern "C" void* GetBattle_ov017_021b8470(void* battleManager);
extern "C" void SetBattleSceneFlags_ov000_02160fa8(void* battleScene, int flags);

struct Struct_ov017_021cf694 {
	unsigned char unknown_0_[4];
	int unknown_4_;
	int unknown_8_;
	unsigned short unknown_c_;
};

// USA: func_ov017_021cf694
extern "C" ARM void func_ov017_021cf694(int arg0, Struct_ov017_021cf694* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cf694_1816=0x508, Enum_ov017_021cf694_24576=0x7000, Enum_ov017_021cf694_3644=0x2c, Enum_ov017_021cf694_3648=0x30};
#else
 enum {Enum_ov017_021cf694_1816=0x718, Enum_ov017_021cf694_24576=0x6000, Enum_ov017_021cf694_3644=0xe3c, Enum_ov017_021cf694_3648=0xe40};
#endif
	void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021cf694_1816);
	void* var1 = GetBattleSetup_ov017_021b8478(var0);
	if (var1 == NULL) {
		return;
	}
	int var2 = GetBattleScene_ov017_021b8468(var0);
	if (var2 == 0) {
		return;
	}
	if (GetBattle_ov017_021b8470(var0) == NULL) {
		return;
	}
	if (arg1->unknown_c_ != *(unsigned short*)((char*)var1 + 8)) {
		return;
	}
	int var3 = arg1->unknown_4_;
	int var4 = arg1->unknown_8_;
	unsigned char* var5 = (unsigned char*)var2 + Enum_ov017_021cf694_24576;
	*(int*)(var5 + Enum_ov017_021cf694_3644) = var3;
	*(int*)(var5 + Enum_ov017_021cf694_3648) = var4;
	SetBattleSceneFlags_ov000_02160fa8((void*)var2, 0x20000);
}
