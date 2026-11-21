#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct SoundEffectManager_02108760;
struct MenuTask_0206f81c_2;
struct Queue_02046a3c_2;
struct QueueNode_02046a3c;
struct SafeAllocator;

struct Struct_020d79e0 {
    unsigned char unknown_0_[0x4c];
    int unknown_4c_;
};

extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void ResetMenuTask_ov017_021b2174(unsigned char* node);
extern "C" void SetMenuTaskFileName_ov017_021b2ba0(MenuTask_0206f81c_2* menuTask, char* fileName);
extern "C" void SetMenuTaskSetupFunction_ov017_021b2bd0(void* menuTask, int setupFunction, int overlayId);
extern "C" void InsertAfterQueueHead_02046a3c(Queue_02046a3c_2* queue, QueueNode_02046a3c* node);
extern "C" void func_ov004_021633ac(SafeAllocator* arg0, void* arg1);
extern char gSoundEffectManager_02108760;
extern char data_020f233d;

// USA: func_020d79e0
extern "C" ARM void func_020d79e0(void* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    Queue_02046a3c_2* var1;
    Struct_020d79e0* var2 = static_cast<Struct_020d79e0*>(var0->unknown_ptr_array_3afc[20]);
    var1 = static_cast<Queue_02046a3c_2*>(var0->unknown_ptr_array_36fc[0]);
    PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
    ResetMenuTask_ov017_021b2174(reinterpret_cast<unsigned char*>(var2));
    var2->unknown_4c_ = arg1;
    SetMenuTaskFileName_ov017_021b2ba0((MenuTask_0206f81c_2*)var2, &data_020f233d);
    SetMenuTaskSetupFunction_ov017_021b2bd0(var2, (int)func_ov004_021633ac, OVERLAY_ID(4));
    InsertAfterQueueHead_02046a3c(var1, (QueueNode_02046a3c*)var2);
}
