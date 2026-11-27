#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void* GetZone3D_02012fe4(void);
struct ActiveZone_020fdd44;
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
struct ActiveZone_02028bac {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned char unknown_4_[0xc];
	SafeAllocator* unknown_10_;
#if defined(jpn)
	unsigned char unknown_14_[0x2f4];
#else
	unsigned char unknown1_14_[0x2f8];
#endif
	unsigned char unknown_30c_[0xc];
};
extern "C" struct ActiveZone_02028bac* GetActiveZoneByIndex_02028bac(struct ActiveZone_02028bac* zones, int index);
struct Struct_020288e0;
extern "C" void func_020289c4(struct Struct_020288e0* arg0);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void func_020a8e88(void* arg0);
extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);
struct Struct_020a8e9c_3;
extern "C" void func_020a8e9c(Struct_020a8e9c_3*, SafeAllocator*, void*, unsigned int);

extern AllocatorUnion gMainHeap_02114e20;
extern const char data_ov017_021d7638[];
#pragma opt_propagation off

// USA: func_ov017_0219fda0
extern "C" ARM void func_ov017_0219fda0(void) {
	GameState* var0 = GameState::GetInstance();
	GetZone3D_02012fe4();
	struct ActiveZone_020fdd44* var1 = GetActiveZones_02027ca4();
	for (int var2 = 0; var2 < 4; var2++) {
		struct ActiveZone_02028bac* var3 = GetActiveZoneByIndex_02028bac((struct ActiveZone_02028bac*)var1, var2);
		func_020289c4((struct Struct_020288e0*)var3);
		void* var4 = (void*)var3->unknown_10_->GetSignedAllocator();
		if (var4) {
			var3->unknown_10_->Destroy();
			func_02012da4(&gMainHeap_02114e20, var4);
		}
	}
	for (int var5 = 0x70; var5 <= 0x9f; var5++) {
		ClearGameObjectByIndex_0200fd48(var0, var5);
	}
	struct ActiveZone_02028bac* var6 = GetActiveZoneByIndex_02028bac((struct ActiveZone_02028bac*)var1, 0);
	unsigned int var7 = 0xa000;
	var6->unknown_2_ |= 4;
	var6->unknown_0_ = 3;
	void* var8 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, var7);
	var6->unknown_10_->CreateTypeA(var8, var7);
	if (var6 == NULL) return;
	func_020a8e88(var6->unknown_30c_);
	BackgroundLoader::AddLockGlobal();
	unsigned int var9;
	if (LoadFileIntoMemory(data_ov017_021d7638, g_fileScratchSpace, &var9) != NULL) {
		func_020a8e9c((Struct_020a8e9c_3*)var6->unknown_30c_, var6->unknown_10_, g_fileScratchSpace, var9);
	}
	BackgroundLoader::RemoveLockGlobal();
}
