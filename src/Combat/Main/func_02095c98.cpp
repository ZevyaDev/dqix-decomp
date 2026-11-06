#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" unsigned char func_02095384(int arg0, unsigned char arg1, int* arg2);
extern "C" void func_02095d18(FontLoader_0208cb08* arg0);

// JPN: func_02095c98
extern "C" ARM void func_02095c98(FontLoader_0208cb08* arg0) {
    if (arg0->unknown_57_ == 0) {
        BackgroundLoader::GetInstance();
        int* var0 = &arg0->requestedFontSetId_34_;
        if (var0[0] == -1 && var0[1] == -1) return;
        arg0->unknown_54_ = func_02095384(arg0->requestedFontSetId_34_, arg0->unknown_61_, arg0->loadTaskIds_14_);
        arg0->unknown_55_ = func_02095384(arg0->nextRequestedFontSetId_38_, arg0->unknown_62_, &arg0->loadTaskIds_14_[arg0->unknown_54_]);
        arg0->unknown_57_++;
    } else if (arg0->unknown_57_ == 1) {
        func_02095d18(arg0);
    }
}
#endif
