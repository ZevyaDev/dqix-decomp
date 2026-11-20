#include <globaldefs.h>
#include "Util/Random.h"

// USA: PickRandomTarget_ov024_021ed890
extern "C" ARM int PickRandomTarget_ov024_021ed890(struct Random** targetSelector, int* count, short* targetIndices) {
    int position = NextRandomMax(*targetSelector, *count);
    short targetIndex = targetIndices[position];
    targetIndices[0] = targetIndex;
    *count = 1;
    return 1;
}
