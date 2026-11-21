#include <globaldefs.h>
#include "Input/Input.h"

struct MenuLayoutTextEntry_020800fc_3;
struct MenuLayoutWindowEntry_020800fc_4 {
    short* unknown_0_;
    unsigned int unknown_4_;
    short windowId_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    char unknown_14_[4];
};
struct MenuLayoutTextEntryList_0207f524 {
    MenuLayoutTextEntry_020800fc_3* pEntries_0_;
    short count_4_;
};
struct Struct_02012538 {
    MenuLayoutWindowEntry_020800fc_4* unknown_0_;
    short unknown_4_;
};
struct MenuLayout_020800fc_2 {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 textEntries_4_;
    Struct_02012538 windowEntries_c_;
#if defined(jpn)
    char unknown_14_[0x2f - 0x14];
#else
    char unknown1_14_[0x3b - 0x14];
#endif
    signed char unknown_3b_;
    signed char unknown_3c_;
};

struct MenuLayoutTextEntry_020800fc_3 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x18 - 6];
    struct MenuLayoutTextEntry_020800fc_3* pUpEntry_18_;
    struct MenuLayoutTextEntry_020800fc_3* pDownEntry_1c_;
    struct MenuLayoutTextEntry_020800fc_3* pLeftEntry_20_;
    struct MenuLayoutTextEntry_020800fc_3* pRightEntry_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char flags_2a_;
};

struct Struct_020800fc {
    unsigned int unknown_0_;
};

extern "C" void* func_020810b4(unsigned char* arg0, short arg1);
extern "C" int func_02080e40(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct MenuLayoutTextEntry_020800fc_3* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);
extern "C" struct MenuLayoutTextEntry_020800fc_3* func_0208036c(void* arg0, struct MenuLayoutTextEntry_020800fc_3* arg1, int arg2, struct Struct_020800fc* arg3, unsigned char arg4);

// USA: UpdateMenuLayoutCursor_020800fc
extern "C" ARM int UpdateMenuLayoutCursor_020800fc(struct MenuLayout_020800fc_2* menuLayout, short* cursorTextId, short currentTextId, int key, unsigned char keyEvent, unsigned char hasPages) {
    struct Struct_020800fc result;
    struct MenuLayoutTextEntry_020800fc_3* nextEntry;
    struct MenuLayoutTextEntry_020800fc_3* textEntry;
    struct MenuLayoutWindowEntry_020800fc_4* windowEntry;
    int touchX;
    int touchY;
    int touchedTextId;

    result.unknown_0_ = 0;
    *cursorTextId = currentTextId;
    if (g_touchInput.pressed_ != 0) {
        windowEntry = (struct MenuLayoutWindowEntry_020800fc_4*)func_020810b4((unsigned char*)menuLayout, currentTextId);
        if (windowEntry != NULL) {
            g_touchInput.GetTouchPoint(&touchX, &touchY);
            touchedTextId = func_02080e40(menuLayout, windowEntry->windowId_8_, (short)touchX, (short)touchY);
            if (touchedTextId >= 0) {
                *cursorTextId = (short)touchedTextId;
            }
            if (hasPages != 0) {
                short rightColumn = (short)(windowEntry->unknown_a_ + windowEntry->unknown_e_);
                short bottomRow = (short)(windowEntry->unknown_c_ + windowEntry->unknown_10_);
                if ((short)(bottomRow << 3) - menuLayout->unknown_3c_ <= touchY && touchY < (short)(bottomRow << 3)) {
                    short leftX = (short)(windowEntry->unknown_a_ << 3);
                    if (leftX <= touchX && touchX < leftX + menuLayout->unknown_3b_) {
                        result.unknown_0_ |= 0x20;
                    }
                    if ((short)(rightColumn << 3) - menuLayout->unknown_3b_ <= touchX && touchX < (short)(rightColumn << 3)) {
                        result.unknown_0_ |= 0x10;
                    }
                }
            }
        }
        return result.unknown_0_;
    }

    if (keyEvent == 0) {
        return result.unknown_0_;
    }
    textEntry = FindMenuLayoutTextEntry_0207f6ac(&menuLayout->textEntries_4_, *cursorTextId);
    if (textEntry == NULL) {
        return result.unknown_0_;
    }
    nextEntry = NULL;
    switch (key) {
    case 0x10:
        nextEntry = textEntry->pRightEntry_24_;
        result.unknown_0_ |= 8;
        break;
    case 0x20:
        nextEntry = textEntry->pLeftEntry_20_;
        result.unknown_0_ |= 4;
        break;
    case 0x40:
        nextEntry = textEntry->pUpEntry_18_;
        result.unknown_0_ |= 1;
        break;
    case 0x80:
        nextEntry = textEntry->pDownEntry_1c_;
        result.unknown_0_ |= 2;
        break;
    }
    if (nextEntry != NULL) {
        if (nextEntry->flags_2a_ & 2) {
            nextEntry = func_0208036c(menuLayout, textEntry, key, &result, hasPages);
        }
        if (nextEntry != NULL) {
            *cursorTextId = nextEntry->unknown_4_;
        }
    } else {
        if (keyEvent == 1) {
            textEntry = func_0208036c(menuLayout, textEntry, key, &result, hasPages);
        } else if (keyEvent == 2 && hasPages != 0) {
            switch (key) {
            case 0x10:
                result.unknown_0_ |= 0x10;
                break;
            case 0x20:
                result.unknown_0_ |= 0x20;
                break;
            }
        }
        *cursorTextId = textEntry->unknown_4_;
    }
    return result.unknown_0_;
}
