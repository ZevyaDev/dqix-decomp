#include <globaldefs.h>

extern "C" void SetMusicVolume_0209c2e0(char* manager, unsigned char volume, unsigned short fadeDuration);
extern char gMusicManager_02109bf4;

struct Struct_ov025_021e8024 { char unknown_0_[8]; unsigned char unknown_8_; unsigned short unknown_a_; };

// USA: func_ov025_021e8024
extern "C" ARM int func_ov025_021e8024(struct Struct_ov025_021e8024* arg0) {
    SetMusicVolume_0209c2e0(&gMusicManager_02109bf4, arg0->unknown_8_, arg0->unknown_a_);
    return 1;
}
