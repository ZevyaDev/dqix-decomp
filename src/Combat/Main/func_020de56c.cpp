#include <globaldefs.h>

// USA: GetItemDataId_020de56c
extern "C" ARM int GetItemDataId_020de56c(void* itemData) {
    return *(short*)((char*)itemData + 0x18);
}
