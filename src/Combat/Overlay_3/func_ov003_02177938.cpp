#include <globaldefs.h>
#if defined(jpn)
enum {
    Enum_ov003_02177938_2048 = 0x77c
};
enum {
    Enum_ov003_02177938_2204 = 0x818
};
enum {
    Enum_ov003_02177938_2208 = 0x81c
};
enum {
    Enum_ov003_02177938_4108 = 0xf88
};
enum {
    Enum_ov003_02177938_4120 = 0xf94
};
enum {
    Enum_ov003_02177938_4163 = 0xfbf
};
#else
enum {
    Enum_ov003_02177938_2048 = 0x800
};
enum {
    Enum_ov003_02177938_2204 = 0x89c
};
enum {
    Enum_ov003_02177938_2208 = 0x8a0
};
enum {
    Enum_ov003_02177938_4108 = 0x100c
};
enum {
    Enum_ov003_02177938_4120 = 0x1018
};
enum {
    Enum_ov003_02177938_4163 = 0x1043
};
#endif
#include "GameState/GameState.h"

extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" int func_ov003_02179e44(void *arg0);
struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2 *menuLayout, int windowId);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void *menuLayout, int windowId, int palette);
extern "C" void func_02080b54(void *arg0, int arg1);
extern "C" void func_02080608(void *arg0, int arg1);
extern "C" unsigned char func_0207ca94(int arg0);
extern "C" int func_0207c638(void *arg0, unsigned int arg1);
extern "C" int func_0207c6b8(unsigned char *arg0, unsigned int arg1, int arg2);
extern "C" int ShowMenuLayoutText_02080b40(void *menuLayout, int textId);
extern "C" int func_02081010(void *arg0, int arg1);
struct MenuLayout_02080f8c;
extern "C" void SetMenuLayoutTextString_02080f8c(struct MenuLayout_02080f8c *menuLayout, int textId, int text);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0 *arg0, int arg1, int arg2);
extern "C" unsigned char *GetPartyMemberData_02053c6c(unsigned char *gameObject);
struct PartyMemberData_0207d300;
extern "C" int CountHeldItems_02083960(struct PartyMemberData_0207d300 *memberData);
extern "C" int func_020dcc98(int arg0);
struct Struct_020a0b8c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8 *menuLayout, int textId, int value);
struct ItemTable_0201099c_10;
struct ItemData_0201099c_9 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[0x1a - 8];
    unsigned short unknown_1a_;
};
extern "C" struct ItemData_0201099c_9 *FindItemData_020dedd0(struct ItemTable_0201099c_10 *itemTable, int itemId);
extern "C" void func_020805f4(void *arg0, int arg1);
extern "C" void func_020806c4(void *arg0, int arg1);
extern "C" void func_ov003_0217818c(void *arg0, struct ItemData_0201099c_9 *arg1, int arg2, int arg3);
extern "C" void SetMenuLayoutTextStringId_0208103c(void *menuLayout, int textId, int stringId);
extern "C" void func_0208108c(void *arg0, int arg1);
extern "C" void OpenMenuLayoutWindow_020813ec(void *menuLayout, int windowId);

struct Struct_ov003_02177938 {
    unsigned char unknown_0_[Enum_ov003_02177938_2204];
    struct MenuLayout_0207fdcc_2 *unknown_89c_;
    unsigned char unknown_8a0_[Enum_ov003_02177938_4108 - Enum_ov003_02177938_2208];
    short unknown_100c_;
    short unknown_100e_;
    short unknown_1010_;
    short unknown_1012_;
    short unknown_1014_;
    short unknown_1016_;
    unsigned char unknown_1018_[Enum_ov003_02177938_4163 - Enum_ov003_02177938_4120];
    signed char unknown_1043_;
};

