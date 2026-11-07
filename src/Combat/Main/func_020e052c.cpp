#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
struct ItemTable_020dea64;

extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);
extern "C" int LoadItemTableByCategories_020dea64(ItemTable_020dea64* itemTable, void* allocator, void* fileData, unsigned int fileSize, void* categories, short categoryCount);

// JPN: func_020e052c
extern "C" ARM int func_020e052c(ItemTable_020dea64* arg0, void* arg1, const char* arg2, void* arg3, short arg4, unsigned char arg5) {
    unsigned int var0;
    if (arg5 != 0) {
        BackgroundLoader::AddLockGlobal();
    }
    void* var1 = func_020e0968(arg2, &var0);
    int var2 = LoadItemTableByCategories_020dea64(arg0, arg1, var1, var0, arg3, arg4);
    if (arg5 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return var2;
}
#endif
