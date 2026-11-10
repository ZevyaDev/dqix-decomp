#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov004_0216d504_3953 = 0xc9d };
#else
enum { Enum_ov004_0216d504_3953 = 0xf71 };
#endif

extern "C" void func_020aaf84(void*, int, int, int);
extern "C" unsigned char func_0209ca98(char* arg0);
extern "C" unsigned char func_0205ea18(unsigned char* arg0);
extern "C" void func_0209ca70(void* arg0, int arg1);
struct Struct_02108760_2;
extern "C" void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1);
extern "C" void SetTitleIdleTimeoutEnabled_02012028(void* gameState, unsigned char isEnabled);
extern "C" void SetGameMode_0200fb94(char* gameState, unsigned char mode);
extern "C" void SetTitleState_02012010(void* arg0, int state);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

#if defined(jpn)
struct Struct_ov004_02171034_4 { unsigned char unknown_0_[6]; unsigned char unknown_1_; unsigned char unknown_4_; unsigned char unknown_8_[4]; unsigned char* unknown_10_; };
#else
struct Struct_ov004_02171034_4 {
    unsigned char unknown_0_[1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    unsigned char unknown_4_;
    unsigned char unknown_5_[0xb];
    unsigned char* unknown_10_;
};
#endif
extern Struct_ov004_02171034_4 data_ov004_02171034;
extern char gMusicManager_02109bf4;
extern unsigned char gSoundEffectManager_02108760;

// USA: func_ov004_0216d504
extern "C" ARM int func_ov004_0216d504(void* arg0) {
    func_020aaf84(data_ov004_02171034.unknown_10_, 0, 0, 0);
    data_ov004_02171034.unknown_4_ = func_0209ca98(&gMusicManager_02109bf4);
    data_ov004_02171034.unknown_1_ = func_0205ea18(&gSoundEffectManager_02108760);
    func_0209ca70(&gMusicManager_02109bf4, 3);
    func_0205e9f4((struct Struct_02108760_2*)&gSoundEffectManager_02108760, 3);

    GameState* var0 = GameState::GetInstance();
    SetTitleIdleTimeoutEnabled_02012028(var0, 0);
    ((unsigned char*)var0 + 0x7000)[Enum_ov004_0216d504_3953] = 0;
    SetGameMode_0200fb94((char*)var0, 0);
    SetTitleState_02012010(var0, 5);

    QueueMenuScriptEntry_ov011_021848a0(arg0, 0x3e7);
    return 0;
}
