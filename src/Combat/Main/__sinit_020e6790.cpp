#include "Graphics/itcm/VRAMStaging.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_01ff972c func_01ff9738
#endif

#if defined(jpn)
#define func_01ff9718 func_01ff9724
#endif

#if defined(jpn)
#define func_01ff96fc func_01ff9708
#endif

#if defined(jpn)
#define func_01ff96e8 func_01ff96f4
#endif

#if defined(jpn)
#define func_01ff96d4 func_01ff96e0
#endif

#pragma define_section initcode ".init" RX

extern "C" void __cxa_vec_ctor(void* arg0, int arg1, int arg2, void* arg3, void* arg4);

extern "C" VRAMStagingManager::Task* func_01ff96d4(VRAMStagingManager::Task* arg0);
extern "C" VRAMStagingManager::StagingSpaceAllocation* func_01ff96e8(
    VRAMStagingManager::StagingSpaceAllocation* arg0);
extern "C" VRAMStagingManager::CommonVRAMRegionTaskSet* func_01ff96fc(
    VRAMStagingManager::CommonVRAMRegionTaskSet* arg0, unsigned char* arg1, unsigned short arg2);
extern "C" VRAMStagingManager* func_01ff9718(VRAMStagingManager* arg0);
extern "C" VRAMStagingManager* func_01ff972c(VRAMStagingManager* arg0);
extern "C" void __register_global_object(void* arg0, void* arg1, void* arg2);

extern VRAMStagingManager::Task g_vramStagingTaskQueue[0x100];
extern VRAMStagingManager::StagingSpaceAllocation g_vramStagingAllocations[0x80];

extern VRAMStagingManager::CommonVRAMRegionTaskSet g_vramStagingRegionalTaskSets[10];
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffdd84;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffdd90;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffdd9c;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffdda8;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffddb4;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffddc0;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffddcc;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffddd8;
extern VRAMStagingManager::CommonVRAMRegionTaskSet data_01ffdde4;

extern unsigned char data_01ffddf0[0x80];
extern unsigned char data_01ffde70[0x100];
extern unsigned char data_01ffdc78[0x10];
extern unsigned char data_01ffdcf8[0x40];
extern unsigned char data_01ffdc88[0x10];
extern unsigned char data_01ffdd38[0x40];
extern unsigned char data_01ffdca8[0x10];
extern unsigned char data_01ffdcb8[0x20];
extern unsigned char data_01ffdc98[0x10];
extern unsigned char data_01ffdcd8[0x20];

extern VRAMStagingManager g_stagingManagerInstance;
extern int data_0214e5b0;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e6790
extern "C" __declspec(initcode) ARM void __sinit_020e6790(void) {
    __cxa_vec_ctor(g_vramStagingTaskQueue, 0x100, 0x10, (void*)func_01ff96d4, 0);
    __cxa_vec_ctor(g_vramStagingAllocations, 0x80, 6,
        (void*)func_01ff96e8, 0);

    func_01ff96fc(g_vramStagingRegionalTaskSets,
        data_01ffddf0, 0x80);
    func_01ff96fc(&data_01ffdd84, data_01ffde70, 0x100);
    func_01ff96fc(&data_01ffdd90, data_01ffdc78, 0x10);
    func_01ff96fc(&data_01ffdd9c, data_01ffdcf8, 0x40);
    func_01ff96fc(&data_01ffdda8, data_01ffdc88, 0x10);
    func_01ff96fc(&data_01ffddb4, data_01ffdd38, 0x40);
    func_01ff96fc(&data_01ffddc0, data_01ffdca8, 0x10);
    func_01ff96fc(&data_01ffddcc, data_01ffdcb8, 0x20);
    func_01ff96fc(&data_01ffddd8, data_01ffdc98, 0x10);
    func_01ff96fc(&data_01ffdde4, data_01ffdcd8, 0x20);

    func_01ff9718(&g_stagingManagerInstance);
    __register_global_object(&g_stagingManagerInstance, (void*)func_01ff972c,
        &data_0214e5b0);
}
