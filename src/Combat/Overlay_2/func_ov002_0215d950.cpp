#include <globaldefs.h>
#include "GameState/GameState.h"

struct MenuCursor_0205c508;
struct MessageWindow_020465c0;
struct ItemTable_0201099c_10;
struct ItemBag_0207cf30_3;

extern "C" void *GetMessageWindow_020421a0();
extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" int AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" void GetMenuCursorPageRange_0205c508(struct MenuCursor_0205c508 *cursor, int *outPageStartIndex, int *outPageEndIndex);
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0 *window, int index, int number);
extern "C" char *FindItemData_020dedd0(ItemTable_0201099c_10 *itemTable, int itemId);
extern "C" void CopyCapitalizedText_0206819c(const char *text, char *outText, int font);
extern "C" int GetBagItemCount_020a0b3c(ItemBag_0207cf30_3 *bag, int itemId);
extern "C" void func_ov002_0215b918(unsigned char *arg0, int arg1, int arg2, int arg3);
extern "C" void __clear(void *arg0, int arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern char data_ov002_0216d270[];
#if defined(jpn)
struct Struct_02046574_2;
struct Struct_0201099c_3;
extern "C" int GetStringLength_020d2ff0(const char *string);
extern "C" void SetMessageString_02046574(struct Struct_02046574_2 *window, int index, char *text);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char *window, int index, unsigned char width);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char *window, int index, unsigned char alignment);
extern "C" void func_020474a8(void *arg0, int arg1, const char *arg2, char *arg3);
extern "C" void func_02042428(char *arg0, int arg1);
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
#endif

// USA: func_ov002_0215d950
extern "C" ARM void func_ov002_0215d950(char *arg0, char *arg1, int arg2) {
#if defined(jpn)
    char var0[0x40];
    int var1, var2;
    char *var3;
    void *var4;
    int var5;
    int var6;
    int var7;
    if (arg1 == 0) return;
    int var8 = *(short *) (arg0 + 0x1a00 + 0xb0) & 7;
    if (arg2) AppendFrameTag_02041c08(arg1, var8, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var8);
    var3       = (char *) GetParty_02010828(GameState::GetInstance()) + 0xe04;
    var4       = GetMessageWindow_020421a0();
    char *var9 = arg0 + 0xe20;
    int var10   = *(int *) (var9 + 0x68);
    var7     = *(int *) (var9 + 0x58);
    GetMenuCursorPageRange_0205c508((struct MenuCursor_0205c508 *) (var9 + 0x54), &var1, &var2);
    var5 = 0;
    for (var6 = var1; var6 < var2; var6++) {
        ClearMessageParams_02046380(var4);
        SetMessageNumber_020465c0((MessageWindow_020465c0 *) var4, 0, var5);
        char *var11 = FindItemData_020dedd0((ItemTable_0201099c_10 *) (arg0 + 0x750), *(short *) (var3 + var6 * 2 + 0xc));
        if (var11 != 0) {
            int var12 = GetStringLength_020d2ff0(arg1);
            SetMessageString_02046574((struct Struct_02046574_2 *) var4, 0, *(char **) (var11 + 4));
            func_020474a8(var4, 0xa, (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x480),
                          arg1 + var12);
            memset(var0, 0, sizeof(var0));
            sprintf(var0, (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x481),
                    GetBagItemCount_020a0b3c((ItemBag_0207cf30_3 *) var3, *(short *) (var11 + 0x18)));
            AppendText_02042058(arg1, var0);
            if (var6 != var2 - 1) AppendText_02042058(arg1, *(char **) (arg0 + 0x1000 + 0xaa4));
        }
        var5++;
    }
    if (var7 > 1) {
        SetMessageNumber_020465c0((MessageWindow_020465c0 *) var4, 0, var10 + 1);
        SetMessageNumber_020465c0((MessageWindow_020465c0 *) var4, 1, var7);
        SetMessageNumberWidth_020465f0((unsigned char *) var4, 0, 2);
        SetMessageNumberWidth_020465f0((unsigned char *) var4, 1, 2);
        SetMessageNumberAlignment_020465d8((unsigned char *) var4, 0, 1);
        SetMessageNumberAlignment_020465d8((unsigned char *) var4, 1, 0);
        func_02042428(arg1, 8);
        AppendText_02042058(arg1, (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x47f));
    }
#else
    char var13[0x100];
    char var14[0x40];
    int var15, var16;
    char *var17;
    int var18;
    int var19;
    int var20;
    if (arg1 == 0) return;
    int var21 = *(short *) (arg0 + 0x1be8) & 7;
    if (arg2) AppendFrameTag_02041c08(arg1, var21, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var21);
    var17       = (char *) GetParty_02010828(GameState::GetInstance()) + 0xe04;
    void *var22 = GetMessageWindow_020421a0();
    char *var23 = arg0 + 0x2c8 + 0xc00;
    int var24   = *(int *) (var23 + 0x68);
    var20     = *(int *) (var23 + 0x58);
    GetMenuCursorPageRange_0205c508((struct MenuCursor_0205c508 *) (var23 + 0x54), &var15, &var16);
    var18 = 0;
    for (var19 = var15; var19 < var16; var19++) {
        ClearMessageParams_02046380(var22);
        SetMessageNumber_020465c0((MessageWindow_020465c0 *) var22, 0, var18);
        char *var25 = FindItemData_020dedd0((ItemTable_0201099c_10 *) (arg0 + 0x3ec + 0x400),
                                                                    *(short *) (var17 + var19 * 2 + 0xc));
        if (var25 != 0) {
            __clear(var13, sizeof(var13));
            CopyCapitalizedText_0206819c(*(const char **) (var25 + 4), var13, 0);
            AppendMenuEntry_02041b70(arg1, var18, var13);
            __clear(var14, sizeof(var14));
            sprintf(var14, data_ov002_0216d270,
                    GetBagItemCount_020a0b3c((ItemBag_0207cf30_3 *) var17, *(short *) (var25 + 0x18)));
            AppendText_02042058(arg1, var14);
            if (var19 != var16 - 1) AppendText_02042058(arg1, *(char **) (arg0 + 0x1000 + 0xbdc));
        }
        var18++;
    }
    if (var20 > 1) func_ov002_0215b918((unsigned char *) arg0, 10, var24, var20);
#endif
}
