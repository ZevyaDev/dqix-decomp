#include <globaldefs.h>

extern void* gDialog_ov031_02290d10;

// USA: IsDialogOpen_ov031_02237eb0
extern "C" ARM bool IsDialogOpen_ov031_02237eb0() {
    return gDialog_ov031_02290d10 != NULL;
}
