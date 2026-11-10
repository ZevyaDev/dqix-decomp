#include "Resource/ActionDataTables.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_0201099c_3;
struct Struct_02046574_2;
struct MessageWindow_020465c0;
struct Struct_020e4e38;

struct Struct_ov002_02161234 {
    char *unknown_0_;
    char *unknown_4_;
    int unknown_8_;
};

struct Struct_ov002_02161234_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" char *FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" char *GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" void SetMessageString_02046574(struct Struct_02046574_2 *window, int index, char *text);
extern "C" void *InitNoun_020e46c4(void *noun);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" void InitPartyMemberNoun_020e4bf4(void *noun, int partyMemberIndex);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0 *window, int index, int number);
extern "C" void *FindActionData_02079e2c(char *actionTables, int actionId);
extern "C" void func_020e4e38(void *arg0, struct Struct_020e4e38 *arg1);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState *gameState);
extern "C" void InitNounTable_020e526c(void *nounTable);
extern "C" void func_020e56fc(void *arg0, int arg1, int arg2);
extern "C" void *FindNounInTable_020e5294(void *nounTable, int nounId);
extern "C" void func_020e4f18(void *arg0, void *arg1, int arg2);
extern "C" void func_02046608(void *arg0, int arg1, const char *arg2, char *arg3, int arg4, int arg5, int arg6);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int GetStringLength_020d2ff0(const char *string);

extern "C" char data_ov002_0216d2bc[];
extern "C" char data_ov002_0216d2d2[];
extern "C" char data_ov002_0216d2e4[];
extern "C" char data_ov002_0216d2ea[];

