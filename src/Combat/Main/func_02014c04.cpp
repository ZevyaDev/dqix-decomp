#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "std_library_functions.h"

#if defined(jpn)
#define data_020ef1d6 data_020ef112
#endif
extern char data_020ef1d6[];

// KEEP-NAME
// USA: func_02014c04
extern "C" ARM int func_02014c04(Zone3D* arg0) {
    if (arg0->atsAMBLLoadHandle_ < 0) return 1;
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (!var0->GetTaskStatus(arg0->atsAMBLLoadHandle_)) return 0;
    if (var0->GetDetailedTaskStatus(arg0->atsAMBLLoadHandle_) != 2) {
        var0->RemoveTask(arg0->atsAMBLLoadHandle_);
        arg0->atsAMBLLoadHandle_ = -1;
        func_020145a8(arg0);
        return 1;
    }
    void* var1;
    unsigned int var2;
    const void* var3;
    unsigned int var4;
    char var5[0x28];
    var0->GetLoadedFileByID(arg0->atsAMBLLoadHandle_, &var1, &var2);
    sprintf(var5, data_020ef1d6, arg0->substruct_c_.buffer1);
    if (!GetFileInNarc(var1, var5, &var3, &var4, 0)) {
        var0->RemoveTask(arg0->atsAMBLLoadHandle_);
        arg0->atsAMBLLoadHandle_ = -1;
        func_020145a8(arg0);
        return 1;
    }
    func_02014414(arg0, var3, var4);
    var0->RemoveTask(arg0->atsAMBLLoadHandle_);
    arg0->atsAMBLLoadHandle_ = -1;
    func_020145a8(arg0);
    return 1;
}
