#include <globaldefs.h>
// USA: GetEquipmentBagCapacity_0207c620
extern "C" ARM signed short GetEquipmentBagCapacity_0207c620(unsigned char *bag, unsigned int category) {
    if (category > 7) return -1;
    return *(signed short*)(bag + 0xc10 + category * 2);
}
