#include <globaldefs.h>

extern "C" void RestoreSoundHeapState_0203aa80(void* manager, int heapState);

// USA: UnloadExtraSoundSet_0205eb80
extern "C" ARM void UnloadExtraSoundSet_0205eb80(void* manager) {
    RestoreSoundHeapState_0203aa80(manager, *(int*)((char*)manager + 0xc0));
}
