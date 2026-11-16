#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02028c8c_792 = 0x314 };
#else
enum { Enum_02028c8c_792 = 0x318 };
#endif
extern "C" void func_02028cfc(void*);
extern "C" void func_02028ccc(void*);

extern "C" void __cxa_vec_ctor(void* arg0, int arg1, int arg2, void* arg3, void* arg4);
extern "C" void func_020287b4(void* arg0);

// USA: func_02028c8c
extern "C" ARM void* func_02028c8c(void* arg0) {
    __cxa_vec_ctor(arg0, 4, Enum_02028c8c_792, (void*)func_02028ccc, (void*)func_02028cfc);
    func_020287b4(arg0);
    return arg0;
}
