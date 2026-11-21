#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void func_ov000_0217228c(void* arg0);
extern "C" void* func_0202ae18(GameState* arg0);

struct PartyMemberPanel_ov000_02174b14 {
    char unknown_0_[0x24];
    unsigned char flags_24_;
    char unknown_25_[0x44 - 0x25];
    int x_44_;
    int y_48_;
    int memberIndex_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct BattleUI_ov000_02174b14_2 {
    char unknown_0_[0x6c];
    signed char panelOrder_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct PartyMemberPanel_ov000_02174b14 panels_958_[4];
};

// USA: PositionPartyMemberPanels_ov000_02174b14
extern "C" ARM void PositionPartyMemberPanels_ov000_02174b14(struct BattleUI_ov000_02174b14_2* battleUI) {
    func_ov000_0217228c(battleUI);
    func_0202ae18(GameState::GetInstance());
    int hasExpandedPanel = 0;
    for (int i = 0; i < 4; i++) {
        struct PartyMemberPanel_ov000_02174b14* panel = &battleUI->panels_958_[battleUI->panelOrder_6c_[i]];
        if (panel->memberIndex_4c_ < 0) {
            continue;
        }
        int isExpanded = (panel->flags_24_ & 4) ? 1 : 0;
        hasExpandedPanel = (hasExpandedPanel | isExpanded) ? 1 : 0;
    }
    int nextY = 0;
    if (!hasExpandedPanel) {
        nextY = 0x20;
    }
    struct PartyMemberPanel_ov000_02174b14* panel;
    for (int i = 0; i < 4; i++) {
        panel = &battleUI->panels_958_[battleUI->panelOrder_6c_[i]];
        int memberIndex = panel->memberIndex_4c_;
        int isPartyMemberIndex = 0;
        if (memberIndex >= 0) {
            isPartyMemberIndex = memberIndex <= 3;
        }
        if (!isPartyMemberIndex) {
            continue;
        }
        panel->x_44_ = 0;
        panel->y_48_ = nextY;
        if (panel->flags_24_ & 4) {
            nextY += 0x48;
        } else {
            nextY += 0x28;
        }
    }
}
