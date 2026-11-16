#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_020a1e54 func_020a3bcc
#endif

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void PopSubOverlay_020a1f4c(int isPreviousReloaded);
extern "C" void func_020a1e54(int isPreviousReloaded);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021b2c88 {
	char unknown_0_[0xc];
	SafeAllocator unknown_c_;
};

// USA: func_ov017_021b2c88
extern "C" ARM void func_ov017_021b2c88(struct Struct_ov017_021b2c88* arg0) {
	if (data_ov017_021d840c != 0) {
		PopSubOverlay_020a1f4c(1);
		func_020a1e54(1);
		data_ov017_021d840c = 0;
	}

	void* var0 = arg0->unknown_c_.GetSignedAllocator();
	arg0->unknown_c_.Destroy();
	func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
