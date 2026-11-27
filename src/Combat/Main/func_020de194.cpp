#include <globaldefs.h>

extern int (*data_020f2adc[])(unsigned short);

// USA: GetItemBuyPrice_020de194
extern "C" ARM int GetItemBuyPrice_020de194(void* item) {
    unsigned int buyPrice = *(unsigned short*)((char*)item + 0x1c);
    if (buyPrice >= 0xfffb) {
        buyPrice = data_020f2adc[0xffff - buyPrice](*(unsigned short*)((char*)item + 0x1a));
    }
    return buyPrice;
}
