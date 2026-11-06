#include <globaldefs.h>

extern "C" void QueuePartyMemberModelLoad_ov017_0218f5a4(void* gameResources, int memberIndex, int isForced, int useAlternateAnimationPackage, int isFullReload);

// USA: func_ov017_0218f758
extern "C" ARM void func_ov017_0218f758(void* arg0) {
    for (int var0 = 0; var0 < 4; var0++) {
        QueuePartyMemberModelLoad_ov017_0218f5a4(arg0, var0, 0, 0, 0);
    }
}
