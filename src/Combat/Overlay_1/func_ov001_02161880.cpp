#include <globaldefs.h>

extern "C" void* GetNPCManager_0203cf4c(void);
struct NPCManager_0203dce4_2;
struct NPC_0203dce4;
extern "C" struct NPC_0203dce4* GetNPCByIndex_0203dce4(struct NPCManager_0203dce4_2* npcManager, int index);

struct Struct_ov001_02161880 { char unknown_0_[0x98]; unsigned int unknown_98_; };

// USA: func_ov001_02161880
extern "C" ARM int func_ov001_02161880(void) {
	struct Struct_ov001_02161880* var0 = (struct Struct_ov001_02161880*)GetNPCManager_0203cf4c();
	var0->unknown_98_ &= ~0x2;
	int var1;
	for (var1 = 0; var1 < 0x20; var1++) {
		struct NPC_0203dce4* var2 = GetNPCByIndex_0203dce4((struct NPCManager_0203dce4_2*)var0, var1);
		if (var2 != NULL) {
			*(unsigned int*)var2 &= ~0x10000;
		}
	}
	return 1;
}
