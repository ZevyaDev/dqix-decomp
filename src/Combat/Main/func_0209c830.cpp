#include <globaldefs.h>

struct MusicManager_02109bf4_2 {
    char unknown_0_[0xc9];
    unsigned char jingleState_c9_;
    char unknown_ca_[4];
    unsigned short jingleIndex_ce_;
};

// USA: QueueJingle_0209c830
extern "C" ARM void QueueJingle_0209c830(MusicManager_02109bf4_2* manager, int jingleIndex) {
    manager->jingleIndex_ce_ = jingleIndex;
    manager->jingleState_c9_ = 1;
}
