#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void* GetZone3D_02012fe4(void);
struct ActiveZone_020fdd44;
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
struct ActiveZone_02028bac { unsigned char unknown_0_[0x318]; };
extern "C" struct ActiveZone_02028bac* GetActiveZoneByIndex_02028bac(struct ActiveZone_02028bac* zones, int index);
struct Struct_020288e0;
extern "C" void func_020289c4(struct Struct_020288e0* arg0);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);

extern AllocatorUnion gMainHeap_02114e20;

// USA: func_ov017_0219fec0
extern "C" ARM void func_ov017_0219fec0(void*) {
	GetZone3D_02012fe4();
	struct ActiveZone_020fdd44* var0 = GetActiveZones_02027ca4();
	struct ActiveZone_02028bac* var1 = GetActiveZoneByIndex_02028bac((struct ActiveZone_02028bac*)var0, 0);
	func_020289c4((struct Struct_020288e0*)var1);
	void* var2 = (void*)(*(SafeAllocator**)((unsigned char*)var1 + 0x10))->GetSignedAllocator();
	if (var2) {
		(*(SafeAllocator**)((unsigned char*)var1 + 0x10))->Destroy();
		func_02012da4(&gMainHeap_02114e20, var2);
	}
	for (int var3 = 0; var3 < 4; var3++) {
		struct ActiveZone_02028bac* var4 = GetActiveZoneByIndex_02028bac((struct ActiveZone_02028bac*)var0, var3);
		void* var5 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x28a0);
		SafeAllocator* var6 = *(SafeAllocator**)((unsigned char*)var4 + 0x10);
		var6->CreateTypeA(var5, 0x28a0);
	}
}
