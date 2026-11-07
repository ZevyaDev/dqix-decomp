#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);

// USA: UnloadExtraSoundSet_0205eb80
extern "C" ARM void UnloadExtraSoundSet_0205eb80(void* manager) {
    func_0203aa80(manager, *(int*)((char*)manager + 0xc0));
}
