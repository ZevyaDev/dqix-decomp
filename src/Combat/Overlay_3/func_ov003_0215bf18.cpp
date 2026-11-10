#include <globaldefs.h>

#include "GameState/GameState.h"

extern int gSoundEffectManager_02108760;

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);

struct YesNoWindow_020e263c_2;
extern "C" void UpdateYesNoWindow_020e263c(struct YesNoWindow_020e263c_2* yesNoWindow, int ticks);

struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);

struct Struct_020e29a8;
extern "C" void func_020e29a8(struct Struct_020e29a8* arg0, int arg1);

struct Struct_020e280c;
extern "C" void func_020e280c(struct Struct_020e280c* arg0, void* arg1);

extern "C" int func_020e2918(signed char* arg0);

extern "C" int func_020e2984(struct Struct_020e28dc* arg0);

struct YesNoWindow_020e25e8;
extern "C" void CloseYesNoWindow_020e25e8(struct YesNoWindow_020e25e8* yesNoWindow);

// USA: func_ov003_0215bf18
extern "C" ARM int func_ov003_0215bf18(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    if (*(void**)(var0 + 0x570) != 0 && func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x570)) != 0) {
        GameState* var1 = GameState::GetInstance();
        int var2 = var1->GetTickCount();
        UpdateYesNoWindow_020e263c((struct YesNoWindow_020e263c_2*)*(void**)(var0 + 0x570), var2);
    }
    unsigned char var3 = *(unsigned char*)(var0 + 0x581);
    if (var3 == 0) {
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 5, 0);
        func_020e29a8((struct Struct_020e29a8*)*(void**)(var0 + 0x570), (signed char)arg1);
        func_020e280c((struct Struct_020e280c*)*(void**)(var0 + 0x570), (void*)-1);
        *(unsigned char*)(var0 + 0x581) = *(unsigned char*)(var0 + 0x581) + 1;
    }
    if (var3 == 1) {
        *(unsigned char*)(var0 + 0x59f) |= 1;
        int var4 = func_020e2918((signed char*)*(void**)(var0 + 0x570));
        if (var4 >= 0) {
            *(unsigned char*)(var0 + 0x581) = 0;
            *(unsigned char*)(var0 + 0x59f) &= ~1;
            CloseYesNoWindow_020e25e8((struct YesNoWindow_020e25e8*)*(void**)(var0 + 0x570));
            return var4;
        }
        if (func_020e2984(*(struct Struct_020e28dc**)(var0 + 0x570))) {
            *(unsigned char*)(var0 + 0x581) = 0;
            *(unsigned char*)(var0 + 0x59f) &= ~1;
            CloseYesNoWindow_020e25e8((struct YesNoWindow_020e25e8*)*(void**)(var0 + 0x570));
            return -2;
        }
    }
    return -1;
}
