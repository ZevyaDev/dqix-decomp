#include <globaldefs.h>
#include "Combat/TryApplyElemFields.h"
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
enum { Enum_ov002_0215b9a4_3784 = 0xe20, Enum_ov002_0215b9a4_6808 = 0x1a98, Enum_ov002_0215b9a4_7116 = 0x1a94, Enum_ov002_0215b9a4_7096 = 0x1a80, Enum_ov002_0215b9a4_2400 = 0x800, Enum_ov002_0215b9a4_44 = 47 };
#define data_ov002_0216cfac data_ov002_0216d618
#define data_ov002_0216d3b0 data_ov002_0216db30
#define data_ov002_0216cae8 data_ov002_0216d0f0
#define data_ov002_0216caec data_ov002_0216d0f4
#else
enum { Enum_ov002_0215b9a4_3784 = 0xec8, Enum_ov002_0215b9a4_7120 = 0x1bd0, Enum_ov002_0215b9a4_7116 = 0x1bcc, Enum_ov002_0215b9a4_7096 = 0x1bb8, Enum_ov002_0215b9a4_2400 = 0x960, Enum_ov002_0215b9a4_44 = 44 };
#endif

class Struct_ov002_0215b9a4 {
public:
    unsigned char unknown_0_[Enum_ov002_0215b9a4_3784];
    Struct_ov023_021d9c7c windowManager_ec8_;
    unsigned char unknown_f84_[Enum_ov002_0215b9a4_7096 - Enum_ov002_0215b9a4_3784 - sizeof(Struct_ov023_021d9c7c)];
    int activeWindowId_1bb8_;
    unsigned char unknown_1bbc_[Enum_ov002_0215b9a4_7116 - Enum_ov002_0215b9a4_7096 - sizeof(int)];
    int isLinkedRedrawPending_1bcc_;
    void* pTextBuffer_1bd0_;
};

typedef void (Struct_ov002_0215b9a4::*Type_ov002_0215b9a4)(void *buf, int flag);

struct Struct_ov002_0216cae8 {
    int unknown_0_;
    int unknown_4_;
};

extern Type_ov002_0215b9a4 data_ov002_0216cfac[Enum_ov002_0215b9a4_44];
extern unsigned int data_ov002_0216d3b0[2];
extern Type_ov002_0215b9a4 gNullMemberFunctionPointer_020e6d5c;
extern Struct_ov002_0216cae8 data_ov002_0216cae8[];
extern Struct_ov002_0216cae8 data_ov002_0216caec[];

extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0 {
    unsigned char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_;
    unsigned char unknown_c6_[0xe0 - 0xc6];
};
extern "C" TextWindow_0205d0e0* FindTextWindow_0205d81c(TextWindowManager_0205d81c*, int);

// USA: RebuildMenuWindowText_ov002_0215b9a4
// JPN: func_ov002_0215cb1c
extern "C" ARM void RebuildMenuWindowText_ov002_0215b9a4(Struct_ov002_0215b9a4 *menu, unsigned char windowId, int hasCursorMark) {
    TextWindow_0205d0e0* window = FindTextWindow_0205d81c(((TextWindowManager_0205d81c*)(&menu->windowManager_ec8_)), windowId);
    if (window == 0) {
        return;
    }
    if (hasCursorMark) {
        window->unknown_c5_ |= 0x40;
    } else {
        window->unknown_c5_ &= ~0x40;
    }
    int hasFrame = 0;
    if (window->unknown_c5_ & 2) {
        hasFrame = 1;
    }
    memset(menu->pTextBuffer_1bd0_, 0, Enum_ov002_0215b9a4_2400);
    if (!(data_ov002_0216d3b0[1] & 1)) {
        Type_ov002_0215b9a4 nullBuilder      = gNullMemberFunctionPointer_020e6d5c;
        data_ov002_0216cfac[0]  = nullBuilder;
#if defined(jpn)
        data_ov002_0216cfac[24] = nullBuilder;
        data_ov002_0216cfac[31] = nullBuilder;
        data_ov002_0216cfac[34] = nullBuilder;
        data_ov002_0216cfac[35] = nullBuilder;
        data_ov002_0216cfac[39] = nullBuilder;
        data_ov002_0216cfac[43] = nullBuilder;
        data_ov002_0216cfac[44] = nullBuilder;
        data_ov002_0216cfac[45] = nullBuilder;
        data_ov002_0216cfac[46] = nullBuilder;
#else
        data_ov002_0216cfac[23] = nullBuilder;
        data_ov002_0216cfac[30] = nullBuilder;
        data_ov002_0216cfac[36] = nullBuilder;
        data_ov002_0216cfac[40] = nullBuilder;
        data_ov002_0216cfac[41] = nullBuilder;
        data_ov002_0216cfac[42] = nullBuilder;
        data_ov002_0216cfac[43] = nullBuilder;
#endif
        data_ov002_0216d3b0[1] |= 1;
    }
    if (data_ov002_0216cfac[windowId] == 0) {
        return;
    }
    (menu->*data_ov002_0216cfac[windowId])(menu->pTextBuffer_1bd0_, hasFrame);
    SetTextWindowText_0205d5d0(((TextWindowManager_0205d5d0*)(&menu->windowManager_ec8_)), windowId, ((int)(menu->pTextBuffer_1bd0_)),
#if defined(jpn)
                             1);
#else
                             0, 0);
#endif
    if (menu->isLinkedRedrawPending_1bcc_ == 0) {
        return;
    }
    for (int i = 0; data_ov002_0216cae8[i].unknown_0_ >= 0; i++) {
        if (menu->activeWindowId_1bb8_ == data_ov002_0216cae8[i].unknown_0_) {
            int linkedWindowId = data_ov002_0216caec[i].unknown_0_;
            memset(menu->pTextBuffer_1bd0_, 0, Enum_ov002_0215b9a4_2400);
            if (data_ov002_0216cfac[linkedWindowId] == 0) {
                break;
            }
            (menu->*data_ov002_0216cfac[linkedWindowId])(menu->pTextBuffer_1bd0_, hasFrame);
            SetTextWindowText_0205d5d0(((TextWindowManager_0205d5d0*)(&menu->windowManager_ec8_)), static_cast<unsigned char>(linkedWindowId), ((int)(menu->pTextBuffer_1bd0_)),
#if defined(jpn)
                                     1);
#else
                                     0, 0);
#endif
        }
    }
    menu->isLinkedRedrawPending_1bcc_ = 0;
}

#if defined(jpn)
#undef data_ov002_0216cfac
#undef data_ov002_0216d3b0
#undef data_ov002_0216cae8
#undef data_ov002_0216caec
#endif
