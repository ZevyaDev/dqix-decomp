#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x4118
#else
#define REGION_FIELD 0x4338
#endif

// USA: GetHaloObject_ov017_021bdbcc
extern "C" ARM int GetHaloObject_ov017_021bdbcc(void* gameResources) {
    return *(int*)((char*)gameResources + REGION_FIELD);
}
