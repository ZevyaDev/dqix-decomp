#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
struct Party_02048150;
struct ItemTable_0201099c_10;
struct Struct_0201099c_3;
struct Struct_02046574_2;
struct ItemBag_0207cf30_3;
struct Struct_020a0b8c;
struct MessageWindow_020465c0;
extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" char *GetMessageWindow_020421a0();
extern "C" unsigned char *GetPartyMemberData_02053c6c(unsigned char *gameObject);
extern "C" int IsInParty_02086ef0(Party_02048150 *party, int objectIndex);
extern "C" int func_ov002_02157108(void *arg0, int arg1);
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0 *window, int index, int number);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char *window, int index, unsigned char width);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char *window, int index, unsigned char alignment);
extern "C" char *FindItemData_020dedd0(struct ItemTable_0201099c_10 *itemTable, int itemId);
extern "C" char *FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int GetStringLength_020d2ff0(const char *string);
extern "C" void SetMessageString_02046574(struct Struct_02046574_2 *window, int index, const char *text);
extern "C" void func_020474a8(void *arg0, int arg1, const char *arg2, char *arg3);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int func_02042428(char *arg0, int arg1);
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
extern "C" int GetBagItemCount_020a0b3c(ItemBag_0207cf30_3 *bag, int itemId);
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" char data_ov002_0216d939[];

struct Struct_ov002_0215ef64 {
    char unknown_0_[0x58];
    int unknown_58_;
    char unknown_5c_[0xc];
    int unknown_68_;
};

// JPN: func_ov002_0215ef64
extern "C" ARM void func_ov002_0215ef64(char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;
    int var3 = *(short *) (arg0 + 0x1a00 + 0xbc) & 7;
    if (*(int *) (arg0 + 0x1000 + 0xa80) == 0xe) {
        if (arg2) {
            AppendFrameTag_02041c08(arg1, var3, 8, 5, 5, 5);
        }
        AppendCursorTag_02041ea4(arg1, var3);
    }
    GameState *var4 = GameState::GetInstance();
    char *var5       = GetMessageWindow_020421a0();
    char *var6   = (char *) GetParty_02010828(var4);
    int var7     = *(signed char *) (arg0 + 0x1a00 + 0xe9);
    int var12;
    int var11;
    int var8        = 0;
    unsigned char *var9;
    struct Struct_ov002_0215ef64 *var10 = (struct Struct_ov002_0215ef64 *) (arg0 + 0x220 + 0xc00) + 1;
    var10--;
    var11 = var10->unknown_68_;
    var12 = var10->unknown_58_;
    if (var7 >= 0 && var7 <= 3) {
        var8 = 1;
    }
    if (var8) {
        GameObject *var13 = GetPartyMemberBaseByIndex_0200ff1c(var4, var7);
        if (var13 == NULL) return;
        var9 = GetPartyMemberData_02053c6c((unsigned char *) var13);
        if (!IsInParty_02086ef0((Party_02048150 *) var6, *(signed char *) (arg0 + 0x1a00 + 0xe9))) return;
        int var14     = func_ov002_02157108(arg0, *(signed char *) (arg0 + 0x1a00 + 0xe9));
        int var15 = 0;
        if (var14 < 8) var15 = 1;
        for (int var16 = 0; var16 < var14 + var15; var16++) {
            ClearMessageParams_02046380(var5);
            SetMessageNumber_020465c0((struct MessageWindow_020465c0 *) var5, 0, var16);
            char *var17 = FindItemData_020dedd0((struct ItemTable_0201099c_10 *) (arg0 + 0x750), *(short *) (var9 + var16 * 2 + 0x454));
            if (var17 != NULL) {
                int var22 = GetStringLength_020d2ff0(arg1);
                SetMessageString_02046574((struct Struct_02046574_2 *) var5, 0, *(const char **) (var17 + 4));
                func_020474a8(var5, 0xa, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x480), arg1 + var22);
                if (var16 != var14 - 1) {
                    AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xaa4));
                } else if (var15 == 1) {
                    AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xaa4));
                }
            } else if (var16 == var14) {
                int var23 = GetStringLength_020d2ff0(arg1);
                SetMessageString_02046574((struct Struct_02046574_2 *) var5, 0, data_ov002_0216d939);
                func_020474a8(var5, 0xa, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x480), arg1 + var23);
            }
        }
    } else {
        int var18;
        int var19 = var11 * 8;
        var18   = var19 + 8;
        int var20 = func_ov002_02157108(arg0, var7);
        if (var18 > var20) var18 = var20;
        var12 = (func_020a0b8c((struct Struct_020a0b8c *) var6) + 7) / 8;
        for (; var19 < var18; var19++) {
            ClearMessageParams_02046380(var5);
            SetMessageNumber_020465c0((struct MessageWindow_020465c0 *) var5, 0, var19);
            char *var21 = FindItemData_020dedd0((struct ItemTable_0201099c_10 *) (arg0 + 0x750), *(short *) (var6 + var19 * 2 + 0xc));
            if (var21 == NULL) continue;
            int var24 = GetStringLength_020d2ff0(arg1);
            SetMessageString_02046574((struct Struct_02046574_2 *) var5, 0, *(const char **) (var21 + 4));
            func_020474a8(var5, 0xa, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x480), arg1 + var24);
            char var2[0x40];
            memset(var2, 0, 0x40);
            sprintf(var2, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x481),
                    GetBagItemCount_020a0b3c((ItemBag_0207cf30_3 *) var6, *(short *) (var21 + 0x18)));
            AppendText_02042058(arg1, var2);
            if (var19 != var18 - 1) {
                AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xaa4));
            }
        }
    }
    if (var12 > 1) {
        SetMessageNumber_020465c0((struct MessageWindow_020465c0 *) var5, 0, var11 + 1);
        SetMessageNumberWidth_020465f0((unsigned char *) var5, 0, 2);
        SetMessageNumberAlignment_020465d8((unsigned char *) var5, 0, 1);
        SetMessageNumber_020465c0((struct MessageWindow_020465c0 *) var5, 1, var12);
        SetMessageNumberWidth_020465f0((unsigned char *) var5, 1, 2);
        SetMessageNumberAlignment_020465d8((unsigned char *) var5, 1, 0);
        func_02042428(arg1, 8);
        AppendText_02042058(arg1, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x47f));
    }
}
#endif
