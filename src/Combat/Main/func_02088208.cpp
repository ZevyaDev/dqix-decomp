#include <globaldefs.h>

extern "C" int RaiseTensionStage_0208767c(void*, int);

// USA: RaiseTension_02088208
extern "C" ARM int RaiseTension_02088208(void* stats, int random) {
    *(unsigned int*)((char*)stats + 0x14) |= 0x800000;
    return RaiseTensionStage_0208767c(stats, random);
}
