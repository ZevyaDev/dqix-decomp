#include <globaldefs.h>
#include "std_library_functions.h"

// USA: InitItemTable_020de824
extern "C" ARM void* InitItemTable_020de824(void* itemTable) {
    memset(itemTable, 0, 0x14);
    *((unsigned char*)itemTable + 0x14) = 0;
    return itemTable;
}
