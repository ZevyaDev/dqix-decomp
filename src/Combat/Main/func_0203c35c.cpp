#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

struct SpriteTextManager_0203c35c {
    #if defined(jpn)
    unsigned char unknown_0_[0x604];
    #else
    unsigned char unknown1_0_[0x504];
    #endif
    int isSubScreen_504_;
    int unknown_508_;
    unsigned int paletteOffset_50c_;
    #if defined(jpn)
    unsigned char unknown_610_[4];
    unsigned short paletteBuffer_614_[112];
    #endif
};
struct MessageWindow_0203c35c_2 {
    unsigned char unknown_0_[0x60];
    unsigned short* unknown_60_;
};
struct ColorScale_020e78c4 {
    float red_0_;
    float green_4_;
    float blue_8_;
};
#if defined(jpn)
extern SpriteTextManager_0203c35c* data_02105244;
#define data_020e78c4 data_020e8220
#define data_020e78b0 data_020e81ec
#define data_020e78a0 data_020e81dc
#else
extern "C" int GetMessageWindow_020421a0();
#endif
extern const ColorScale_020e78c4 data_020e78c4[7];
extern const float data_020e78b0[5];
extern const unsigned short data_020e78a0[7];

// USA: LoadSpriteTextPalettes_0203c35c
extern "C" ARM void LoadSpriteTextPalettes_0203c35c(SpriteTextManager_0203c35c* spriteTextManager) {
    unsigned short palette[16] __attribute__((aligned(4))) = {};
#if defined(jpn)
    unsigned short* palettes = data_02105244->paletteBuffer_614_;
#else
    unsigned short* palettes = ((MessageWindow_0203c35c_2*)GetMessageWindow_020421a0())->unknown_60_;
#endif
    unsigned int palettesSize = 0xe0;
    memset(palettes, 0, palettesSize);
    for (unsigned int i = 0; i < 7; i++) {
        palette[1] = 0x294a;
        if (i == 6) palette[1] = 0x18c6;
        for (int j = 0; j < 5; j++) {
            int red = (int)(data_020e78b0[j] * data_020e78c4[i].red_0_);
            int green = (int)(data_020e78b0[j] * data_020e78c4[i].green_4_);
            int blue = (int)(data_020e78b0[j] * data_020e78c4[i].blue_8_);
            red >>= 3;
            green >>= 3;
            blue >>= 3;
            palette[j + 2] = red | (green << 5) | (blue << 10);
        }
        palette[15] = data_020e78a0[i];
        memcpy(palettes + i * 16, palette, sizeof(palette));
    }
    CleanInvalidateCacheRange((const void*)(palettes), palettesSize);
    if (spriteTextManager->isSubScreen_504_ == 0) LoadToMainObjStandardPalette(palettes, spriteTextManager->paletteOffset_50c_, palettesSize);
    else if (spriteTextManager->isSubScreen_504_ == 1) LoadToSubObjStandardPalette(palettes, spriteTextManager->paletteOffset_50c_, palettesSize);
}
