#include <globaldefs.h>

extern "C" void func_020bdb0c(void* arg0, int arg1);

// USA: RestoreSoundHeapState_0203aa80
extern "C" ARM void RestoreSoundHeapState_0203aa80(void* manager, int heapState) {
    void* heap = *(void**)manager;
    if (heap == NULL) return;
    func_020bdb0c(heap, heapState);
}
