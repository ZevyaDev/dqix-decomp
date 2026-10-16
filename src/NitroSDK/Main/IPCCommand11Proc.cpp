#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0f40
ARM void IPCCommand11Proc(unsigned int command, unsigned int argument, unsigned int flag)
{
    if (command != 11 || !flag)
        return;

    CardReadManager* manager = (CardReadManager*)&data_021118e0;

    ProcessorContext* context = manager->currentTaskExecutionContext;
    manager->flags &= ~(1 << READ_MANAGER_FLAG_AWAITING_ARM7_ACTION);

    MarkContextReadyAndSwitch(context);
}
