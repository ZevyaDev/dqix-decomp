#include <globaldefs.h>
extern "C" void ResetMusic_0209c20c(struct Struct_02109bf4_3*);

extern "C" void CloseSoundArchive_0203a950(void*);

// USA: func_0209c278
extern "C" ARM void func_0209c278(void* arg0) {
    ResetMusic_0209c20c((struct Struct_02109bf4_3*)(arg0));
    CloseSoundArchive_0203a950(arg0);
}
