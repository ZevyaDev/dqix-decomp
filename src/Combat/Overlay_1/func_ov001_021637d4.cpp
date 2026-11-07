#include <globaldefs.h>

struct Struct_02109bf4_3;
extern "C" void ResetMusic_0209c20c(struct Struct_02109bf4_3* manager);

extern struct Struct_02109bf4_3 gMusicManager_02109bf4;

// USA: func_ov001_021637d4
extern "C" ARM int func_ov001_021637d4(void) {
    ResetMusic_0209c20c(&gMusicManager_02109bf4);
    return 1;
}
