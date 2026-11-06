#include <globaldefs.h>

struct BACTCommand_ov000_02169b2c {
    char unknown_0_[4];
    struct BACTCommand_ov000_02169b2c* pNext_4_;
};

// USA: func_ov000_02169b2c
extern "C" ARM void func_ov000_02169b2c(struct BACTCommand_ov000_02169b2c* arg0, struct BACTCommand_ov000_02169b2c* arg1) {
    if (arg0->pNext_4_ == NULL) {
        arg0->pNext_4_ = arg1;
        arg1->pNext_4_ = NULL;
        return;
    }
    func_ov000_02169b2c(arg0->pNext_4_, arg1);
}
