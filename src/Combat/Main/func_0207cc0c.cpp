#include <globaldefs.h>

extern "C" void ResetItemContext_0207cbe8(char* itemContext);

// USA: DestroyItemContext_0207cc0c
extern "C" ARM void DestroyItemContext_0207cc0c(char* itemContext) {
    ResetItemContext_0207cbe8(itemContext);
}
