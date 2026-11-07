#include <globaldefs.h>

extern "C" void* func_ov031_0223e22c(void *arg0, void *arg1, void *arg2, int arg3, int arg4);

// USA: AddTask_ov031_0223e218
extern "C" ARM void* AddTask_ov031_0223e218(void *listIndex, void *callback, void *callbackData, int priority) {
    return func_ov031_0223e22c(listIndex, callback, callbackData, priority, 0);
}
