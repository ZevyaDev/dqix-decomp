#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void func_02076a8c(void* arg0);

struct Struct_ov017_0219d250_8 { unsigned char unknown_0_[2]; unsigned short unknown_2_0_ : 2; unsigned short unknown_2_2_ : 14; };

// USA: func_ov017_0219e014
extern "C" ARM void func_ov017_0219e014(unsigned char* arg0, Struct_ov017_0219d250_8* arg1) {
	GameState* var0 = GameState::GetInstance();
	func_02027ca4();
	void* var1 = GetLocalWireless_0202ae18();

	if (arg1) {
		for (int var2 = 0; var2 < 0xc; var2++) {
			unsigned int var3 = arg1->unknown_2_0_;
			int var4 = var2 + (var3 * 0xc + 0x70);
			GameObject* var5 = var0->GetMaybeFieldMonsterByIndex(var4);

			if (var5) {
				if (IsLocalWirelessOn_0202b7d8((int*)var1) && GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)var1) != 0) {
					func_02076a8c(var5);
					((Object3D*)((unsigned char*)var5))->MakeHidden();
				} else {
					((Object3D*)((unsigned char*)var5))->Destroy();
				}
			}
		}
	}

	for (int var6 = 7; var6 <= 0x12; var6++) {
		GameObject* var7 = var0->GetGameObjectByIndex(var6);
		if (var7) {
			var7->obj3D_.Initialize();
			((Object3D*)((unsigned char*)var7))->MakeHidden();
		}
	}
}
