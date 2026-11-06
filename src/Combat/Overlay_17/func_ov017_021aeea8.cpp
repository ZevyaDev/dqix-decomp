#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021aeea8 {
	char unknown_0_[0x2c];
	SafeAllocator unknown_2c_;
};

// USA: func_ov017_021aeea8
extern "C" ARM void func_ov017_021aeea8(struct Struct_ov017_021aeea8* arg0) {
	void* var0 = arg0->unknown_2c_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_2c_.Destroy();
		FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
	}
}
