#include <globaldefs.h>

// USA: SetAccoladeDisplayEntries_ov023_021eb564
extern "C" ARM void SetAccoladeDisplayEntries_ov023_021eb564(char* display, int entries, int entryCount) {
    if (entries != 0 && entryCount != 0) {
        *(int*)(display + 0x20) = entries;
        *(int*)(display + 0x24) = entryCount;
    }
}
