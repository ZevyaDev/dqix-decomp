#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021ba94c {
	char unknown_0_[0x8];
	SafeAllocator unknown_8_;
	void* unknown_1c_;
};

// USA: func_ov017_021ba94c
extern "C" ARM void func_ov017_021ba94c(struct Struct_ov017_021ba94c* arg0) {
	if (arg0->unknown_1c_ != NULL) {
		PopOverlay_020a1e54(1);
		arg0->unknown_1c_ = NULL;
	}

	void* var0 = arg0->unknown_8_.GetSignedAllocator();
	arg0->unknown_8_.Destroy();
	FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
