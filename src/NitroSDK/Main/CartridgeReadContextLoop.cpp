#include "Filesystem/FSInnerDefs.h"
#include "System/Interrupts.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0f74
ARM void CartridgeReadContextLoop()
{
    CardReadManager* readManager = &data_021118e0;
    while (true)
    {
        int priorState = DisableIRQInterrupts();
        if (!(readManager->flags & (1 << READ_MANAGER_FLAG_CONTEXT_HAS_TASK_PENDING)))
        {
            do {
                BlockCurrentContext(NULL);
            } while (!(readManager->flags & (1 << READ_MANAGER_FLAG_CONTEXT_HAS_TASK_PENDING)));
        }
        SetIRQInterruptState(priorState);
        readManager->cartridgeReadProc(readManager);
    }
}
