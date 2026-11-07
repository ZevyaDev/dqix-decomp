#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetMessageWindow_020421a0();
extern "C" void* GetNPCManager_0203cf4c(void);
extern "C" void* FindNPCById_0203df78(void* npcManager, int id);

struct Struct_0203de84;
struct NPC_0203de84_2;
extern "C" void GetNPCPosition_020406f8(struct Struct_0203de84* outPosition, struct NPC_0203de84_2* npc);

struct Struct_ov004_021688d4 { unsigned int unknown_0_[3]; };

extern "C" int func_0203dfdc(void* arg0, int arg1);
struct Struct_02040a90;
extern "C" int func_02040a90(struct Struct_02040a90* arg0);

extern "C" int fix32_Atan2(int, int);
struct Struct_02033834_2;
extern "C" void SetFacing_02033834(struct Struct_02033834_2* object, int angle);

extern "C" int GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void);

extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void func_02011b3c(void* arg0, unsigned char arg1);

struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: func_ov004_021688d4
extern "C" ARM int func_ov004_021688d4(void) {
    char* var0 = (char*)(int)GetMessageWindow_020421a0();
    void* var1 = GetNPCManager_0203cf4c();
    void* var2 = FindNPCById_0203df78(var1, 6);
    if (var2) {
        GameObject* var3 = GameState::GetInstance()->GetUnknownGameObject();
        struct Struct_ov004_021688d4 var4;
        struct Struct_ov004_021688d4 var5;
        struct Struct_ov004_021688d4 var6;
        GetNPCPosition_020406f8((struct Struct_0203de84*)&var6, (struct NPC_0203de84_2*)var2);
        var4 = var6;
        var5 = *(struct Struct_ov004_021688d4*)((char*)var3 + 0x44);

        int var7 = func_0203dfdc(var1, 6);
#if defined(jpn)
        *(int*)(var0 + 0x1708) = var7;
#else
        *(int*)(var0 + 0x1838) = var7;
#endif

        int var8 = func_02040a90((struct Struct_02040a90*)var2);
#if defined(jpn)
        *(int*)(var0 + 0x170c) = var8;
#else
        *(int*)(var0 + 0x183c) = var8;
#endif

        int var9 = (int)var4.unknown_0_[0] - (int)var5.unknown_0_[0];
        int var10 = (int)var4.unknown_0_[2] - (int)var5.unknown_0_[2];
        int var11 = fix32_Atan2(var9, var10);
        int var12 = fix32ReduceAngle0To2Pi(var11);
        SetFacing_02033834((struct Struct_02033834_2*)var3, var12);
    }

    GetLocalWireless_0202ae18();
    if (IsNotLocalWirelessGuest_0202c508()) {
        GameState* var13 = GameState::GetInstance();
        if (func_02011b50(var13, 0x10)) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        }
        func_02011b3c(var13, 0x10);
    }
    return 0;
}
