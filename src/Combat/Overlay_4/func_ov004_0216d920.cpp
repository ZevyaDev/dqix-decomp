#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern "C" unsigned char GetGameMode_0200fb9c(char* gameState);
extern "C" void SetGameMode_0200fb94(char* gameState, unsigned char mode);
extern "C" void SetTitleState_02012010(void* arg0, int state);
extern "C" unsigned char func_02012034(void* arg0);
extern "C" void SetTitleIdleTimeoutEnabled_02012028(void* gameState, unsigned char isEnabled);
extern "C" void func_ov017_0218d258(void* arg0);
extern "C" void func_0209ca70(void* arg0, int arg1);

struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);
struct Struct_02109bf4_3;
extern "C" void ResetMusic_0209c20c(struct Struct_02109bf4_3* manager);
struct Struct_0205e8ec;
extern "C" void func_0205e8ec(struct Struct_0205e8ec* arg0);
struct Struct_02108760_2;
extern "C" void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1);
struct Struct_02011544;
extern "C" void func_02011544(struct Struct_02011544* arg0);

extern int gMusicManager_02109bf4;
extern int gSoundEffectManager_02108760;
extern unsigned char data_ov004_02171034[];

#if defined(jpn)
enum { Enum_ov004_0216d920_1 = 6, Enum_ov004_0216d920_2 = 0, Enum_ov004_0216d920_3 = 5, Enum_ov004_0216d920_4 = 7, Enum_ov004_0216d920_5 = 3 };
#else
enum { Enum_ov004_0216d920_1 = 1, Enum_ov004_0216d920_2 = 2, Enum_ov004_0216d920_3 = 3, Enum_ov004_0216d920_4 = 4, Enum_ov004_0216d920_5 = 5 };
#endif

// USA: func_ov004_0216d920
extern "C" ARM int func_ov004_0216d920() {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    if (GetGameMode_0200fb9c((char*)var0) != 2) {
        StopMusic_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0);
        ResetMusic_0209c20c((struct Struct_02109bf4_3*)&gMusicManager_02109bf4);
        func_0205e8ec((struct Struct_0205e8ec*)&gSoundEffectManager_02108760);
    }
    func_0209ca70((void*)&gMusicManager_02109bf4, data_ov004_02171034[Enum_ov004_0216d920_4]);
    func_0205e9f4((struct Struct_02108760_2*)&gSoundEffectManager_02108760, data_ov004_02171034[Enum_ov004_0216d920_1]);
    ClearFlags00(var1, -1);
    ClearFlags04(var1, -1);
    ClearFlags08(var1, -1);
    func_ov017_0218d258(var1);
    SetTitleState_02012010(var0, 5);
    if (data_ov004_02171034[Enum_ov004_0216d920_2] == 1 && data_ov004_02171034[Enum_ov004_0216d920_3] != 4) {
        SetGameMode_0200fb94((char*)var0, 6);
        SetTitleState_02012010(var0, 2);
    }
    if (func_02012034(var0) == 1) {
        SetGameMode_0200fb94((char*)var0, 6);
        SetTitleState_02012010(var0, 0);
        SetTitleIdleTimeoutEnabled_02012028(var0, 0);
    }
    if (data_ov004_02171034[Enum_ov004_0216d920_5] != 0) {
        func_02011544((struct Struct_02011544*)var0);
        data_ov004_02171034[Enum_ov004_0216d920_5] = 0;
    }
    return 0;
}
