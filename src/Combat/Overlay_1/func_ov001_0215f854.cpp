#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020100bc func_0200ff18
#endif

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void* GetScriptValueAsString_ov017_021d612c(void*);
extern "C" int ResolveEventObjectIndex_ov001_0215ad2c(int scriptObjectId);
extern SafeAllocator* data_ov001_021658b8[8];
extern "C" void* func_02010768(void* arg0);
extern "C" void SetCamera_020100c4(GameState* gameState, int camera);

struct BoneCamera_0204a120;
extern "C" void InitBoneCamera_0204a120(struct BoneCamera_0204a120* camera);

struct BoneCamera_0204a3f0_2;
struct Struct_0204a3f0;
extern "C" void SetBoneCameraObject_0204a3f0(struct BoneCamera_0204a3f0_2* camera, struct Struct_0204a3f0* trackedObject);

extern "C" void SetBoneCameraEyeBone_0204a440(char* camera, const char* boneName);
extern "C" void SetBoneCameraTargetBone_0204a464(char* camera, const char* boneName);

// USA: func_ov001_0215f854
extern "C" ARM int func_ov001_0215f854(char* arg0) {
	GameState* var0 = GameState::GetInstance();
	SafeAllocator* var1 = data_ov001_021658b8[0];
	void* var2 = func_02010768(var0);

	int var3 = GetScriptValueAsInt_ov017_021d60f4(arg0);
	void* var4 = GetScriptValueAsString_ov017_021d612c(arg0 + 0x8);
	void* var5 = GetScriptValueAsString_ov017_021d612c(arg0 + 0x10);

	int var6 = ResolveEventObjectIndex_ov001_0215ad2c(var3);

	GameObject* var7 = var0->GetGameObjectByIndex(var6);
	if (var7 == NULL) return 0;

	void* var8 = var1->Allocate(0x268);

	*(void**)((char*)var2 + 0x4) = func_020100bc(var0);

	InitBoneCamera_0204a120((struct BoneCamera_0204a120*)var8);
	SetBoneCameraObject_0204a3f0((struct BoneCamera_0204a3f0_2*)var8, (struct Struct_0204a3f0*)var7);
	SetBoneCameraEyeBone_0204a440((char*)var8, (const char*)var4);
	SetBoneCameraTargetBone_0204a464((char*)var8, (const char*)var5);

	((Object3D*)((unsigned char*)var7))->EnableFlag(1);
	((Object3D*)((unsigned char*)var7))->EnableFlag(0x20);

	SetCamera_020100c4(var0, (int)var8);
	return 1;
}
