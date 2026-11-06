#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215b478_2400 = 0x800 };
enum { Enum_ov003_0215b478_2 = 4 };
#else
enum { Enum_ov003_0215b478_2400 = 0x960 };
enum { Enum_ov003_0215b478_2 = 2 };
#endif

#if defined(jpn)
extern "C" void func_02042428(void*, int);
extern "C" void OpenTextWindow_0205d304(void*, void*, int, int, int, int, int);
extern "C" void func_02042158(void*, int);
extern char data_ov003_0217e68e[], data_ov003_0217e696[];
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char arg1, unsigned char bgIndex);

extern "C" int GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(void* window);
extern "C" int GetStandardString_020e51cc(int stringId);
extern "C" int AppendText_02042058(char* buffer, const char* text);

struct MessageWindow_020465c0;
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);

#if !defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

// USA: func_ov003_0215b478
extern "C" ARM void func_ov003_0215b478(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = GetMessageWindow_020421a0();

    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + 0xf4), 0, 2);

    *(short*)(arg0 + 0x100 + 0x94) = 0xb;
    *(short*)(arg0 + 0x100 + 0x96) = 2;
    *(short*)(arg0 + 0x100 + 0x98) = 0x14;
    *(short*)(arg0 + 0x100 + 0x9a) = 0;
    *(short*)(arg0 + 0x100 + 0x9c) = 0x10;
    *(short*)(arg0 + 0x100 + 0x9e) = Enum_ov003_0215b478_2;
    *(short*)(arg0 + 0x100 + 0xa0) = 0xa;
    *(short*)(arg0 + 0x100 + 0xa2) = 0xe;
    arg0[0x1a5] = 0;
    arg0[0x1a9] = 1;

    memset(*(void**)(arg0 + 0x7c), 0, Enum_ov003_0215b478_2400);

#if defined(jpn)
    func_02042428(*(void**)(arg0 + 0x7c), 8);
    AppendText_02042058(*(char**)(arg0 + 0x7c), data_ov003_0217e68e);
    func_02042158(*(void**)(arg0 + 0x7c), 2);
    AppendText_02042058(*(char**)(arg0 + 0x7c), data_ov003_0217e696);
#else
    int var2 = GetStandardString_020e51cc(0x3f1);
    AppendText_02042058((char*)*(void**)(arg0 + 0x7c), (const char*)var2);
#endif

    ClearMessageParams_02046380((void*)var1);

    void* var3 = GetParty_02010828(var0);
    int var4 = *(int*)((char*)var3 + 0xf6c);
    SetMessageNumber_020465c0((struct MessageWindow_020465c0*)var1, 0, var4);
    func_020465f0((unsigned char*)var1, 0, 7);
    func_020465d8((unsigned char*)var1, 0, 1);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xf4, *(void**)(arg0 + 0x7c), 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xf4, *(void**)(arg0 + 0x7c), 0, 0, 0, 1, 0, 0);
#endif
}
