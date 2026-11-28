#include <globaldefs.h>
extern "C" void ClearNPCPlacementList_0206da74(int*);
extern "C" void func_02064e20(int*);
#include "std_library_functions.h"

struct Struct_020401e4;
extern "C" void func_020401e4(struct Struct_020401e4* arg0);

struct NPCManager_0203cf58 {
    unsigned char unknown_0_[0x8c];
    int npcCount_8c_;
    unsigned char unknown_90_[0x8];
    int unknown_98_;
    unsigned char unknown_9c_;
    unsigned char unknown_9d_[0x141];
    short savedZoneId_1de_;
    unsigned char unknown_1e0_[4];
    int unknown_1e4_;
};

// USA: InitNPCManager_0203cf58
extern "C" ARM void InitNPCManager_0203cf58(struct NPCManager_0203cf58* npcManager) {
    func_020401e4((struct Struct_020401e4*)npcManager);
    func_02064e20((int*)((char*)npcManager + 0x90));
    ClearNPCPlacementList_0206da74((int*)((char*)npcManager + 0x94));
    memset((char*)npcManager + 0xc, 0, 0x80);
    npcManager->unknown_98_ = 0;
    npcManager->npcCount_8c_ = 0;
    npcManager->unknown_9c_ = 0;
    memset((char*)npcManager + 0x9e, 0, 0x140);
    npcManager->savedZoneId_1de_ = 0;
    npcManager->unknown_1e4_ = 0;
}
