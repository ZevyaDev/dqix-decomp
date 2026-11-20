#include <globaldefs.h>

struct Struct_0203d028_21 {
    char unknown_0_[0xd0];
    int unknown_d0_;
};

struct NPC_0203e2c4_2 {
    char unknown_0_[0x18];
    struct Struct_0203d028_21* unknown_18_;
};

extern "C" void* GetNPCManager_0203cf4c(void);
extern "C" void* FindNPCById_0203df78(void* npcManager, int id);
extern "C" void SetNPCFacingInstantly_02040b2c(struct NPC_0203e2c4_2* npc, int angle);
extern "C" int func_020415b0(Struct_0203d028_21*, int, int);

extern char data_ov004_021706f7[];

// USA: func_ov004_0216856c
extern "C" ARM int func_ov004_0216856c(void) {
    struct NPC_0203e2c4_2* var0 = (struct NPC_0203e2c4_2*)FindNPCById_0203df78(GetNPCManager_0203cf4c(), 0x67);
    if (var0) {
        SetNPCFacingInstantly_02040b2c(var0, 0x3244);
        var0->unknown_18_->unknown_d0_ = 0;
        func_020415b0(var0->unknown_18_, (int)data_ov004_021706f7, 0);
    }
    return 0;
}
