#include <globaldefs.h>

#include "Util/Random.h"

extern "C" int func_0208810c(unsigned char* arg0);
extern "C" void SetSuperHighTension_02088150(void* stats);

// USA: RaiseTensionStage_0208767c
extern "C" ARM int RaiseTensionStage_0208767c(unsigned char* stats, struct Random* random) {
    unsigned char var0 = stats[0x24];
    if (var0 >= 4) return -2;
    if (var0 == 3) {
        if (random == 0) random = GetBTRandom();
        if (NextRandomMax(random, 2) >= 1) return -1;
    }
    if (++stats[0x24] >= 4) {
        if (func_0208810c(stats)) {
            stats[0x24] = 4;
            SetSuperHighTension_02088150(stats);
        }
    }
    return stats[0x24];
}
