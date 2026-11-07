#include <globaldefs.h>

struct StringTable_0201099c_14;
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

// USA: ConstructStringTable_020dfc2c
extern "C" ARM void* ConstructStringTable_020dfc2c(void* stringTable) {
    InitStringTable_020dfc40((struct StringTable_0201099c_14*)stringTable);
    return stringTable;
}
