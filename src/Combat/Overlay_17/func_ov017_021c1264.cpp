#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
enum { Enum_ov017_021c1404_147456 = 0x22c00, Enum_ov017_021c1404_828 = 0x338, Enum_ov017_021c1404_372 = 0x170 };
#else
enum { Enum_ov017_021c1404_147456 = 0x24000, Enum_ov017_021c1404_828 = 0x33c, Enum_ov017_021c1404_372 = 0x174 };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void ClearCameraFlags_020a28b0(unsigned char* camera, int flags);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void PushOverlay_020a1df8(int overlayEntry);
extern "C" void PushSubOverlay_020a1ef0(int subOverlayEntry);

struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);

extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern AllocatorUnion gMainHeap_02114e20;
extern "C" void ReleaseFileTablesForSpace_020a0cc4(unsigned int);
extern "C" void LoadFileTables_020a0c0c(void);

extern "C" void func_ov003_02154720(void* arg0, unsigned char arg1);
extern "C" void func_ov003_021544ec(void* arg0, SafeAllocator* arg1);
extern "C" int func_ov003_02154af4(void* arg0, unsigned int arg1);
extern "C" void func_ov003_021549a8(void* arg0);

extern "C" ARM void func_ov017_021c1264(void);
extern "C" void func_ov017_021c1394(void* arg0);

extern int data_ov017_021d8478;

struct Struct_ov017_021c1404 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	char unknown_2_[6];
	SafeAllocator unknown_8_;
	unsigned char unknown_1c_;
	unsigned char unknown_1d_;
	unsigned char unknown_1e_;
};

// USA: func_ov017_021c1404
extern "C" ARM void func_ov017_021c1404(struct Struct_ov017_021c1404* arg0) {
	GameState* var0 = GameState::GetInstance();
	int* var1 = (int*)GetResources_0200fb8c((int*)var0);
	GameObject* var2 = var0->GetUnknownGameObject();
	int var3 = GetFollowCamera_020100f8((char*)var0);
	SetFlags04((GameResources*)var1, 0xc0);
	if (var2) {
		DisablePlayerControl_020397cc((struct Struct_02018300_3*)var2, 1);
	}
	func_020a28a0((unsigned char*)var3, 3);
	unsigned char var4 = arg0->unknown_1c_;

	if (var4 == 0) {
		ReleaseFileTablesForSpace_020a0cc4(Enum_ov017_021c1404_147456);
		void* var5 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, Enum_ov017_021c1404_147456);
		if (!var5) {
			LoadFileTables_020a0c0c();
			arg0->unknown_1_ = 1;
			return;
		}
		arg0->unknown_8_.CreateTypeA(var5, Enum_ov017_021c1404_147456);
		arg0->unknown_8_.Reset();
		void* var6 = arg0->unknown_8_.Allocate(Enum_ov017_021c1404_828);
		data_ov017_021d8478 = (int)var6;
		if (!var6) {
			LoadFileTables_020a0c0c();
			arg0->unknown_1_ = 1;
			return;
		}
		PushOverlay_020a1df8(3);
		PushSubOverlay_020a1ef0(1);
		func_ov003_02154720((void*)data_ov017_021d8478, arg0->unknown_1e_);
		func_ov003_021544ec((void*)data_ov017_021d8478, &arg0->unknown_8_);
		func_ov017_021c1264();
		arg0->unknown_1c_ = arg0->unknown_1c_ + 1;
		return;
	}
	if (var4 == 1) {
		unsigned int var7 = var0->GetTickCount();
		if (func_ov003_02154af4((void*)data_ov017_021d8478, var7) == 0) return;
		FontLoader_0208cb08* var8 = GetFontLoader_02094a00();
		ClearLoadedFontSets_02094b40(var8);
		CancelFontLoad_02094ab0(var8);
		RequestFontLoad_02094b34(var8, 0x6f, 0x1388, 1, 1);
		arg0->unknown_1c_ = arg0->unknown_1c_ + 1;
		return;
	}
	if (var4 == 2) {
		if (!UpdateFontLoad_02094b4c(GetFontLoader_02094a00())) return;
		func_ov003_021549a8((void*)data_ov017_021d8478);
		arg0->unknown_1c_ = arg0->unknown_1c_ + 1;
		return;
	}
	if (var4 != 3) return;

	int* var9 = (int*)0x4000000;
	unsigned int var10 = *(unsigned int*)((char*)data_ov017_021d8478 + Enum_ov017_021c1404_372);
	*var9 = (var10 << 8) | (*var9 & ~0x1f00);
	ClearFlags04((GameResources*)var1, 0xc0);
	EnablePlayerControl_020397c0(var2);
	ClearCameraFlags_020a28b0((unsigned char*)var3, 3);
	func_ov017_021c1394(arg0);
	LoadFileTables_020a0c0c();
	arg0->unknown_1_ = 1;
	func_ov017_021c1264();
}
