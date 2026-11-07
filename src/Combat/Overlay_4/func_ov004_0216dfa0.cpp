#include <globaldefs.h>

struct MusicManager_02109bf4_2;
extern "C" void QueueJingle_0209c830(MusicManager_02109bf4_2*, int);

extern struct MusicManager_02109bf4_2 gMusicManager_02109bf4;

// USA: func_ov004_0216dfa0
extern "C" ARM int func_ov004_0216dfa0(void) {
    QueueJingle_0209c830(&gMusicManager_02109bf4, 0x35);
    return 0;
}
