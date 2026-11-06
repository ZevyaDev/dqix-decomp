#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_020708c8;

extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);
extern "C" void* func_020704fc(void);
extern "C" void func_020708c8(struct Struct_020708c8* arg0, unsigned int arg1);
struct GameResources;
void SetBrightness(GameResources*, int, int);

#if defined(jpn)
enum { Enum_ov001_02154da0_6590 = 0x17ee };
#else
enum { Enum_ov001_02154da0_6590 = 0x19be };
#endif

// USA: func_ov001_02154da0
extern "C" ARM void func_ov001_02154da0() {
    char* var0 = (char*)GetMessageWindow_020421a0();
    ResetMessageWindow_02043204(var0);
    CloseMessageWindow_02043124(var0);
    *(unsigned char*)(var0 + Enum_ov001_02154da0_6590) = 0;
    func_020708c8((struct Struct_020708c8*)func_020704fc(), 0);
    SetBrightness(GetGameResources(), -16, 0);
}