static inline int inline_ov002_02161234(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov002_02161234
extern "C" ARM void func_ov002_02161234(char *arg0, char *arg1) {
    char var0[0x80];
    char var1[0x80];
    char var2[0x80];
    char var3[0x80];
    Struct_ov002_02161234_2 var4;
    Struct_ov002_02161234_2 var5;
    Struct_ov002_02161234 var6;
    Struct_ov002_02161234 var7;
    Struct_ov002_02161234_2 var8;
    Struct_ov002_02161234_2 var9;
    unsigned int var10;
    if (arg1 == 0) {
        return;
    }
    FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x270e);
    GameState *var11 = GameState::GetInstance();
    char *var12    = GetMessageWindow_020421a0();
    GetGameResources();
    ClearMessageParams_02046380(var12);
    char *var13;
    short var14;
    short var15 = *(short *) (arg0 + 0x1c28);
    int var16;
    GameObject *var17 = var11->GetUnknownGameObject();
    if (var17 != 0) {
        SetMessageString_02046574((struct Struct_02046574_2 *) var12, 4, *(char **) ((char *) var17 + 0x134));
    }
    var14 = *(signed char *) (arg0 + 0x1c20);
    var16 = *(signed char *) (arg0 + 0x1c21);
    InitNoun_020e46c4(&var6);
    InitNoun_020e46c4(&var7);
    __clear(var0, 0x80);
    __clear(var1, 0x80);
    __clear(var2, 0x80);
    __clear(var3, 0x80);
    var6.unknown_0_ = var0;
    var6.unknown_4_ = var1;
    var7.unknown_0_ = var2;
    var7.unknown_4_ = var3;
    InitPartyMemberNoun_020e4bf4(&var4, var14);
    InitPartyMemberNoun_020e4bf4(&var5, var16);
    *(void **) (var12 + 0)    = &var4;
    *(void **) (var12 + 0x10) = &var5;
    if (inline_ov002_02161234(var16)) {
        int var18 = *(signed char *) (arg0 + 0x1c20);
        if (var18 == 4) {
            var18 = 9;
        }
        SetMessageNumber_020465c0((MessageWindow_020465c0 *) var12, 9, (var18 + 1) * 10 + var16);
    }
    if (*(short *) (arg0 + 0x1c26) != -1) {
        if (inline_ov002_02161234(var14)) {
            var13          = (char *) GetGameResources() + 0x435c + var14 * 0x30;
            GameObject *var19 = var11->GetPartyMemberByIndex(var14);
            if (var19 != 0) {
                var13 = *(char **) ((char *) var19 + 0x134);
            }
            SetMessageString_02046574((struct Struct_02046574_2 *) var12, 0, var13);
        }
        char **var20 = (char **) FindActionData_02079e2c((char *) GetActionTables_020797dc(), *(short *) (arg0 + 0x1c26));
        if (*var20 != 0) {
            var13 = *var20;
        }
        SetMessageString_02046574((struct Struct_02046574_2 *) var12, 1, var13);
        func_020e4e38(&var8, (struct Struct_020e4e38 *) var20);
        *(void **) (var12 + 8) = &var8;
        if (inline_ov002_02161234(var16)) {
            SetMessageString_02046574((struct Struct_02046574_2 *) var12, 2, arg0 + 0x1ab0 + var16 * 0x3c);
        }
        for (int var21 = 0; var21 < 2; var21++) {
            SetMessageNumber_020465c0((MessageWindow_020465c0 *) var12, var21, *(int *) (arg0 + var21 * 4 + 0x2490));
        }
    } else {
        if (inline_ov002_02161234(var14)) {
            var13          = (char *) GetGameResources() + 0x435c + var14 * 0x30;
            GameObject *var22 = var11->GetPartyMemberByIndex(var14);
            if (var22 != 0) {
                var13 = *(char **) ((char *) var22 + 0x134);
            }
            SetMessageString_02046574((struct Struct_02046574_2 *) var12, 0, var13);
            SetMessageNumber_020465c0((MessageWindow_020465c0 *) var12, 0, 1);
        } else if (*(signed char *) (arg0 + 0x1c20) == 4) {
            SetMessageNumber_020465c0((MessageWindow_020465c0 *) var12, 0, 0);
            InitPartyMemberNoun_020e4bf4(&var4, GetOwnPartyLeaderObjectIndex_020100b0(var11));
        }
        BackgroundLoader::AddLockGlobal();
        void *var23 = ExtractFileFromGP2(data_ov002_0216d2bc, data_ov002_0216d2d2, &var10);
        InitNounTable_020e526c(&var9);
        func_020e56fc(&var9, (int) var23, var10);
        void *var24 = FindNounInTable_020e5294(&var9, *(short *) (arg0 + 0x1c22));
        void *var25 = FindNounInTable_020e5294(&var9, *(short *) (arg0 + 0x1c24));
        if (var24 != 0) {
            func_020e4f18(var24, &var6, 3);
            *(void **) (var12 + 0x18) = &var6;
        }
        if (var25 != 0) {
            func_020e4f18(var25, &var7, 3);
            *(void **) (var12 + 0x1c) = &var7;
        }
        if (var16 == 4) {
            InitPartyMemberNoun_020e4bf4(&var5, GetOwnPartyLeaderObjectIndex_020100b0(var11));
        }
        BackgroundLoader::RemoveLockGlobal();
    }
    func_02046608(var12, 0xc, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), *(short *) (arg0 + 0x1c28)),
                  arg1, 0xe3, 0, 1);
    AppendText_02042058(arg1, *(char **) (arg0 + 0x1bdc));
    int var26   = GetStringLength_020d2ff0(arg1);
    char *var27 = FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), *(short *) (arg0 + 0x1c2a));
    if (var27 != 0) {
        func_02046608(var12, 0xc, var27, arg1 + var26, 0xe3, 0, 1);
    }
    *(short *) (arg0 + 0x1c18) = GetStringLength_020d2ff0(arg1);
    int var28                   = 1;
    if (*(int *) (arg0 + 0x1bbc) == 0x11 && var15 == 0x232b) {
        var28 = 0;
    }
    if (*(int *) (arg0 + 0x1bbc) == 0x17) {
        AppendText_02042058(arg1, data_ov002_0216d2e4);
        return;
    }
    if (var28 && (var15 == 0x2367 || var15 == 0x2365 || var15 == 0x236f || var15 == 0x2372 || var15 == 0x238d || var15 == 0x125c ||
                 var15 == 0x125d || var15 == 0x125e || var15 == 0x232b || var15 == 0x797c || var15 == 0x2371))
    {
        if (*(short *) (arg0 + 0x1c26) == 0xd5 && var15 == 0x232b) {
            AppendText_02042058(arg1, data_ov002_0216d2ea);
        } else {
            AppendText_02042058(arg1, data_ov002_0216d2e4);
        }
    } else {
        AppendText_02042058(arg1, data_ov002_0216d2ea);
    }
}
