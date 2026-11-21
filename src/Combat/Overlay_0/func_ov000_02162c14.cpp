#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x371c
#else
#define REGION_OFFSET_0 0x3760
#endif

struct PartyMemberPanel_ov000_02162c14 {
    char unknown_0_[0x18];
    signed char windowStackTop_18_;
    char unknown_19_[0x1c - 0x19];
    signed char commandType_1c_;
    signed char enemyTargetSlot_1d_;
    char unknown_1e_[0x26 - 0x1e];
    unsigned short actionId_26_;
    char unknown_28_[0x2c - 0x28];
    short itemId_2c_;
    signed char targetMemberIndex_2e_;
};

extern "C" struct PartyMemberPanel_ov000_02162c14* FindPartyMemberPanel_ov000_02161318(char* battleUI, int memberIndex);
extern "C" int func_ov000_021761c8(char* arg0, int arg1);
extern "C" int func_ov000_021761ec(char* arg0, int arg1);

// USA: GetPartyMemberCommand_ov000_02162c14
extern "C" ARM void GetPartyMemberCommand_ov000_02162c14(char* battleScene, int memberIndex, char* command) {
    struct PartyMemberPanel_ov000_02162c14* panel = FindPartyMemberPanel_ov000_02161318(battleScene + REGION_OFFSET_0, memberIndex);
    if (panel == 0) {
        return;
    }
    signed char windowStackTop = panel->windowStackTop_18_;
    command[0] = *(signed char*)((char*)panel + windowStackTop + 0x10);
    command[1] = panel->commandType_1c_;
    command[2] = (signed char)func_ov000_021761c8(battleScene + REGION_OFFSET_0, panel->enemyTargetSlot_1d_);
    command[3] = (signed char)func_ov000_021761ec(battleScene + REGION_OFFSET_0, panel->enemyTargetSlot_1d_);
    *(short*)(command + 6) = panel->itemId_2c_;
    command[4] = panel->targetMemberIndex_2e_;
    *(unsigned short*)(command + 8) = panel->actionId_26_;
}
