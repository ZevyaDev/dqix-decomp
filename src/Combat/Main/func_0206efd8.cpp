#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/MonsterDefinition.h"
#include "Filesystem/FileIO.h"


#if defined(jpn)
#include "Filesystem/FileIO.h"
extern char data_020f0bc0;
#endif

extern char data_020f0a64;
extern char data_020f0a7a;

// USA: func_0206efd8
extern "C" ARM void func_0206efd8(void* arg0, void* arg1) {
    BackgroundLoader::AddLockGlobal();
    unsigned int var0;
#if defined(jpn)
    LoadFileIntoMemory(&data_020f0bc0, g_fileScratchSpace, &var0);
    void* var1 = g_fileScratchSpace;
#else
    void* var1 = ExtractFileFromGP2((const char*)(&data_020f0a64), (const char*)(&data_020f0a7a), (unsigned int*)(&var0));
#endif
    func_0206f01c(static_cast<Struct_0206ef48*>(arg0), static_cast<SafeAllocator*>(arg1),
                   static_cast<Struct_0206efd8*>(var1), var0);
    BackgroundLoader::RemoveLockGlobal();
}
