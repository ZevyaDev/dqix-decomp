#include <globaldefs.h>

extern "C" void func_020c99c8(void* arg0);

struct Struct_02000c9c_8 { unsigned char unknown_0_[5]; unsigned char language_5_; };

// USA: GetGameLanguage_0200fb08
// EUR: GetGameLanguage_0200fb08
extern "C" ARM unsigned char GetGameLanguage_0200fb08(Struct_02000c9c_8* gameState) {
    unsigned char userSettings[0x54];
    unsigned char language;
    func_020c99c8(userSettings);
    language = userSettings[0];
    gameState->language_5_ = language;
#if defined(eur)
    if (language != 2 && language != 3 && language != 4 && language != 5) gameState->language_5_ = 1;
#else
    if (language != 2 && language != 5) gameState->language_5_ = 1;
#endif
    return gameState->language_5_;
}
