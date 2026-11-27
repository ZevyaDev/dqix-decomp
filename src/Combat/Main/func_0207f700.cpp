#include <globaldefs.h>

// USA: GetMenuLayoutTextEntryByIndex_0207f700
extern "C" ARM void* GetMenuLayoutTextEntryByIndex_0207f700(unsigned char* textEntries, short index) {
    if (index < 0) {
        return NULL;
    }
    if (*(short*)(textEntries + 4) <= index) {
        return NULL;
    }
    return *(unsigned char**)textEntries + index * 0x30;
}
