#include <globaldefs.h>

// USA: GetMenuLayoutWindowEntryByIndex_0207f100
extern "C" ARM void* GetMenuLayoutWindowEntryByIndex_0207f100(unsigned char* windowEntries, short index) {
    if (index < 0) {
        return NULL;
    }
    if (*(short*)(windowEntries + 0x4) <= index) {
        return NULL;
    }
    return *(unsigned char**)(windowEntries + 0x0) + index * 0x18;
}