// USA: func_ov003_02177938
extern "C" ARM void func_ov003_02177938(Struct_ov003_02177938 *arg0) {
    func_ov003_02179e44(arg0);
    GameState *var0       = GameState::GetInstance();
    unsigned char *var1     = (unsigned char *) GetParty_02010828(var0);
    struct MenuLayout_0207fdcc_2 *var2 = arg0->unknown_89c_;
    int var3              = 1;
    short var4               = 0x8b;
    short var5               = 0x93;
    short var6               = 0x9b;
    short var7               = 0x3c;
    int var8;
    short var9[8];

    ShowMenuLayoutWindow_02080c20(var2, 0x15);
    SetMenuLayoutWindowPalette_02080c68(var2, 0x15, 0);
    func_02080b54(var2, 0x15);
    func_02080608(var2, 0x15);
    var8 = 0;
    memset(var9, 0xff, sizeof(var9));

    if (arg0->unknown_100c_ == 0x77) {
        short var10   = arg0->unknown_1012_ - 0x11e;
        unsigned int var11 = func_0207ca94(var10);
        var7 += var10 + 1;
        int var12       = func_0207c638(var1 + 0x1d4, var11);
        arg0->unknown_1016_ = (var12 + 7) / 8;
        if (arg0->unknown_1016_ == 0) {
            arg0->unknown_1016_ = 1;
        }
        if (var12 > 8) {
            var12 = 8;
        }
        for (short var13 = 0; var13 < var12; var13++) {
            var9[var13] = func_0207c6b8(var1 + 0x1d4, var11, var13);
        }
        ShowMenuLayoutText_02080b40(var2, 0x8a);
        SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c *) var2, 0x8a,
                                   func_02081010(var2, arg0->unknown_1012_));
        func_02080cc0((struct Struct_02080cc0 *) var2, 0x8a, 0xf);
        var8 = 1;
        var3    = var12 != 0;
    } else {
        int var14 = 0;
        if (arg0->unknown_1043_ >= 0 && arg0->unknown_1043_ <= 3) {
            var14 = 1;
        }
        if (var14) {
            GameObject *var15 = var0->GetPartyMemberByIndex(arg0->unknown_1043_);
            if (var15 != NULL) {
                unsigned char *var16 = GetPartyMemberData_02053c6c((unsigned char *) var15);
                int var17              = CountHeldItems_02083960((struct PartyMemberData_0207d300 *) var16);
                for (int var18 = 0; var18 < var17; var18++) {
                    var9[var18] = ((short *) (var16 + 0x454))[var18];
                }
                ShowMenuLayoutText_02080b40(var2, 0x8a);
                SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c *) var2, 0x8a, *(int *) ((char *) var15 + 0x134));
                func_02080cc0((struct Struct_02080cc0 *) var2, 0x8a, func_020dcc98(arg0->unknown_1043_));
                var3 = var17 != 0;
            } else {
                func_02080b54(var2, 0x15);
            }
        } else {
            int var19 = func_020a0b8c((struct Struct_020a0b8c *) var1);
            if (var19 > 8) {
                var19 = 8;
            }
            for (short var20 = 0; var20 < var19; var20++) {
                var9[var20] = ((short *) (var1 + 0xc))[var20];
            }
            ShowMenuLayoutText_02080b40(var2, 0x8a);
            SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c *) var2, 0x8a,
                                       func_02081010(var2, 0x7a));
            func_02080cc0((struct Struct_02080cc0 *) var2, 0x8a, 0xf);
            var8 = 1;
            var3    = var19 != 0;
        }
    }

    if (var8 != 0) {
        SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8 *) var2, 0xa3, arg0->unknown_1014_ + 1);
        SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8 *) var2, 0xa4, arg0->unknown_1016_);
        ShowMenuLayoutText_02080b40(var2, 0xa3);
        ShowMenuLayoutText_02080b40(var2, 0xa4);
        ShowMenuLayoutText_02080b40(var2, 0xa5);
    }

    for (unsigned char var21 = 0; var21 < 8; var21++) {
        int var22 = 0;
        int var23 = 0;
        if (var9[var21] > 0) {
            struct ItemData_0201099c_9 *var24 = FindItemData_020dedd0((struct ItemTable_0201099c_10 *) ((unsigned char *) arg0 + Enum_ov003_02177938_2048 + 0x74), var9[var21]);
            if (var24 != NULL) {
                var23 = var24->unknown_1a_;
                var22 = var24->unknown_4_;
            }
#if !defined(jpn)
            func_020805f4(var2, var4);
#endif
            func_020806c4(var2, var4);
            SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c *) var2, var4, var22);
            SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8 *) var2, var5, var23);
            ShowMenuLayoutText_02080b40(var2, var4);
            ShowMenuLayoutText_02080b40(var2, var5);
            ShowMenuLayoutText_02080b40(var2, var6);
            func_ov003_0217818c(arg0, var24, var5, var6);
        }
        var4 = var4 + 1;
        var5 = var5 + 1;
        var6 = var6 + 1;
    }

    if (var3 == 0) {
        SetMenuLayoutTextStringId_0208103c(var2, 0x143, var7);
        ShowMenuLayoutText_02080b40(var2, 0x143);
        ShowMenuLayoutText_02080b40(var2, 0x144);
        func_0208108c(var2, 0x143);
        func_0208108c(var2, 0x144);
    }
    OpenMenuLayoutWindow_020813ec(var2, 0x15);
}
