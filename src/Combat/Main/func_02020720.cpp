#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "NitroSDK/Memory.h"
#include "Combat/MapDisplay.h"
#include "Combat/CombatScriptContext.h"
#include "Graphics/BGLayer.h"

struct BGLayer_02020cb8;

extern "C" ARM void func_0202445c(void* arg0);

// USA: ResetSubScreenDisplay_02020720
extern "C" ARM void ResetSubScreenDisplay_02020720(Struct_02020554* subScreenDisplay) {
    subScreenDisplay->unknown_18_ = 0;
    subScreenDisplay->unknown_1c_ = 0;
    subScreenDisplay->unknown_20_ = 0;
    subScreenDisplay->unknown_24_ = 0;
    subScreenDisplay->unknown_28_ = 0;
    subScreenDisplay->unknown_2c_ = 0;
    subScreenDisplay->unknown_30_ = 0;
    subScreenDisplay->unknown_34_ = 0;
    subScreenDisplay->unknown_38_ = 0x1000;
    int initialTile = 0x1000 - 0x1400;
    subScreenDisplay->unknown_3c_ = initialTile;
    subScreenDisplay->unknown_40_ = initialTile;
    subScreenDisplay->unknown_6c_ = 0;
    subScreenDisplay->unknown_70_ = 0;
    subScreenDisplay->unknown_74_ = 0;
    subScreenDisplay->unknown_14_ = 1;
    subScreenDisplay->unknown_55c_ = 0;
    subScreenDisplay->unknown_754_ = 0;
    subScreenDisplay->unknown_5a4_ = subScreenDisplay->unknown_5a4_ & 1;
    subScreenDisplay->unknown_0_ = 0;
    subScreenDisplay->unknown_a9c_ = 0;

    for (int i = 0; i < 4; i++) {
        subScreenDisplay->unknown_560_[i] = -1;
        subScreenDisplay->unknown_570_[i] = 0;
        subScreenDisplay->unknown_758_[i] = 0;
        subScreenDisplay->unknown_558_[i] = 1;
    }

    ((BGLayer*)(&subScreenDisplay->unknown_4c_))->Reset();

    subScreenDisplay->unknown_75c_ = 0;
    subScreenDisplay->unknown_75d_ = 0;
    subScreenDisplay->unknown_77a_ = 0;
    subScreenDisplay->unknown_77c_ = 0;
    subScreenDisplay->unknown_9b4_ = 0;
    subScreenDisplay->unknown_760_ = 0;
    subScreenDisplay->unknown_764_ = 0;
    subScreenDisplay->unknown_766_ = 0;
    subScreenDisplay->unknown_768_ = 1;

    func_0202445c(subScreenDisplay);

    subScreenDisplay->unknown_9bc_ = 0;
    subScreenDisplay->unknown_9c0_ = 0;
    data_020fdc4c.unknown_c_ = 0;
    subScreenDisplay->unknown_aa0_ = 0;

    VectorizedMemset(subScreenDisplay->unknown_aa2_, 0, 0x100);
}
