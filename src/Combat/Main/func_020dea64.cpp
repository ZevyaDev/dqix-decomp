#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020de6c8(void* arg0, void* arg1, void* arg2);
extern "C" int func_020df374(void* arg0, void* arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);

struct ItemTable_020dea64 {
    unsigned short count_0_;
    char unknown_2_[0x14 - 2];
    unsigned char isSorted_14_;
};

// USA: LoadItemTableByCategories_020dea64
extern "C" ARM int LoadItemTableByCategories_020dea64(ItemTable_020dea64* itemTable, void* allocator, void* fileData, void* fileSize, void* categories, short categoryCount) {
    memset(itemTable, 0, 0x14);
    if (allocator == 0 || fileData == 0 || fileSize == 0 || categories == 0 || categoryCount == 0) {
        return 0;
    }
    char fileTable[0x14];
    func_020de6c8(fileTable, fileData, fileSize);
    int isLoaded = func_020df374(allocator, itemTable, fileTable, categories, categoryCount, 0, 0);
    unsigned char isSorted;
    if (isLoaded != 0 && itemTable->count_0_ > 1) {
        isSorted = 1;
    } else {
        isSorted = 0;
    }
    itemTable->isSorted_14_ = isSorted;
    return isLoaded;
}
