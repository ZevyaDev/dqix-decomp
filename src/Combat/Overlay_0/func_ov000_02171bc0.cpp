#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x430
#else
#define REGION_OFFSET_0 0x3f0
#endif


// USA: CountPanelItems_ov000_02171bc0
extern "C" ARM int CountPanelItems_ov000_02171bc0(char* panel) {
    signed char count = 0;
    for (int i = 0; i < 0x10; i++) {
        void* item = *(void**)(panel + i * 4 + REGION_OFFSET_0);
        if (item != 0) {
            short var3 = *(short*)((char*)item + 0x18);
            if (var3 > 0) {
                count = (signed char)(count + 1);
            }
        }
    }
    return count;
}
