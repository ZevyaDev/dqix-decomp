#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

extern ActionTables_02108e10 data_02108e10;

// USA: GetActionTables_020797dc
extern "C" ARM ActionTables_02108e10* GetActionTables_020797dc(void) {
    return &data_02108e10;
}
