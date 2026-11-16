#include <globaldefs.h>
extern "C" void func_02039e7c(void*);

extern "C" void* func_0201c108(void* arg0);
extern "C" void* func_0201c0e8(void* arg0);
extern "C" void __cxa_vec_ctor(void* arg0, int arg1, int arg2, void* arg3, void* arg4);

// USA: func_0203a878
extern "C" ARM void* func_0203a878(void* arg0) {
    __cxa_vec_ctor(arg0, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    __cxa_vec_ctor((char*)arg0 + 0x2a8, 5, 0x88, (void*)func_0201c0e8, (void*)func_0201c108);
    func_02039e7c((void*)(arg0));
    return arg0;
}
