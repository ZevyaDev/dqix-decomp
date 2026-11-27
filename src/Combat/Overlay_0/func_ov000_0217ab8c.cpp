#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

struct Struct_02061c04_21 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0xc];
    int unknown_14_;
    char unknown_18_[0x38];
};
struct Struct_ov000_0217636c {
    char unknown_0_[4];
    Struct_02061c04_21 unknown_4_;
    Struct_02061c04_21 unknown_54_;
};
struct Struct_ov000_0217ab8c {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[2];
    signed char unknown_10_[8];
    signed char unknown_18_;
    signed char unknown_19_;
    signed char unknown_1a_;
    signed char unknown_1b_;
    signed char unknown_1c_;
    signed char unknown_1d_;
    short unknown_1e_;
    signed char unknown_20_;
    signed char unknown_21_;
    signed char unknown_22_;
    signed char unknown_23_;
    unsigned char unknown_24_;
    char unknown_25_[0x30 - 0x25];
    signed char* unknown_30_;
    signed char unknown_34_;
    char unknown_35_[3];
    Struct_ov000_0217636c* unknown_38_;
    char unknown_3c_[0x4c - 0x3c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc6 - 0x50];
#else
    char unknown1_50_[0x86 - 0x50];
#endif
    signed char unknown_86_;
    char unknown_87_[0x442 - 0x87];
    signed char unknown_442_;
    char unknown_443_;
    unsigned char unknown_444_;
};
struct Struct_ov000_0217ab8c_2 {
#if defined(jpn)
    char unknown_0_[0x1faa];
#else
    char unknown1_0_[0x1d72];
#endif
    unsigned short unknown_1d72_;
};
struct Struct_ov000_02184294_2 {
#if defined(jpn)
    Struct_ov000_0217ab8c_2* unknown1_8_;
    int unknown_4_;
    int unknown_8_;
#else
    int unknown_0_;
    int unknown1_4_;
    Struct_ov000_0217ab8c_2* unknown1_8_;
#endif
};
struct PartyMemberData_0207d300;
struct MenuCursor_0205ba68;

extern Struct_ov000_02184294_2 data_ov000_02184294;

struct Struct_ov000_02171640;
extern "C" int func_ov000_02171698(Struct_ov000_02171640*);
struct Struct_ov000_02171968;
extern "C" int func_ov000_021719c0(Struct_ov000_02171968*);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState*, int);
extern "C" int func_02053c6c(unsigned char*);
extern "C" int CountHeldItems_02083960(PartyMemberData_0207d300*);
extern "C" void DisableTouchMenuCursor_0205cf10(void*);
struct TextWindowManager_0205cf1c;
extern "C" void DisableKeyMenuCursor_0205cf1c(TextWindowManager_0205cf1c*);
extern "C" void EnableTouchMenuCursor_0205cef8(void*);
extern "C" void EnableKeyMenuCursor_0205cf04(void*);
extern "C" void SetMenuCursorGrid_0205ba68(MenuCursor_0205ba68*, int, int, int);
struct MenuCursor_0205bacc;
extern "C" void SetMenuCursorItemCount_0205bacc(MenuCursor_0205bacc*, int);
struct MenuCursor_0205bcdc;
extern "C" void SetTouchMenuCursorIndex_0205bcdc(MenuCursor_0205bcdc*, int);
extern "C" void SetMenuCursorIndex_0205bb04(Struct_02061c04_21*, int);

