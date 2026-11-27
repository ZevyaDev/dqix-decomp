#include <globaldefs.h>

// USA: GetCursorPageCount_0205c6e4
extern "C" ARM unsigned int GetCursorPageCount_0205c6e4(unsigned char* windowManager) {
    unsigned int pageCount = 0;
    if (windowManager[0x94] && windowManager[0x50]) pageCount = *(unsigned int*)(windowManager + 0x8);
    if (windowManager[0x95]) pageCount = *(unsigned int*)(windowManager + 0x58);
    return pageCount;
}
