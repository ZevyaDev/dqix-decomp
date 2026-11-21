#include <globaldefs.h>
#include "GameState/GameState.h"

struct TextWindowManager_0205cf1c;
struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
struct MenuCursor_0205bcdc {
    int itemCount_0_; int unknown_4_; char unknown_8_[0x40 - 8];
    unsigned char unknown_40_; unsigned char unknown_41_; char unknown_42_[0x50 - 0x42];
};
struct Struct_0205c53c {
    int unknown_0_;
    MenuCursor_0205bcdc unknown_4_;
    MenuCursor_0205bcdc unknown_54_;
};
struct ProfileMenu_ov023_021e6e60 {
#if defined(jpn)
    char unknown_0_[0x90]; Struct_0205c53c windowManager_ac_;
#else
    char unknown1_0_[0xac]; Struct_0205c53c windowManager_ac_;
#endif

#if defined(jpn)
    char unknown_134_[0x1341 - 0x134]; unsigned char unknown_1371_;
#else
    char unknown_150_[0x1371 - 0x150]; unsigned char unknown_1371_;
#endif

#if defined(jpn)
    char unknown_1342_[0x1368 - 0x1342]; unsigned char unknown_13a0_;
#else
    char unknown_1372_[0x13a0 - 0x1372]; unsigned char unknown_13a0_;
#endif

#if defined(jpn)
    char unknown_1369_[0x141c - 0x1369];
#else
    char unknown_13a1_[0x13c4 - 0x13a1];
#endif

    unsigned short unknown_13c4_0_ : 5; unsigned short accoladeCount_13c4_5_ : 11;
#if defined(jpn)
    char unknown_141e_[0x142c - 0x141e];
#else
    char unknown_13c6_[0x13d4 - 0x13c6];
#endif

    int unknown_13d4_; int unknown_13d8_; int unknown_13dc_; int unknown_13e0_; int unknown_13e4_;
    int unknown_13e8_; int unknown_13ec_; int unknown_13f0_; int unknown_13f4_; int unknown_13f8_;
};
extern "C" void DisableTouchMenuCursor_0205cf10(void*);
extern "C" void DisableKeyMenuCursor_0205cf1c(TextWindowManager_0205cf1c*);
extern "C" void func_0205c53c(Struct_0205c53c*);
extern "C" void SetMenuCursorGrid_0205ba68(MenuCursor_0205ba68*, int, int, int);
extern "C" void SetMenuCursorItemCount_0205bacc(MenuCursor_0205bacc*, int);
extern "C" void SetTouchMenuCursorIndex_0205bcdc(MenuCursor_0205bcdc*, int);
extern "C" void SetMenuCursorIndex_0205bb04(MenuCursor_0205bcdc*, int);

// USA: ConfigureProfileMenuCursors_ov023_021e6e60
extern "C" ARM void ConfigureProfileMenuCursors_ov023_021e6e60(ProfileMenu_ov023_021e6e60* menu) {
    GameState::GetInstance();
    int columnCount;
    int rowCount;
    int pageCount;
    int isRowMajor = 0;
    unsigned int itemCount;
    int cursorIndex;
    switch (menu->unknown_1371_) {
    case 1: pageCount = 1; itemCount = 6; columnCount = 1; rowCount = 6; cursorIndex = menu->unknown_13d4_; break;
    case 2: pageCount = 1; itemCount = 4; columnCount = 1; rowCount = 4; cursorIndex = menu->unknown_13d8_; break;
#if defined(jpn)
    case 3: pageCount = 3; columnCount = 2; rowCount = 8; itemCount = 47; cursorIndex = menu->unknown_13dc_; break;
#else
    case 3: columnCount = 2; rowCount = 8; pageCount = 12; itemCount = 192; cursorIndex = menu->unknown_13dc_; break;
#endif

    case 4: pageCount = 1; rowCount = 8; columnCount = 1; itemCount = 8; cursorIndex = menu->unknown_13e0_; break;
    case 5:
        columnCount = 1; itemCount = menu->unknown_13c4_0_; pageCount = ((int)itemCount - 1) / 9 + 1;
        rowCount = 9;
        if (itemCount < 9) rowCount = itemCount;
        cursorIndex = menu->unknown_13e4_; break;
    case 6: pageCount = 1; itemCount = 2; columnCount = 1; rowCount = 2; cursorIndex = menu->unknown_13f8_; break;
    case 10: pageCount = 1; itemCount = 2; columnCount = 1; rowCount = 2; cursorIndex = menu->unknown_13e8_; break;
    case 11: pageCount = 6; columnCount = 1; rowCount = 10; itemCount = 60; cursorIndex = menu->unknown_13ec_; break;
    case 12:
        columnCount = 2; isRowMajor = 1; itemCount = menu->accoladeCount_13c4_5_;
        pageCount = ((int)itemCount - 1) / 16 + 1;
        rowCount = ((int)itemCount - 1) / 2 + 1;
        if (rowCount > 8) rowCount = 8;
        cursorIndex = menu->unknown_13f0_; break;
    case 13: columnCount = 1; rowCount = 8; pageCount = 1; itemCount = 8; cursorIndex = menu->unknown_13f4_; break;
    default:
        DisableTouchMenuCursor_0205cf10(&menu->windowManager_ac_);
        DisableKeyMenuCursor_0205cf1c((TextWindowManager_0205cf1c*)&menu->windowManager_ac_);
        return;
    }
    func_0205c53c(&menu->windowManager_ac_);
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&menu->windowManager_ac_.unknown_4_, columnCount, rowCount, isRowMajor);
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)&menu->windowManager_ac_.unknown_54_, columnCount, rowCount, isRowMajor);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&menu->windowManager_ac_.unknown_4_, itemCount);
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)&menu->windowManager_ac_.unknown_54_, itemCount);
    menu->windowManager_ac_.unknown_4_.unknown_4_ = pageCount;
    menu->windowManager_ac_.unknown_54_.unknown_4_ = pageCount;
    SetTouchMenuCursorIndex_0205bcdc(&menu->windowManager_ac_.unknown_4_, cursorIndex);
    SetMenuCursorIndex_0205bb04(&menu->windowManager_ac_.unknown_54_, cursorIndex);
    menu->windowManager_ac_.unknown_54_.unknown_40_ = 1;
    menu->windowManager_ac_.unknown_54_.unknown_41_ = 1;
    menu->unknown_13a0_ = 0;
}
