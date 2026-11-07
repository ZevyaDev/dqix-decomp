#include <globaldefs.h>

struct BGControlSave_02074bf4 {
    char unknown_0_[0x11];
    unsigned char isSubSaved_11_;
};

extern "C" void func_02074e54(struct BGControlSave_02074bf4*);

// USA: RestoreSubBGControl_02074bf4
extern "C" ARM void RestoreSubBGControl_02074bf4(struct BGControlSave_02074bf4* save) {
    if (save->isSubSaved_11_) {
        func_02074e54(save);
        save->isSubSaved_11_ = 0;
    }
}
