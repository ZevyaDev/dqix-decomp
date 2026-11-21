#include <globaldefs.h>

extern char* gConnectionSettings_ov031_02290cfc;

// USA: GetEditedConnectionSettings_ov031_02235c70
extern "C" ARM char* GetEditedConnectionSettings_ov031_02235c70(void) {
    return gConnectionSettings_ov031_02290cfc + 0x400;
}
