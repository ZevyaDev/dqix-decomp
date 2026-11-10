#include <globaldefs.h>
#include "Input/Input.h"

struct MenuCursor_0205bb84 {
    int itemCount_0_;
    int pageCount_4_;
    int columnCount_8_;
    int rowCount_c_;
    int unknown_10_;
    int page_14_;
    int column_18_;
    int row_1c_;
    int unknown_20_;
    int* pMinorCount_24_;
    int* pMajorIndex_28_;
    int* pMinorIndex_2c_;
};
struct MenuCursor_0205c4a8 : MenuCursor_0205bb84 {};
struct KeyMenuCursor_0205bf3c : MenuCursor_0205c4a8 {
    int step_30_;
    unsigned short heldKey_34_;
    unsigned char isVerticalKeyHeld_36_;
    unsigned char isHorizontalKeyHeld_37_;
    unsigned char repeatTimer_38_;
    unsigned char repeatDelay_39_;
    unsigned char repeatInterval_3a_;
    unsigned char unknown_3b_;
    unsigned char hasColumnWrap_3c_;
    unsigned char hasRowWrap_3d_;
};
struct Struct_020e7dc4 { int unknown_0_[4]; };
struct Struct_020e7db8 { unsigned short unknown_0_[5]; };
struct Struct_020e7db0 { unsigned char unknown_0_[4]; };
extern "C" void func_0205bf3c(KeyMenuCursor_0205bf3c*);
extern "C" int GetMenuCursorIndex_0205bb84(MenuCursor_0205bb84*);
extern "C" void ChangeMenuCursorPage_0205c4a8(MenuCursor_0205c4a8*, int);
extern "C" void SetMenuCursorIndex_0205bb04(KeyMenuCursor_0205bf3c*, int);
extern const Struct_020e7db8 data_020e7db8;
extern const Struct_020e7dc4 data_020e7dc4;
extern const Struct_020e7db0 data_020e7db0, data_020e7db4;

