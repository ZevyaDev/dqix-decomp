#include <globaldefs.h>

#if defined(jpn)
#define func_ov017_021a7280 func_ov017_021a7c28
#endif
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void* GetEffectManager_02057924(void* arg0);
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);
extern "C" void LoadFileTables_020a0c0c(void);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void func_0205ebec(void* arg0);

extern char gSoundEffectManager_02108760;
extern int gMainHeap_02114e20;

struct Struct_ov017_021a7280 {
	char unknown_0_[0x30];
	SafeAllocator unknown_30_;
};

// USA: func_ov017_021a7280
extern "C" ARM void func_ov017_021a7280(struct Struct_ov017_021a7280* arg0) {
	RemoveEffectResource_02057f00(GetEffectManager_02057924(arg0), 0xd);

	EnablePlayerControl_020397c0(GameState::GetInstance()->GetUnknownGameObject());

	func_0205ebec(&gSoundEffectManager_02108760);

	void* var0 = arg0->unknown_30_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_30_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
	}

	LoadFileTables_020a0c0c();
}
