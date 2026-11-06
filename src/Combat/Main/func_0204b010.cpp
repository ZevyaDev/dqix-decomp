#include <globaldefs.h>
#include "std_library_functions.h"

extern unsigned int data_020e7b98[][4];

struct BGLayer_0204b010 {
    char unknown_0_[0x14];
    void* pScreenData_14_;
    unsigned int screenSize_18_;
    char unknown_1c_[3];
    unsigned char unknown_1f_;
};

// USA: ClearBGScreenData_0204b010
extern "C" ARM void ClearBGScreenData_0204b010(BGLayer_0204b010* layer, void* screenData) {
    if (screenData == NULL) screenData = layer->pScreenData_14_;
    if (screenData == NULL) return;
    memset(screenData, 0, data_020e7b98[layer->unknown_1f_][layer->screenSize_18_]);
}