// USA: ConfigurePanelMenuCursors_ov000_0217ab8c
extern "C" ARM void ConfigurePanelMenuCursors_ov000_0217ab8c(Struct_ov000_0217ab8c* panel, int panelCount, int enemyTargetCount) {
    int columnCount, rowCount, pageCount, itemCount, index;
    Struct_ov000_0217636c* windowManager;
    if (panel->unknown_4c_ < 0 || !(panel->unknown_24_ & 1) || panel->unknown_c_ == 0 || (windowManager = panel->unknown_38_) == 0) {
        return;
    }
    switch (panel->unknown_10_[panel->unknown_18_]) {
    case 13:
        index = panel->unknown_1c_;
        columnCount = 2;
        rowCount = 3;
        pageCount = 1;
        itemCount = 6;
        break;
    case 14:
        rowCount = 1;
        columnCount = enemyTargetCount;
        pageCount = rowCount;
        itemCount = enemyTargetCount;
        index = panel->unknown_1d_;
        break;
    case 15:
        if (func_ov000_02171698((Struct_ov000_02171640*)panel) >= 4) {
            columnCount = 1;
            rowCount = 4;
            pageCount = (func_ov000_02171698((Struct_ov000_02171640*)panel) + 3) / 4;
        } else {
            columnCount = 1;
            rowCount = func_ov000_02171698((Struct_ov000_02171640*)panel);
            pageCount = columnCount;
        }
        panel->unknown_19_ = windowManager->unknown_54_.unknown_14_;
        itemCount = func_ov000_02171698((Struct_ov000_02171640*)panel);
        index = panel->unknown_20_;
        if (index < 0 || itemCount <= index) {
            index = 0;
            panel->unknown_20_ = 0;
        }
        break;
    case 16:
        if (func_ov000_021719c0((Struct_ov000_02171968*)panel) >= 4) {
            columnCount = 1;
            rowCount = 4;
            pageCount = (func_ov000_021719c0((Struct_ov000_02171968*)panel) + 3) / 4;
        } else {
            columnCount = 1;
            rowCount = func_ov000_021719c0((Struct_ov000_02171968*)panel);
            pageCount = columnCount;
        }
        panel->unknown_1a_ = windowManager->unknown_54_.unknown_14_;
        itemCount = func_ov000_021719c0((Struct_ov000_02171968*)panel);
        index = panel->unknown_1e_;
        if (index < 0 || itemCount <= index) {
            index = 0;
            panel->unknown_1e_ = 0;
        }
        break;
    case 17: {
        GameState* gameState = GameState::GetInstance();
        GameObject* member = GetPartyMemberBaseByIndex_0200ff1c(gameState, panel->unknown_4c_);
        int memberData = func_02053c6c((unsigned char*)member);
        if (memberData != 0) {
            int heldItemCount = CountHeldItems_02083960((PartyMemberData_0207d300*)memberData);
            pageCount = (panel->unknown_86_ - heldItemCount + 3) / 4 + (heldItemCount + 3) / 4;
            panel->unknown_1b_ = windowManager->unknown_54_.unknown_14_;
            itemCount = pageCount * 4;
            index = panel->unknown_22_;
            columnCount = 1;
            rowCount = 4;
        }
        break;
    }
    case 18:
    case 19:
    case 20:
        if (panel->unknown_444_ != 0) {
            for (int i = 0; i < panel->unknown_34_; i++) {
                if (panel->unknown_442_ == panel->unknown_30_[i]) {
                    panel->unknown_21_ = i;
                    break;
                }
            }
            panel->unknown_442_ = -1;
            panel->unknown_444_ = 0;
        }
        rowCount = panel->unknown_34_;
        columnCount = 1;
        pageCount = columnCount;
        itemCount = rowCount;
        index = panel->unknown_21_;
        break;
    case 21:
        columnCount = 1;
        rowCount = columnCount;
        pageCount = columnCount;
        itemCount = columnCount;
        index = panel->unknown_23_;
        break;
    default:
        DisableTouchMenuCursor_0205cf10(windowManager);
        DisableKeyMenuCursor_0205cf1c((TextWindowManager_0205cf1c*)panel->unknown_38_);
        return;
    }
    EnableTouchMenuCursor_0205cef8(panel->unknown_38_);
    EnableKeyMenuCursor_0205cf04(panel->unknown_38_);
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&windowManager->unknown_4_, columnCount, rowCount, 0);
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&windowManager->unknown_54_, columnCount, rowCount, 0);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&windowManager->unknown_4_, itemCount);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&windowManager->unknown_54_, itemCount);
    windowManager->unknown_4_.unknown_4_ = pageCount;
    windowManager->unknown_54_.unknown_4_ = pageCount;
    SetTouchMenuCursorIndex_0205bcdc((MenuCursor_0205bcdc*)&windowManager->unknown_4_, index);
    SetMenuCursorIndex_0205bb04(&windowManager->unknown_54_, index);
    data_ov000_02184294.unknown1_8_->unknown_1d72_ &= ~0x100;
}
