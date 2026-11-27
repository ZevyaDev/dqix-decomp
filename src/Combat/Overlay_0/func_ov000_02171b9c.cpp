#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x430
#else
#define REGION_OFFSET_0 0x3f0
#endif

#pragma optimize_for_size off

// USA: GetPanelItem_ov000_02171b9c
extern "C" ARM void* GetPanelItem_ov000_02171b9c(void* panel, int itemIndex) {
    if (itemIndex < 0) goto fail;
    if (itemIndex < 0x10) goto ok;
fail:
    return NULL;
ok:
    return *(void**)((char*)panel + itemIndex * 4 + REGION_OFFSET_0);
}
