#include <globaldefs.h>

extern "C" int LoadItemTableByIds_020de9a4(void* itemTable, void* allocator, void* fileData, int fileSize, void* itemIds, int itemIdCount);

// USA: LoadItemTableById_020de980
extern "C" ARM int LoadItemTableById_020de980(void* itemTable, void* allocator, void* fileData, int fileSize, int itemId) {
    return LoadItemTableByIds_020de9a4(itemTable, allocator, fileData, fileSize, &itemId, 1);
}
