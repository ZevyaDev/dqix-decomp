#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" void* func_0205ec34(void);

struct BMDJEntry_02013380 {
    unsigned short unknown_0_;
    unsigned short flags_2_;
};

// USA: SetBMDJEntryVisible_02013380
extern "C" ARM void SetBMDJEntryVisible_02013380(BMDJEntry_02013380* entry, int bmdjId, int isVisible) {
    func_0205ec34();
    if (isVisible != 0)
        entry->flags_2_ &= ~4;
    else
        entry->flags_2_ |= 4;
    entry->flags_2_ |= 0x40;
}
