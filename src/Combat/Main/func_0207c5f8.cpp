#include <globaldefs.h>

// USA: GetEquipmentBagItemIds_0207c5f8
extern "C" ARM void* GetEquipmentBagItemIds_0207c5f8(unsigned char* bag, unsigned int category) {
    if (category > 7) {
        return NULL;
    }
    return *(void**)(bag + category * 4 + 0xbd0);
}
