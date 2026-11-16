#include <globaldefs.h>
#include "Combat/BufferedScriptResult.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

#if defined(jpn)
#define data_020f0d40 data_020f0e38
#endif

extern char data_020f0d40[];

// USA: func_02074114
extern "C" ARM int func_02074114(Struct_02074060* arg0, int arg1) {
    unsigned int var0;
    BackgroundLoader::AddLockGlobal();
    void* var1 = LoadFileIntoMemory(data_020f0d40, g_fileScratchSpace, &var0);
    if (var1 != 0) {
        func_0207416c(arg0, arg1, var1, var0);
        BackgroundLoader::RemoveLockGlobal();
        return 1;
    }
    BackgroundLoader::RemoveLockGlobal();
    return 0;
}
