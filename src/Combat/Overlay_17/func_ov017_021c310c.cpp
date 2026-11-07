#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* GetEffectManager_02057924(void* arg0);
extern "C" void UnloadExtraSoundSet_0205ebec(void* manager);
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gSoundEffectManager_02108760;
extern int gMainHeap_02114e20;

struct Struct_ov017_021c310c {
	char unknown_0_[0x8];
	SafeAllocator unknown_8_;
	char unknown_1c_[0x90 - 0x8 - sizeof(SafeAllocator)];
	void* unknown_90_;
};

// USA: func_ov017_021c310c
extern "C" ARM void func_ov017_021c310c(struct Struct_ov017_021c310c* arg0) {
	if (arg0->unknown_90_ != NULL) {
		void* var0 = GetEffectManager_02057924(arg0->unknown_90_);
		UnloadExtraSoundSet_0205ebec((void*)&gSoundEffectManager_02108760);
		RemoveEffectResource_02057f00(var0, 0x11);
	}

	void* var1 = arg0->unknown_8_.GetSignedAllocator();
	if (var1 != NULL) {
		arg0->unknown_8_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var1);
	}
}
