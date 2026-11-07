#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov017_021c12b0(unsigned char arg0);
extern int data_ov017_021d8478;
extern "C" void PopSubOverlay_020a1f4c(int isPreviousReloaded);
extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

struct Struct_ov017_021c1394 {
	char unknown_0_[8];
	SafeAllocator unknown_8_;
};

// USA: func_ov017_021c1394
extern "C" ARM void func_ov017_021c1394(Struct_ov017_021c1394* arg0) {
	if (*(unsigned char*)((char*)arg0 + 0x1e) != 0) {
		func_ov017_021c12b0(0);
	}
	if (data_ov017_021d8478 != 0) {
		data_ov017_021d8478 = 0;
		PopSubOverlay_020a1f4c(1);
		PopOverlay_020a1e54(1);
	}
	void* var0 = arg0->unknown_8_.GetSignedAllocator();
	arg0->unknown_8_.Destroy();
	FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
