#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int IsInputCooldownOver_ov017_021a4e70(unsigned char* gameResources);
extern "C" unsigned char IsOnLadder_02039d7c(char* object);

struct Struct_ov017_0219b33c {
    unsigned char kind_0_;
    unsigned char spriteIndex_1_;
    unsigned short targetIndex_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
    int unknown_c_;
    short angleOffset_10_;
    short unknown_12_;
};

extern const unsigned char data_ov017_021d64a0[15];

struct Struct_ov017_0219b33c_2 { unsigned int unknown_0_[2]; };
struct Struct_ov017_0219b33c_3 { unsigned char unknown_0_[15]; };

// USA: SubmitInteractionPrompt_ov017_0219b33c
extern "C" ARM void SubmitInteractionPrompt_ov017_0219b33c(char* gameResources, struct Struct_ov017_0219b33c* candidate) {
#if defined(jpn)
 enum {Enum_ov017_0219b33c_396=0x180, Enum_ov017_0219b33c_14020=0x34b4, Enum_ov017_0219b33c_16512=0x3e60, Enum_ov017_0219b33c_14004=0x34a4, Enum_ov017_0219b33c_14005=0x34a5, Enum_ov017_0219b33c_14006=0x34a6, Enum_ov017_0219b33c_14008=0x34a8, Enum_ov017_0219b33c_14012=0x34ac, Enum_ov017_0219b33c_14022=0x34b6};
#else
 enum {Enum_ov017_0219b33c_396=0x18c, Enum_ov017_0219b33c_14020=0x36c4, Enum_ov017_0219b33c_16512=0x4080, Enum_ov017_0219b33c_14004=0x36b4, Enum_ov017_0219b33c_14005=0x36b5, Enum_ov017_0219b33c_14006=0x36b6, Enum_ov017_0219b33c_14008=0x36b8, Enum_ov017_0219b33c_14012=0x36bc, Enum_ov017_0219b33c_14022=0x36c6};
#endif
    GameObject* currentLeader = GameState::GetInstance()->GetUnknownGameObject();

    if (!IsInputCooldownOver_ov017_021a4e70((unsigned char*)gameResources)) return;

    if (currentLeader) {
        if (*(int*)((char*)currentLeader + Enum_ov017_0219b33c_396) & 1) return;
        if (IsOnLadder_02039d7c((char*)currentLeader) != 0) return;
    }

    if (*(short*)(gameResources + Enum_ov017_0219b33c_14020) < candidate->angleOffset_10_) return;
    if (*(int*)(gameResources + Enum_ov017_0219b33c_16512) != 0) return;

    *(unsigned char*)(gameResources + Enum_ov017_0219b33c_14004) = candidate->kind_0_;
    *(unsigned char*)(gameResources + Enum_ov017_0219b33c_14005) = candidate->spriteIndex_1_;
    *(unsigned short*)(gameResources + Enum_ov017_0219b33c_14006) = candidate->targetIndex_2_;
    *(unsigned char*)(gameResources + Enum_ov017_0219b33c_14008) = candidate->unknown_4_;
    *(struct Struct_ov017_0219b33c_2*)(gameResources + Enum_ov017_0219b33c_14012) = *(struct Struct_ov017_0219b33c_2*)&candidate->unknown_8_;
    *(short*)(gameResources + Enum_ov017_0219b33c_14020) = candidate->angleOffset_10_;
    *(short*)(gameResources + Enum_ov017_0219b33c_14022) = candidate->unknown_12_;

    if (candidate->spriteIndex_1_ != 0x12) return;

    struct Struct_ov017_0219b33c_3 defaultSpriteTable;
    unsigned char* var2 = defaultSpriteTable.unknown_0_;
    defaultSpriteTable = *(struct Struct_ov017_0219b33c_3*)data_ov017_021d64a0;

    *(unsigned char*)(gameResources + Enum_ov017_0219b33c_14005) = var2[candidate->kind_0_];
}
