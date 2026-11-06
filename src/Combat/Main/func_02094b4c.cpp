#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" int func_02046708(void*, unsigned int);
extern "C" void* _ZN16BackgroundLoader11GetInstanceEv(void);
extern "C" void _ZN16BackgroundLoader10RemoveTaskEi(void*, int);

typedef void (FontLoader_0208cb08::*Type_0200f3a4_5)(void);
extern unsigned int data_02109400;
extern Type_0200f3a4_5 data_020e6d5c;
extern Type_0200f3a4_5 data_020f148c[2];
extern Type_0200f3a4_5 data_020f148c_dup[2];
#endif

// USA: UpdateFontLoad_02094b4c
extern "C" ARM int UpdateFontLoad_02094b4c(FontLoader_0208cb08* loader) {
#if defined(jpn)
    if (loader->requestedFontSetId_34_ < 0) return 1;
    if (func_02046708(GetGlobalFlags_020d6c00(), 0x10)) {
        void* backgroundLoader = _ZN16BackgroundLoader11GetInstanceEv();
        for (unsigned char i = 0; i < 8; ++i) {
            if (loader->loadTaskIds_14_[i] >= 0) {
                _ZN16BackgroundLoader10RemoveTaskEi(backgroundLoader, loader->loadTaskIds_14_[i]);
                loader->loadTaskIds_14_[i] = -1;
            }
        }
        loader->loadState_56_ = 0;
        loader->unknown_57_ = 0;
        return 0;
    }
    if (!(data_02109400 & 1)) {
        data_020f148c[1] = data_020e6d5c;
        data_02109400 |= 1;
    }
    if (!data_020f148c_dup[loader->loadState_56_]) return 1;
    (loader->*data_020f148c_dup[loader->loadState_56_])();
    return 0;
#else
    return 1;
#endif
}
