#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

struct SoundEffectManager_02108760;
struct Struct_0206f81c_2;
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
struct SafeAllocator;

extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void ResetMenuTask_ov017_021b2174(unsigned char* node);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);
extern "C" void func_ov004_02165df4(SafeAllocator* arg0, void* arg1);
extern char gSoundEffectManager_02108760;
extern char data_020f2334;

// USA: func_020d7978
extern "C" ARM void func_020d7978() {
    PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
    GameResources* var0 = GetGameResources();
    Queue_0201bdac_2* var1;
    unsigned char* var2 = static_cast<unsigned char*>(var0->unknown_ptr_array_3afc[20]);
    var1 = static_cast<Queue_0201bdac_2*>(var0->unknown_ptr_array_36fc[0]);
    ResetMenuTask_ov017_021b2174(var2);
    func_ov017_021b2ba0((Struct_0206f81c_2*)var2, &data_020f2334);
    func_ov017_021b2bd0(var2, (int)func_ov004_02165df4, OVERLAY_ID(4));
    AppendToQueue_020469b4(var1, (QueueNode_0201bdac*)var2);
}
