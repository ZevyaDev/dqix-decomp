#include <globaldefs.h>
extern "C" void ClearNPCPlacementList_0206da74(int*);
extern "C" void func_02064e20(int*);
#include "std_library_functions.h"

struct Struct_020401e4;
extern "C" void func_020401e4(struct Struct_020401e4* arg0);

struct NPCManager_0203cfb4 {
    unsigned char unknown_0_[0x8c];
    int unknown_8c_;
    unsigned char unknown_90_[0x8];
    int unknown_98_;
    unsigned char unknown_9c_;
};

// USA: ResetNPCManager_0203cfb4
extern "C" ARM void ResetNPCManager_0203cfb4(struct NPCManager_0203cfb4* npcManager) {
    func_020401e4((struct Struct_020401e4*)npcManager);
    func_02064e20((int*)((char*)npcManager + 0x90));
    ClearNPCPlacementList_0206da74((int*)((char*)npcManager + 0x94));
    memset((char*)npcManager + 0xc, 0, 0x80);
    npcManager->unknown_98_ = 0;
    npcManager->unknown_8c_ = 0;
    npcManager->unknown_9c_ = 0;
}
