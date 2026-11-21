#include <globaldefs.h>
#include "Combat/ActorAction.h"

// USA: GetLadderAction_020399a8
extern "C" ARM LadderAction_02037d10* GetLadderAction_020399a8(void* object) {
#if defined(jpn)
    return (LadderAction_02037d10*)((char*)object + 0x260);
#else
    return (LadderAction_02037d10*)((char*)object + 0x26c);
#endif
}
