#include <globaldefs.h>

// USA: ResetItemSortOrder_ov023_021e1518
extern "C" ARM void ResetItemSortOrder_ov023_021e1518(void* sortList) {
    char* entries = *(char**)((char*)sortList + 0x4);
    short entryCount = *(short*)((char*)sortList + 0x8);
    for (short i = 0; i < entryCount; i++) {
        char* entry = entries + (i << 4);
        *(unsigned int*)entry = 0;
        *(unsigned char*)(entry + 0xe) &= ~1;
    }
    *(int*)sortList = 0;
}
