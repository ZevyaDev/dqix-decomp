#include <globaldefs.h>

struct Struct_0203de84 {
    unsigned int unknown_0_[3];
};

struct Struct_020406f8 {
    char unknown_0_[4];
    struct Struct_0203de84 position_4_;
};

struct Struct_020406f8_2 {
    char unknown_0_[0x44];
    struct Struct_0203de84 position_44_;
};

struct NPC_0203de84_2 {
    char unknown_0_[0x14];
    struct Struct_020406f8* unknown_14_;
    struct Struct_020406f8_2* unknown_18_;
    struct Struct_020406f8_2* unknown_1c_;
};

// USA: GetNPCPosition_020406f8
extern "C" ARM void GetNPCPosition_020406f8(struct Struct_0203de84* outPosition, struct NPC_0203de84_2* npc) {
    if (npc->unknown_14_ != NULL) {
        *outPosition = npc->unknown_14_->position_4_;
        return;
    }
    if (npc->unknown_18_ != NULL) {
        *outPosition = npc->unknown_18_->position_44_;
        return;
    }
    if (npc->unknown_1c_ != NULL) {
        *outPosition = npc->unknown_1c_->position_44_;
        return;
    }
    {
        struct Struct_0203de84 origin;
        origin.unknown_0_[0] = 0;
        origin.unknown_0_[1] = 0;
        origin.unknown_0_[2] = 0;
        *outPosition = origin;
    }
}
