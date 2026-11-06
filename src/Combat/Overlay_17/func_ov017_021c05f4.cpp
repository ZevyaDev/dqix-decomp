#if defined(jpn)
enum { Enum_ov017_021c05f4_1788 = 0x4ec, Enum_ov017_021c05f4_396 = 0x180, Enum_ov017_021c05f4_2456 = 0x868, Enum_ov017_021c05f4_2876 = 0x91c };
#else
enum { Enum_ov017_021c05f4_1788 = 0x6fc, Enum_ov017_021c05f4_396 = 0x18c, Enum_ov017_021c05f4_2456 = 0x998, Enum_ov017_021c05f4_2876 = 0xb3c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"


#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

extern "C" void* GetMessageWindow_020421a0(void);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_02039820(void* arg0);
extern "C" int func_020535c8(signed char* arg0);
struct Struct_0203402c;
extern "C" int func_0203402c(Struct_0203402c* arg0);
struct Struct_02012de8;
extern "C" int func_02046708(Struct_02012de8* arg0, unsigned int arg1);
extern "C" int func_02039d7c(char* arg0);
extern "C" int func_020c39c8(volatile unsigned short* arg0);
struct SoundEffectManager_02108760;
extern "C" int PlaySoundEffect_0205eaa0(SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void* func_020d7a50(void);
struct Struct_020d7aa0_2;
extern "C" void func_020d7aa0(Struct_020d7aa0_2* arg0);
extern "C" void* GetZone3D_02012fe4(void);
extern "C" void* func_02017c58(void* arg0);
extern "C" void func_ov017_021c0760(unsigned char* arg0, unsigned char arg1);
struct Struct_02046a3c_2;
struct Struct_02046a3c;
extern "C" void func_02046a3c(Struct_02046a3c_2*, Struct_02046a3c*);

extern SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: func_ov017_021c05f4
extern "C" ARM void func_ov017_021c05f4(void* arg0, unsigned char arg1, unsigned char arg2, int arg3) {
    void* var0 = GetMessageWindow_020421a0();
    if (arg3 != 0) {
        GameObject* var1 = GameState::GetInstance()->GetUnknownGameObject();
        void* var2 = GetGlobalFlags_020d6c00();
        void* var3 = GetFlagManager_0205ec34();
        if (IsFlagSet_0206dfb0((int)var3, (unsigned char*)var3 + 0x8c, 0x119a) == 0) return;
        if (func_02046b08((void**)*(void**)((char*)arg0 + 0x3000 + Enum_ov017_021c05f4_1788)) == 0) return;
        if (func_02039820(var1) == 0) return;
        if (func_020535c8((signed char*)var1) != 0) return;
        if (*(int*)((char*)var1 + Enum_ov017_021c05f4_396) & 1) return;
        if (func_0203402c((Struct_0203402c*)var1) != 0 ||
            *(short*)((char*)var1 + 0xac) != 0 ||
            *(int*)((char*)var0 + Enum_ov017_021c05f4_2456) != 0) return;
        if (func_02046708((Struct_02012de8*)var2, 0x800) != 0) return;
        if (func_02039d7c((char*)var1) != 0) return;
        if (func_020c39c8((volatile unsigned short*)0x400006c) != 0) return;
        if (g_keyManager.TestKeysPressed(4) == 0) return;
        *(unsigned short*)((char*)var1 + 0xb2) = 0;
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
    } else {
        if (*(int*)((char*)var0 + Enum_ov017_021c05f4_2456) != 0) ResetMessageWindow_02043204((char*)var0);
    }

    void* var4 = func_020d7a50();
    func_020d7aa0((Struct_020d7aa0_2*)var4);
    func_02017c58(GetZone3D_02012fe4());

    func_ov017_021c0760((unsigned char*)*(void**)((char*)arg0 + 0x3000 + Enum_ov017_021c05f4_2876), arg1);
    char* var5 = (char*)arg0 + 0x3000;
    *((unsigned char*)*(void**)(var5 + Enum_ov017_021c05f4_2876) + 0x24) = arg2;
    func_02046a3c((Struct_02046a3c_2*)(*(void**)(var5 + Enum_ov017_021c05f4_1788)), (Struct_02046a3c*)(*(void**)(var5 + Enum_ov017_021c05f4_2876)));
}