// USA: UpdateKeyMenuCursor_0205bf58
extern "C" ARM int UpdateKeyMenuCursor_0205bf58(KeyMenuCursor_0205bf3c* cursor, unsigned int ticks) {
    if (cursor->itemCount_0_ == 0) return 0;
    if (cursor->columnCount_8_ <= 0) return 0;
    if (cursor->rowCount_c_ <= 0) return 0;
    unsigned char repeatDelay = cursor->repeatDelay_39_;
    unsigned char repeatInterval = cursor->repeatInterval_3a_;
    Struct_020e7db8 directionKeys = data_020e7db8;
    int i = 0;
    while (directionKeys.unknown_0_[i] != 0xffff && cursor->heldKey_34_ == 0) {
        unsigned short key = directionKeys.unknown_0_[i];
        if (g_keyManager.TestKeysPressed(key)) {
            if (cursor->isVerticalKeyHeld_36_ | cursor->isHorizontalKeyHeld_37_) {
                func_0205bf3c(cursor);
                break;
            }
            Struct_020e7dc4 steps = data_020e7dc4;
            Struct_020e7db0 isVerticalKey = data_020e7db0;
            Struct_020e7db0 isHorizontalKey = data_020e7db4;
            cursor->heldKey_34_ = key;
            cursor->repeatTimer_38_ = repeatDelay;
            cursor->step_30_ = steps.unknown_0_[i];
            cursor->isVerticalKeyHeld_36_ = isVerticalKey.unknown_0_[i];
            cursor->isHorizontalKeyHeld_37_ = isHorizontalKey.unknown_0_[i];
            if (cursor->heldKey_34_ == 0x40 || cursor->heldKey_34_ == 0x80) {
                int previousRow = cursor->row_1c_;
                cursor->row_1c_ += cursor->step_30_;
                if (cursor->hasRowWrap_3d_) {
                    if (cursor->rowCount_c_ <= cursor->row_1c_) cursor->row_1c_ = 0;
                    else if (cursor->row_1c_ < 0) cursor->row_1c_ = cursor->rowCount_c_ - 1;
                    if (cursor->heldKey_34_ == 0x40) {
                        int itemCount = cursor->itemCount_0_;
                        if (itemCount <= GetMenuCursorIndex_0205bb84(cursor))
                            SetMenuCursorIndex_0205bb04(cursor, itemCount - 1);
                    } else if (cursor->heldKey_34_ == 0x80) {
                        if (cursor->itemCount_0_ <= GetMenuCursorIndex_0205bb84(cursor))
                            cursor->row_1c_ = 0;
                    }
                } else {
                    if (cursor->rowCount_c_ <= cursor->row_1c_) cursor->row_1c_ = previousRow;
                    else if (cursor->row_1c_ < 0) cursor->row_1c_ = previousRow;
                    if (GetMenuCursorIndex_0205bb84(cursor) >= cursor->itemCount_0_)
                        cursor->row_1c_ = previousRow;
                }
            } else if (cursor->heldKey_34_ == 0x20 || cursor->heldKey_34_ == 0x10) {
                int previousColumn = cursor->column_18_;
                cursor->column_18_ += cursor->step_30_;
                if (cursor->columnCount_8_ <= cursor->column_18_) {
                    if (cursor->hasColumnWrap_3c_) {
                        cursor->column_18_ = 0;
                        if (cursor->pageCount_4_ > 1) ChangeMenuCursorPage_0205c4a8(cursor, 1);
                    } else {
                        if (cursor->pageCount_4_ == 1) cursor->column_18_ = previousColumn;
                        else {
                            cursor->column_18_ = 0;
                            ChangeMenuCursorPage_0205c4a8(cursor, 1);
                        }
                    }
                } else if (cursor->column_18_ < 0) {
                    if (cursor->hasColumnWrap_3c_) {
                        cursor->column_18_ = cursor->columnCount_8_ - 1;
                        if (cursor->pageCount_4_ > 1) ChangeMenuCursorPage_0205c4a8(cursor, -1);
                    } else {
                        if (cursor->pageCount_4_ == 1) cursor->column_18_ = previousColumn;
                        else {
                            cursor->column_18_ = cursor->columnCount_8_ - 1;
                            ChangeMenuCursorPage_0205c4a8(cursor, -1);
                        }
                    }
                }
                if (GetMenuCursorIndex_0205bb84(cursor) >= cursor->itemCount_0_) {
                    if (cursor->pageCount_4_ == 1) cursor->column_18_ = previousColumn;
                    else {
                        cursor->column_18_ = 0;
                        ChangeMenuCursorPage_0205c4a8(cursor, 1);
                    }
                }
            }
            return 1;
        }
        ++i;
    }
    if (cursor->isVerticalKeyHeld_36_) {
        if (g_keyManager.TestKeysHeld(0xf0)) {
            unsigned char elapsedTicks = ticks;
            if (elapsedTicks < cursor->repeatTimer_38_) cursor->repeatTimer_38_ -= elapsedTicks;
            else {
                cursor->repeatTimer_38_ = repeatInterval;
                cursor->isVerticalKeyHeld_36_ = 1;
                cursor->isHorizontalKeyHeld_37_ = 0;
                cursor->row_1c_ += cursor->step_30_;
                if (cursor->rowCount_c_ <= cursor->row_1c_) cursor->row_1c_ = cursor->rowCount_c_ - 1;
                else if (cursor->row_1c_ < 0) cursor->row_1c_ = 0;
                int itemCount = cursor->itemCount_0_;
                if (itemCount <= GetMenuCursorIndex_0205bb84(cursor))
                    SetMenuCursorIndex_0205bb04(cursor, itemCount - 1);
                if (cursor->heldKey_34_ == 0x40 || cursor->heldKey_34_ == 0x20) {
                    int totalItems = cursor->itemCount_0_;
                    if (totalItems <= GetMenuCursorIndex_0205bb84(cursor))
                        SetMenuCursorIndex_0205bb04(cursor, totalItems - 1);
                } else if (cursor->heldKey_34_ == 0x80 || cursor->heldKey_34_ == 0x10) {
                    if (cursor->itemCount_0_ <= GetMenuCursorIndex_0205bb84(cursor))
                        cursor->row_1c_ = 0;
                }
            }
        }
        if (g_keyManager.TestKeysReleased(0xf0)) func_0205bf3c(cursor);
        return 1;
    } else if (cursor->isHorizontalKeyHeld_37_) {
        if (g_keyManager.TestKeysHeld(0xf0)) {
            unsigned char elapsedTicks = ticks;
            if (elapsedTicks < cursor->repeatTimer_38_) cursor->repeatTimer_38_ -= elapsedTicks;
            else {
                cursor->repeatTimer_38_ = repeatInterval;
                cursor->isVerticalKeyHeld_36_ = 0;
                cursor->isHorizontalKeyHeld_37_ = 1;
                cursor->column_18_ += cursor->step_30_;
                if (cursor->columnCount_8_ <= cursor->column_18_) {
                    cursor->column_18_ = cursor->columnCount_8_ - 1;
                    ChangeMenuCursorPage_0205c4a8(cursor, 1);
                } else if (cursor->column_18_ < 0) {
                    cursor->column_18_ = 0;
                    ChangeMenuCursorPage_0205c4a8(cursor, -1);
                }
                if (GetMenuCursorIndex_0205bb84(cursor) >= cursor->itemCount_0_) {
                    if (cursor->pageCount_4_ == 1) cursor->column_18_ = 0;
                    else {
                        cursor->column_18_ = 0;
                        ChangeMenuCursorPage_0205c4a8(cursor, 1);
                    }
                }
            }
        }
        if (g_keyManager.TestKeysReleased(0xf0)) func_0205bf3c(cursor);
        return 1;
    }
    return 0;
}
