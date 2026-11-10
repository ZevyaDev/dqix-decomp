#include <globaldefs.h>

// USA: SetDisplayWindowInsideLayers_020e2d24
extern "C" ARM void SetDisplayWindowInsideLayers_020e2d24(int* displayWindow, int layers, int isEffectEnabled) {
    displayWindow[1] = layers;
    displayWindow[2] = isEffectEnabled;
}
