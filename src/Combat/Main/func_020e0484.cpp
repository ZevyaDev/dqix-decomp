#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
struct ItemTable_020de9a4;

extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);
extern "C" int LoadItemTableByIds_020de9a4(ItemTable_020de9a4* itemTable, void* allocator, void* fileData, unsigned int fileSize, void* itemIds, unsigned short itemIdCount);

// JPN: func_020e0484
extern "C" ARM int func_020e0484(ItemTable_020de9a4* arg0, void* arg1, const char* arg2, void* arg3, unsigned short arg4, unsigned char arg5) {
    unsigned int var0;
    if (arg5 != 0) {
        BackgroundLoader::AddLockGlobal();
    }
    void* var1 = func_020e0968(arg2, &var0);
    int var2 = LoadItemTableByIds_020de9a4(arg0, arg1, var1, var0, arg3, arg4);
    if (arg5 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return var2;
}
#endif
