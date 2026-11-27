#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x6f8
#define REGION_FIELD_1 0x114
#define REGION_FIELD_2 0x6ac
#else
#define REGION_FIELD_0 0x77c
#define REGION_FIELD_1 0x118
#define REGION_FIELD_2 0x730
#endif


struct BGControlSave_02074bd0;
struct BGControlSave_02074bf4;
extern "C" void RestoreMainBGControl_02074bd0(struct BGControlSave_02074bd0* save);
extern "C" void RestoreSubBGControl_02074bf4(struct BGControlSave_02074bf4* save);

// USA: RestoreSavedBGControlAndLayers_ov023_021dcd18
#pragma optimize_for_size off
extern "C" ARM void RestoreSavedBGControlAndLayers_ov023_021dcd18(void* panel) {
    signed char screen = *(signed char*)((char*)panel + REGION_FIELD_0);
    if (screen == 1) {
        RestoreSubBGControl_02074bf4((struct BGControlSave_02074bf4*)((char*)panel + REGION_FIELD_1));
        unsigned int* subDisplayControl = (unsigned int*)0x4001000;
        *subDisplayControl = (*subDisplayControl & ~0x1f00) | (*(unsigned int*)((char*)panel + REGION_FIELD_2) << 8);
    } else {
        RestoreMainBGControl_02074bd0((struct BGControlSave_02074bd0*)((char*)panel + REGION_FIELD_1));
        unsigned int* mainDisplayControl = (unsigned int*)0x4000000;
        *mainDisplayControl = (*mainDisplayControl & ~0x1f00) | (*(unsigned int*)((char*)panel + REGION_FIELD_2) << 8);
    }
}
