#include "GameState/GameState.h"
#include <globaldefs.h>

struct StringList_02072a68_2;
struct Struct_02046574_2;
struct MessageWindow_020465c0;
struct Struct_020466c8;
struct Struct_0201099c_3;
extern "C" void *FindStringInList_02072a68(struct StringList_02072a68_2 *stringList, int stringId);
extern "C" GameObject *GetPartyMemberBaseByIndex_0200ff1c(GameState *gameState, int index);
extern "C" void *GetMessageWindow_020421a0();
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" void SetMessageString_02046574(struct Struct_02046574_2 *window, int index, char *text);
extern "C" void InitPartyMemberNoun_020e4bf4(void *noun, int partyMemberIndex);
extern "C" void *FindNounInTable_020e5294(void *nounTable, int nounId);
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0 *window, int index, int number);
extern "C" void func_020466c8(struct Struct_020466c8 *arg0, int arg1);
extern "C" int func_ov002_021574d4(void *arg0, int arg1);
extern "C" void *func_0209a594(void *arg0, int arg1);
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" void ExpandInflectionTags_020e4864(void *text, void *buffer, int isIndefinite, int arg3, int arg4, int grammaticalCase);
#if defined(jpn)
extern "C" void StartMessage_0204500c(void *window, char *text, int arg2);
#else
extern "C" void StartMessage_0204500c(void *window, char *text, int arg2, int arg3);
#endif
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" void *__clear(void *arg0, int arg1);

struct Struct_ov002_021685bc {
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
    short unknown_2_;
    unsigned int unknown_4_0_ : 5;
    unsigned int unknown_4_5_ : 7;
    unsigned int unknown_5_4_ : 8;
    unsigned int unknown_6_4_ : 5;
    unsigned int unknown_7_1_ : 7;
};

// USA: func_ov002_021685bc
#if defined(jpn)
extern "C" ARM void func_ov002_021685bc(unsigned char *arg0) {
    while (*(arg0 + 0x2000 + 0x288) < *(arg0 + 0x2000 + 0x289)) {
        char *var1 = (char *) FindStringInList_02072a68(*(struct StringList_02072a68_2 **) (arg0 + 0x2000 + 0x280),
                                            (*(short **) (arg0 + 0x2000 + 0x284))[*(arg0 + 0x2000 + 0x288)]);
        if (var1 != NULL) {
            GameState *var2  = GameState::GetInstance();
            int var3         = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1a00 + 0xd0));
            GameObject *var4 = GetPartyMemberBaseByIndex_0200ff1c(var2, var3);
            if (var4 != NULL) {
                unsigned char *var7 = (unsigned char *) GetMessageWindow_020421a0();
                memset(*(char **) (arg0 + 0x1000 + 0xa98), 0, 0x800);
                AppendText_02042058(*(char **) (arg0 + 0x1000 + 0xa98), var1);
                AppendText_02042058(*(char **) (arg0 + 0x1000 + 0xa98),
                              (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 7));
                ClearMessageParams_02046380(var7);
                SetMessageString_02046574((struct Struct_02046574_2 *) var7, 0, *(char **) ((char *) var4 + 0x134));
                func_020466c8((struct Struct_020466c8 *) var7, (*(int **) arg0)[4]);
                StartMessage_0204500c(var7, *(char **) (arg0 + 0x1000 + 0xa98), 0);
                *(var7 + 0x1000 + 0x7e2) = 0;
                *(int *) (var7 + 0x868)  = 1;
                (*(arg0 + 0x2000 + 0x288))++;
                (*(int *) (arg0 + 0x1000 + 0xa88))++;
                return;
            }
        }
        (*(arg0 + 0x2000 + 0x288))++;
    }
    (*(int *) (arg0 + 0x1000 + 0xa88))++;
}
#else
extern "C" ARM void func_ov002_021685bc(unsigned char *arg0) {
    while (*(arg0 + 0x2000 + 0x454) < *(arg0 + 0x2000 + 0x455)) {
        struct Struct_ov002_021685bc *var0 = (struct Struct_ov002_021685bc *) func_0209a594(
            arg0 + 0x3c + 0x2400, (*(unsigned short **) (arg0 + 0x2000 + 0x450))[*(arg0 + 0x2000 + 0x454)]);
        char *var1 = NULL;
        if (var0 != NULL) {
            var1 = (char *) FindStringInList_02072a68(*(struct StringList_02072a68_2 **) (arg0 + 0x2000 + 0x448), var0->unknown_6_4_);
        }
        if (var1 != NULL) {
            GameState *var2 = GameState::GetInstance();
            int var3        = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1c00 + 8));
            GameObject *var4 = GetPartyMemberBaseByIndex_0200ff1c(var2, var3);
            if (var4 != NULL) {
                char var5[0xc];
                char var6[0x80];
                unsigned char *var7 = (unsigned char *) GetMessageWindow_020421a0();
                memset(*(char **) (arg0 + 0x1000 + 0xbd0), 0, 0x960);
                AppendText_02042058(*(char **) (arg0 + 0x1000 + 0xbd0), var1);
                AppendText_02042058(*(char **) (arg0 + 0x1000 + 0xbd0),
                                     (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 7));
                ClearMessageParams_02046380(var7);
                SetMessageString_02046574((struct Struct_02046574_2 *) var7, 0, *(char **) ((char *) var4 + 0x134));
                InitPartyMemberNoun_020e4bf4(var5, var3);
                *(void **) var7 = var5;
                if (var0->unknown_6_4_ == 1) {
                    void **var8            = (void **) FindNounInTable_020e5294(*(void **) (arg0 + 0x2000 + 0x44c), var0->unknown_2_);
                    *(void ***) (var7 + 8) = var8;
                    __clear(var6, 0x80);
                    ExpandInflectionTags_020e4864(*var8, var6, 1, 0, 0, 0);
                    SetMessageString_02046574((struct Struct_02046574_2 *) var7, 1, var6);
                } else {
                    SetMessageString_02046574(
                        (struct Struct_02046574_2 *) var7, 1,
                        (char *) FindStringInList_02072a68(*(struct StringList_02072a68_2 **) (arg0 + 0x2000 + 0x448), (short) (var0->unknown_4_0_ + 0x64)));
                }
                int var9 = 2;
                if (var0->unknown_6_4_ == 4 || var0->unknown_6_4_ == 0x10) var9 = 1;
                SetMessageString_02046574(
                    (struct Struct_02046574_2 *) var7, var9,
                    (char *) FindStringInList_02072a68(*(struct StringList_02072a68_2 **) (arg0 + 0x2000 + 0x448), (short) (var0->unknown_1_3_ + 0xc8)));
                SetMessageNumber_020465c0((struct MessageWindow_020465c0 *) var7, 0, var0->unknown_5_4_);
                func_020466c8((struct Struct_020466c8 *) var7, (*(int **) arg0)[4]);
                StartMessage_0204500c(var7, *(char **) (arg0 + 0x1000 + 0xbd0), 0, 0xe3);
                *(var7 + 0x1000 + 0x9b2) = 0;
                *(int *) (var7 + 0x998)  = 1;
                (*(arg0 + 0x2000 + 0x454))++;
                (*(int *) (arg0 + 0x1000 + 0xbc0))++;
                return;
            }
        }
        (*(arg0 + 0x2000 + 0x454))++;
    }
    (*(int *) (arg0 + 0x1000 + 0xbc0))++;
}
#endif
