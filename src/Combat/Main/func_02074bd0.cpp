#include <globaldefs.h>

struct BGControlSave_02074bd0 {
    char unknown_0_[0x10];
    unsigned char isMainSaved_10_;
};

extern "C" void func_02074c18(struct BGControlSave_02074bd0*);

// USA: RestoreMainBGControl_02074bd0
extern "C" ARM void RestoreMainBGControl_02074bd0(struct BGControlSave_02074bd0* save) {
    if (save->isMainSaved_10_) {
        func_02074c18(save);
        save->isMainSaved_10_ = 0;
    }
}
