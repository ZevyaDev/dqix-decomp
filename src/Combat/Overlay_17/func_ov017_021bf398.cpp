#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void EnableCameraTurning_020a27ac(void* camera);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

struct StringList_020727d8;
extern "C" void DestroyStringList_020727ec(struct StringList_020727d8* stringList);

// USA: func_ov017_021bf398
extern "C" ARM void func_ov017_021bf398(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	int var1 = GetFollowCamera_020100f8((char*)var0);
	GameObject* var2 = var0->GetUnknownGameObject();
	EnableCameraTurning_020a27ac((void*)var1);
	EnablePlayerControl_020397c0(var2);
	SafeAllocator* var3 = (SafeAllocator*)(arg0 + 0x14);
	void* var4 = var3->GetSignedAllocator();
	if (var4) {
		var3->Reset();
		var3->Destroy();
		DestroyStringList_020727ec((struct StringList_020727d8*)(arg0 + 0xc));
		func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var4);
	}
	arg0[1] = 1;
}
