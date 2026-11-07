#include "Combat/Main/ElementLookup.h"
#include <globaldefs.h>

// USA: GetZoneList_02011584
extern "C" ARM void *GetZoneList_02011584(void *gameState) {
    return (char *) gameState + 0x468;
}
