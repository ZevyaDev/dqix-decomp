#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: RemoveLoadTask_ov023_021db2e4
extern "C" ARM void RemoveLoadTask_ov023_021db2e4(volatile int* loadTaskId) {
    if (!loadTaskId) return;
    if (*loadTaskId < 0) return;
    ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->RemoveTask((int)(*loadTaskId));
    *loadTaskId = -1;
}
