#include <globaldefs.h>

extern "C" void QueuePartyMemberModelLoad_ov017_0218f5a4(void* gameResources, int memberIndex, int isForced, int useAlternateAnimationPackage, int isFullReload);

// USA: QueueAllPartyMemberModelLoads_ov017_0218f758
extern "C" ARM void QueueAllPartyMemberModelLoads_ov017_0218f758(void* gameResources) {
    for (int i = 0; i < 4; i++) {
        QueuePartyMemberModelLoad_ov017_0218f5a4(gameResources, i, 0, 0, 0);
    }
}
