#include <globaldefs.h>

struct BACTCommand_ov000_02169b2c {
    char unknown_0_[4];
    struct BACTCommand_ov000_02169b2c* pNext_4_;
};

// USA: AppendToBACTCommandChain_ov000_02169b2c
extern "C" ARM void AppendToBACTCommandChain_ov000_02169b2c(struct BACTCommand_ov000_02169b2c* chain, struct BACTCommand_ov000_02169b2c* command) {
    if (chain->pNext_4_ == NULL) {
        chain->pNext_4_ = command;
        command->pNext_4_ = NULL;
        return;
    }
    AppendToBACTCommandChain_ov000_02169b2c(chain->pNext_4_, command);
}
