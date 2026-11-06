#include <globaldefs.h>
#include "Combat/MapDisplay.h"

struct Struct_020421c4;
extern "C" ARM void func_0204a82c(struct Struct_020421c4*);

// USA: InitBGLayer_0204af64
extern "C" ARM void InitBGLayer_0204af64(struct BGLayer_02020cb8* layer) {
    func_0204a82c((struct Struct_020421c4*)layer);
    layer->unknown_c_ = 0;
    layer->unknown_e_ = 0xffff;
    layer->screenBlocks_10_ = 0;
    layer->screenData_14_ = 0;
    layer->screenSize_18_ = 0;
    layer->unknown_1c_0_ = 0;
    layer->bgIndex_1c_4_ = 0;
    layer->unknown_1d_ = 0;
    layer->unknown_1e_ = 0;
    layer->unknown_1f_ = 0;
}
