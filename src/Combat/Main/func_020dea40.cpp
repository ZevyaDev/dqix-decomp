#include <globaldefs.h>

extern "C" int LoadItemTableByCategories_020dea64(void* itemTable, void* allocator, void* fileData, int fileSize, void* categories, int categoryCount);

// USA: func_020dea40
extern "C" ARM int func_020dea40(void* arg0, void* arg1, void* arg2, int arg3, int arg4) {
    return LoadItemTableByCategories_020dea64(arg0, arg1, arg2, arg3, &arg4, 1);
}
