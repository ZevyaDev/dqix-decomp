#include <globaldefs.h>
#include "std_library_functions.h"

extern const char data_ov017_021d82d4[];

struct ScriptVM_ov017_021d4c04 {
    int unknown_0_;
    char unknown_4_[0xc - 0x4];
    int valueStackCapacity_c_;
    int pValueStack_10_;
    char unknown_14_[0x18 - 0x14];
    int pValueStackEnd_18_;
    int pGlobals_1c_;
    int callStackCapacity_20_;
    int pCallStack_24_;
    char unknown_28_[0x2c - 0x28];
    int pCallStackEnd_2c_;
    char unknown_30_[0x44 - 0x30];
    void* pScriptData_44_;
    void* pCode_48_;
};

// USA: InitScriptVM_ov017_021d4c04
extern "C" ARM void InitScriptVM_ov017_021d4c04(struct ScriptVM_ov017_021d4c04* scriptVM, void* scriptData, int valueStack, int valueStackCapacity, int callStack, int callStackCapacity) {
    scriptVM->pValueStack_10_ = valueStack;
    scriptVM->valueStackCapacity_c_ = valueStackCapacity;
    scriptVM->pCallStack_24_ = callStack;
    scriptVM->callStackCapacity_20_ = callStackCapacity;
    scriptVM->pValueStackEnd_18_ = scriptVM->pValueStack_10_ + (valueStackCapacity << 3);
    scriptVM->pCallStackEnd_2c_ = callStackCapacity * 0xc + scriptVM->pCallStack_24_;
    scriptVM->pScriptData_44_ = scriptData;
    scriptVM->pCode_48_ = (char*)scriptData + *(int*)((char*)scriptData + 8);
    if (strncmp((char*)scriptVM->pScriptData_44_, data_ov017_021d82d4, 3) != 0) return;
    scriptVM->unknown_0_ = 2;
    scriptVM->pGlobals_1c_ = scriptVM->pValueStack_10_;
    scriptVM->pValueStack_10_ = scriptVM->pValueStack_10_ + *(int*)((char*)scriptVM->pScriptData_44_ + 0x18) * 8;
    scriptVM->valueStackCapacity_c_ = scriptVM->valueStackCapacity_c_ - *(int*)((char*)scriptVM->pScriptData_44_ + 0x18);
    memset((void*)scriptVM->pGlobals_1c_, 0, *(int*)((char*)scriptVM->pScriptData_44_ + 0x18) * 8);
}
