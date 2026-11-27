#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

struct VRAMBankSwitch_020979c0;
extern "C" void func_020979f4(VRAMBankSwitch_020979c0* arg0);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

// USA: func_ov017_021c0364
extern "C" ARM void func_ov017_021c0364(char* arg0) {
	VRAMBankSwitch_020979c0* var0 = *(VRAMBankSwitch_020979c0**)(arg0 + 0x1c);
	if (var0 != NULL) {
		func_020979f4(var0);
	}
	void* var1 = ((SafeAllocator*)(arg0 + 0x8))->GetSignedAllocator();
	((SafeAllocator*)(arg0 + 0x8))->Destroy();
	func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var1);
}
