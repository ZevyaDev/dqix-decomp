#include <globaldefs.h>

struct Struct_02040774_2;
extern "C" void SetObject3DPosition_020407b4(struct Struct_02040774_2* object, int x, int y, int z);

struct NPCSprite_02040774 {
    char unknown_0_[4];
    int positionX_4_;
    int positionY_8_;
    int positionZ_c_;
};
struct NPC_0203d028_15 {
    char unknown_0_[0x14];
    struct NPCSprite_02040774* pSprite_14_;
    void* unknown_18_;
    void* unknown_1c_;
};

// USA: SetNPCPosition_02040774
extern "C" ARM void SetNPCPosition_02040774(struct NPC_0203d028_15* npc, int x, int y, int z) {
    struct NPCSprite_02040774* sprite = npc->pSprite_14_;
    if (sprite != NULL) {
        sprite->positionX_4_ = x;
        sprite->positionY_8_ = y;
        sprite->positionZ_c_ = z;
        return;
    }
    if (npc->unknown_18_ != NULL) {
        SetObject3DPosition_020407b4((struct Struct_02040774_2*)npc->unknown_18_, x, y, z);
        return;
    }
    if (npc->unknown_1c_ != NULL) {
        SetObject3DPosition_020407b4((struct Struct_02040774_2*)npc->unknown_1c_, x, y, z);
    }
}
