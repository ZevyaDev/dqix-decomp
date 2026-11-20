#include <globaldefs.h>

extern "C" void* GetEquipmentBagCounts_0207c60c(void* bag, unsigned int category);
extern "C" signed short func_0207c620(unsigned char* arg0, unsigned int arg1);

// USA: CountUsedEquipmentBagSlots_0207c638
extern "C" ARM short CountUsedEquipmentBagSlots_0207c638(void* bag, unsigned int category) {
    signed char* counts = (signed char*)GetEquipmentBagCounts_0207c60c(bag, category);
    short capacity = func_0207c620((unsigned char*)bag, category);
    short usedSlotCount = 0;
    short i;
    for (i = 0; i < capacity; i++) {
        if (counts[i] > 0) usedSlotCount++;
    }
    return usedSlotCount;
}
