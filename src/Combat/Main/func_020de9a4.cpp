#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020de6c8(void* arg0, void* arg1, void* arg2);
extern "C" int func_020def98(void* arg0, void* arg1, void* arg2, void* arg3, short arg4);

struct ItemTable_020de9a4 {
    unsigned short count_0_;
    char unknown_2_[0x14 - 2];
    unsigned char isSorted_14_;
};

// USA: LoadItemTableByIds_020de9a4
extern "C" ARM int LoadItemTableByIds_020de9a4(ItemTable_020de9a4* itemTable, void* allocator, void* fileData, void* fileSize, void* itemIds, unsigned short itemIdCount) {
    memset(itemTable, 0, 0x14);
    if (allocator == 0 || fileData == 0 || fileSize == 0 || itemIds == 0 || itemIdCount == 0) {
        return 0;
    }
    char fileTable[0x14];
    func_020de6c8(fileTable, fileData, fileSize);
    int isLoaded = func_020def98(allocator, itemTable, fileTable, itemIds, itemIdCount);
    unsigned char isSorted;
    if (isLoaded != 0 && itemTable->count_0_ > 1) {
        isSorted = 1;
    } else {
        isSorted = 0;
    }
    itemTable->isSorted_14_ = isSorted;
    return isLoaded;
}
