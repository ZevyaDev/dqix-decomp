#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"
#include "NitroSDK/Matrix.h"

extern "C" void *__clear(void *arg0, int arg1);

struct SavedNPCState_0203e0a0_2 {
    short x_0_;
    short y_2_;
    short z_4_;
    short angle_6_;
    unsigned short npcId_8_0_ : 9;
    unsigned short unknown_9_1_ : 1;
    unsigned short unknown_9_2_ : 5;
    unsigned short unknown_9_7_ : 1;
};

struct NPCManager_0203e0a0_3 {
    unsigned char unknown_0_[0xc];
    NPC_0203dce4 *npcs_c_[32];
    unsigned int npcCount_8c_;
    unsigned char unknown_90_[0xe];
    SavedNPCState_0203e0a0_2 savedStates_9e_[32];
    unsigned short savedZoneId_1de_;
    unsigned short savedNPCCount_1e0_;
    unsigned short unknown_1e2_;
    unsigned int unknown_1e4_;
};

struct Struct_0203e0a0_4 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    Struct_0203e0a0_4 *unknown_10_;
};

struct Struct_0203e0a0_5 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_0_ : 3;
    unsigned char unknown_a_3_ : 3;
    unsigned char unknown_a_6_ : 2;
    unsigned char unknown_b_[0x29];
    Struct_0203e0a0_4 *unknown_34_;
};

// USA: SaveNPCStates_0203e0a0
extern "C" ARM void SaveNPCStates_0203e0a0(void *manager, unsigned short zoneId) {
    NPCManager_0203e0a0_3 *npcManager = static_cast<NPCManager_0203e0a0_3 *>(manager);
    npcManager->savedZoneId_1de_                   = zoneId;
    npcManager->savedNPCCount_1e0_          = 0;
    NPC_0203dce4 **slot       = npcManager->npcs_c_;
    SavedNPCState_0203e0a0_2 *savedState    = npcManager->savedStates_9e_;
    unsigned int i         = 0;
    for (; i < npcManager->npcCount_8c_; ++slot, ++savedState, ++i) {
        NPC_0203dce4 *npc = *slot;
        if (npc != NULL) {
            Vector3i position;
            __clear(&position, sizeof(position));
            short angle = 0;
            if (((unsigned char*)npc->pSprite_14_) != NULL) {
                position = *(Vector3i *) (((unsigned char*)npc->pSprite_14_) + 4);
                angle    = (short) func_0203cdd0(((Struct_0203cdd0*)npc->pSprite_14_));
            } else if (((unsigned char*)npc->unknown_18_) != NULL) {
                position = *(Vector3i *) (((unsigned char*)npc->unknown_18_) + 0x44);
                angle    = (short) *(int *) (((unsigned char*)npc->unknown_18_) + 0x54);
            } else if (((unsigned char*)npc->unknown_1c_) != NULL) {
                position = *(Vector3i *) (((unsigned char*)npc->unknown_1c_) + 0x44);
                angle    = (short) *(int *) (((unsigned char*)npc->unknown_1c_) + 0x54);
            }
            int x               = position.x;
            int z               = position.z;
            int y               = position.y;
            savedState->x_0_         = (short) (x >> 4);
            savedState->y_2_         = (short) (y >> 4);
            savedState->z_4_         = (short) (z >> 4);
            savedState->angle_6_     = angle;
            unsigned short *npcData = (unsigned short *) GetNPCData_02040528(&npc->flags_0_);
            if (npcData != NULL) {
                savedState->npcId_8_0_ = *npcData;
            }
            savedState->unknown_9_1_     = (npc->flags_0_ & 0x8000) != 0;
            savedState->unknown_9_2_    = 0;
            Struct_0203e0a0_5 *placement = (Struct_0203e0a0_5 *) GetNPCPlacement_02040538((NPC_0203e0a0 *) npc);
            if (placement != NULL) {
                Struct_0203e0a0_4 *node = placement->unknown_34_;
                while (node != NULL) {
                    if (node->unknown_c_ != 0) {
                        break;
                    }
                    ++savedState->unknown_9_2_;
                    node = node->unknown_10_;
                    if (node == placement->unknown_34_) {
                        break;
                    }
                }
            }
            savedState->unknown_9_7_ = placement->unknown_a_3_ == 3;
            if (npc->flags_0_ & 0x40000) {
                npcManager->unknown_1e4_ |= 1U << i;
            }
            ++npcManager->savedNPCCount_1e0_;
        }
    }
}
