#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* arg0);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void func_020a2794(void* arg0);

extern int gMainHeap_02114e20;

struct Struct_ov017_021b5a30 {
	char unknown_0_[0x40];
	SafeAllocator unknown_40_;
	unsigned char unknown_54_;
	char unknown_55_[0x58 - 0x55];
	SafeAllocator unknown_58_;
};

// USA: func_ov017_021b5a30
extern "C" ARM void func_ov017_021b5a30(struct Struct_ov017_021b5a30* arg0) {
	int var0 = ((int)GetGameResources());
	if (arg0->unknown_54_ != 0 && var0 != 0) {
		func_ov017_0218d5c8((unsigned char*)var0);
		arg0->unknown_54_ = 0;
	}

	void* var1 = arg0->unknown_40_.GetSignedAllocator();
	if (var1 != NULL) {
		arg0->unknown_40_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var1);
	}

	void* var2 = arg0->unknown_58_.GetSignedAllocator();
	if (var2 != NULL) {
		arg0->unknown_58_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var2);
	}

	GameState* var3 = GameState::GetInstance();
	GameObject* var4 = var3->GetUnknownGameObject();
	if (var4 != NULL) {
		EnablePlayerControl_020397c0(var4);
	}

	int var5 = GetFollowCamera_020100f8((char*)var3);
	if (var5 != 0) {
		func_020a2794((void*)var5);
	}

	if (var0 != 0) {
		ClearFlags04((GameResources*)var0, 0x80);
	}
}
