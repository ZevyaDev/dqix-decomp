#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1fa7
#else
#define REGION_OFFSET_0 0x1d6f
#endif


struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
extern "C" ItemData_0201099c_9* FindItemData_020dedd0(ItemTable_0201099c_10* itemTable, int itemId);

// USA: func_ov000_021815e4
extern "C" ARM struct ItemData_0201099c_9* func_ov000_021815e4(char* arg0) {
    signed char var0 = *(signed char*)(arg0 + REGION_OFFSET_0);
    short var1 = *(short*)(arg0 + var0 * 2 + 0x26);
    return FindItemData_020dedd0((ItemTable_0201099c_10*)(arg0 + 0x100), var1);
}
