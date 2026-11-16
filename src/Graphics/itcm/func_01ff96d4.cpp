#include "Graphics/itcm/VRAMStaging.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_01ff96d4 func_01ff96e0
#define func_01ff96e8 func_01ff96f4
#define func_01ff96fc func_01ff9708
#define func_01ff9718 func_01ff9724
#define func_01ff972c func_01ff9738
#endif

extern "C" VRAMStagingManager::Task* func_01ff96d4(VRAMStagingManager::Task* arg0)
{
    arg0->Reset();
    return arg0;
}

extern "C" VRAMStagingManager::StagingSpaceAllocation* func_01ff96e8(VRAMStagingManager::StagingSpaceAllocation* arg0)
{
    arg0->flags_ = 0;
    arg0->start_ = 0;
    arg0->size_ = 0;
    return arg0;
}

extern "C" VRAMStagingManager::CommonVRAMRegionTaskSet* func_01ff96fc(
    VRAMStagingManager::CommonVRAMRegionTaskSet* arg0, unsigned char* arg1, unsigned short arg2)
{
    arg0->pendingTaskIndices_ = arg1;
    arg0->maxNumTasks_ = arg2;
    arg0->Reset();
    return arg0;
}

extern "C" VRAMStagingManager* func_01ff9718(VRAMStagingManager* arg0)
{
    arg0->ZeroInitialize();
    return arg0;
}

extern "C" VRAMStagingManager* func_01ff972c(VRAMStagingManager* arg0)
{
    arg0->CancelAllTasks();
    return arg0;
}
