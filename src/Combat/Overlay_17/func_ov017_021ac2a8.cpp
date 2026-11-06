#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* GetEffectManager_02057924(void* arg0);
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);
extern "C" void LoadFileTables_020a0c0c(void);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021ac2a8 {
	char unknown_0_[0x10];
	SafeAllocator unknown_10_;
};

// USA: func_ov017_021ac2a8
extern "C" ARM void func_ov017_021ac2a8(struct Struct_ov017_021ac2a8* arg0) {
	RemoveEffectResource_02057f00(GetEffectManager_02057924(arg0), 5);

	void* var0 = arg0->unknown_10_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_10_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
	}

	LoadFileTables_020a0c0c();
}
