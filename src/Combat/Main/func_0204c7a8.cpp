#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct TextWindow_0204c7a8 {
    char unknown_0_[0x8];
    int unknown_8_;
    char unknown_c_[0xd4 - 0xc];
    void* pScreenData_d4_;
};

// USA: SetTextWindowBuffers_0204c7a8
extern "C" ARM void SetTextWindowBuffers_0204c7a8(struct TextWindow_0204c7a8* window, SafeAllocator* allocator, int arg2, unsigned int screenDataSize) {
    window->pScreenData_d4_ = allocator->Allocate(screenDataSize);
    window->unknown_8_ = arg2;
}
