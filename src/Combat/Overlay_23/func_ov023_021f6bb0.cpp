#include <globaldefs.h>

// USA: SetMenuLoadTaskId_ov023_021f6bb0
extern "C" ARM void SetMenuLoadTaskId_ov023_021f6bb0(void* objectList, int taskId) {
    *(int*)((char*)objectList + 0x4) = taskId;
}
