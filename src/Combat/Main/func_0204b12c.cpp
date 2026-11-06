#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern int data_020e7b98[][4];

struct BGLayer_0204b12c {
    char unknown_0_[0x14];
    void* pScreenData_14_;
    unsigned int screenSize_18_;
    unsigned char unknown_1c_[3];
    unsigned char unknown_1f_;
};

// USA: AllocateBGScreenData_0204b12c
extern "C" ARM void AllocateBGScreenData_0204b12c(struct BGLayer_0204b12c* layer, SafeAllocator* allocator) {
    unsigned int size;
    void* screenData;
    if (allocator == NULL) return;
    size = data_020e7b98[layer->unknown_1f_][layer->screenSize_18_];
    screenData = allocator->Allocate(size);
    layer->pScreenData_14_ = screenData;
    memset(screenData, 0, size);
}
