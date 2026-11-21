#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

extern "C" void ResetQuestDisplay_0208b9a0(void*, int);

extern "C" void* func_020d6c00(void);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);

struct QuestDisplay_0208ba54 {
    SafeAllocator* pAllocators_0_; // 0x0
    unsigned char unknown_4_[0xbc - 4];
    int unknown_bc_;
    int unknown_c0_;
};

// USA: ReleaseQuestDisplay_0208ba54
extern "C" ARM void ReleaseQuestDisplay_0208ba54(struct QuestDisplay_0208ba54* display) {
    int backgroundLoader = (int)BackgroundLoader::GetInstance();
    ((BackgroundLoader*)(backgroundLoader))->RemoveTask((int)(display->unknown_bc_));
    display->unknown_bc_ = -1;
    ((BackgroundLoader*)(backgroundLoader))->RemoveTask((int)(display->unknown_c0_));
    display->unknown_c0_ = -1;

    if (display->pAllocators_0_ != NULL) {
        int i;
        for (i = 0; i < 5; i++) {
            if (display->pAllocators_0_[i].GetSignedAllocator() != NULL) {
                display->pAllocators_0_[i].Destroy();
            }
        }
    }

    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)func_020d6c00(), 1);
    ResetQuestDisplay_0208b9a0(display, 0);
}
