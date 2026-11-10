#include <globaldefs.h>

// USA: GetEquipmentBagCounts_0207c60c
extern "C" ARM void* GetEquipmentBagCounts_0207c60c(void* bag, unsigned int category) {
    if (category > 7) {
        return 0;
    }
    return ((void**)((char*)bag + 0xbf0))[category];
}
