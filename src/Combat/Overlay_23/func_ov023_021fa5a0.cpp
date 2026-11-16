#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"
#include "Resource/PAC.h"

extern "C" int func_ov011_021849d8(void* arg0);

extern "C" void func_ov023_021fa644(void* arg0, void* arg1, char* arg2, int arg3);

struct Struct_ov023_021fa5a0 {
    char unknown_0_[0x10];
    char* unknown_10_;
};

// USA: func_ov023_021fa5a0
extern "C" ARM void func_ov023_021fa5a0(struct Struct_ov023_021fa5a0* arg0, void* arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = func_ov011_021849d8(arg1);
    if (var1 < 0) {
        return;
    }
    if (!var0->GetTaskStatus(var1)) {
        return;
    }
    if (var0->GetDetailedTaskStatus(var1) != BackgroundLoader::TaskStatus_Complete) {
        return;
    }

    void* var2;
    unsigned int var3;
    var0->GetLoadedFileByID(var1, &var2, &var3);
    if (var2 == NULL || var3 == 0) {
        return;
    }

    unsigned int var4;
    char* var5 = (char*)(GetFileInPAC((void*)(var2), (const char*)(arg0->unknown_10_), (unsigned int*)(&var4)));
    if (var5 == NULL) {
        return;
    }

    func_ov023_021fa644(arg0, arg1, var5, var4);
}
