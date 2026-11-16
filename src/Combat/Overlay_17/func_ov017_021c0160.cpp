#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern int data_ov017_021d8474;
extern int gMainHeap_02114e20;

struct Struct_ov017_021c0160 {
	char unknown_0_[0x8];
	SafeAllocator unknown_8_;
};

// USA: func_ov017_021c0160
extern "C" ARM void func_ov017_021c0160(struct Struct_ov017_021c0160* arg0) {
	data_ov017_021d8474 = 0;

	void* var0 = arg0->unknown_8_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_8_.Destroy();
		func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
	}
}
