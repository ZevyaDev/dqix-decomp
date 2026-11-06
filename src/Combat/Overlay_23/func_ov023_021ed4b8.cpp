#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char arg1, unsigned char bgIndex);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);

extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void InitPartyMemberNoun_020e4bf4(void* noun, int partyMemberIndex);

struct Struct_02046574_2;
extern "C" void SetMessageString_02046574(struct Struct_02046574_2* window, int index, char* text);

extern "C" void ClearMessageParams_02046380(void* window);
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
extern "C" void AppendText_02042058(char*, const char*);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

struct Struct_ov023_021ed4b8 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };

// USA: func_ov023_021ed4b8
extern "C" ARM void func_ov023_021ed4b8(char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021ed4b8_580=0x15c, Enum_ov023_021ed4b8_2400=0x800};
#else
 enum {Enum_ov023_021ed4b8_580=0x244, Enum_ov023_021ed4b8_2400=0x960};
#endif
    unsigned char var0 = ((struct Struct_ov023_021ed4b8*)(arg0 + 0xc0))->unknown_0_0_;
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + 0xc4), var0, 3);

    *(unsigned short*)(arg0 + 0x164) = 0x1e;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x166) = 6;
#else
    *(unsigned short*)(arg0 + 0x166) = 0x7;
#endif

    *(unsigned short*)(arg0 + 0x168) = 0x1;
    *(unsigned short*)(arg0 + 0x16a) = 0x9;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x16c) = 0xa;
#else
    *(unsigned short*)(arg0 + 0x16c) = 0x7;
#endif

    *(unsigned short*)(arg0 + 0x16e) = 0xa;
    *(unsigned short*)(arg0 + 0x170) = 0xc;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x172) = 0x14;
#else
    *(unsigned short*)(arg0 + 0x172) = 0xc;
#endif

    *(unsigned char*)(arg0 + 0x17b) = 0xc;
    *(unsigned char*)(arg0 + 0x175) = 2;
    unsigned char var1 = 0;
    *(unsigned char*)(arg0 + 0x179) = var1;
    *(unsigned char*)(arg0 + 0x17a) = var1;

    unsigned char var2 = *(unsigned char*)(arg0 + 0x28);
    char* var3 = *(char**)(arg0 + 0x20);
    char* var4 = var3 + var2 * Enum_ov023_021ed4b8_580;

    memset(*(void**)(arg0 + 0x1c), var1, Enum_ov023_021ed4b8_2400);

#if defined(jpn)
    int var5 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 4), 0x64);
    AppendText_02042058(*(char**)(arg0 + 0x1c), (char*)var5);
    GameState* var6 = GameState::GetInstance();
#else
    GameState* var6 = GameState::GetInstance();
#endif

    int var7 = GetProtagonistObjectIndex_020100a8(var6);
    GameObject* var8 = GetPartyMemberBaseByIndex_0200ff1c(var6, var7);
    if (var8 == NULL) return;

    int var9 = GetMessageWindow_020421a0();
    ClearMessageParams_02046380((void*)var9);

#if defined(jpn)
    SetMessageString_02046574((struct Struct_02046574_2*)var9, 0, *(char**)((char*)var8 + 0x134));
    SetMessageString_02046574((struct Struct_02046574_2*)var9, 1, var4 + 0xc);

#else
    char var10[0xc];
    int var11 = var8->obj3D_.unknown_4_;
    InitPartyMemberNoun_020e4bf4(var10, var11);

    *(void**)((char*)var9 + 0x0) = var10;
    SetMessageString_02046574((struct Struct_02046574_2*)var9, 1, var4 + 0xc);

    int var12 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0x4), 0x64);
    func_02046608(var9, 1, (void*)(long)var12, *(void**)(arg0 + 0x1c), 0xe3, 0, 1);

#endif
#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0, 1);
#endif

}
