#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_020a1f4c(int arg0);
extern "C" void func_020a1e54(int arg0);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021b2c88 {
	char unknown_0_[0xc];
	SafeAllocator unknown_c_;
};

// USA: func_ov017_021b2c88
extern "C" ARM void func_ov017_021b2c88(struct Struct_ov017_021b2c88* arg0) {
	if (data_ov017_021d840c != 0) {
		func_020a1f4c(1);
		func_020a1e54(1);
		data_ov017_021d840c = 0;
	}

	void* var0 = arg0->unknown_c_.GetSignedAllocator();
	arg0->unknown_c_.Destroy();
	FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
