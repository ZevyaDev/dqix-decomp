#include <globaldefs.h>
#include "std_library_functions.h"

struct ScriptEntry_ov017_021d4ce4_3 {
    int id_0_;
    int functionOffset_4_;
};
struct ScriptHeader_ov017_021d4ce4 {
    int unknown_0_;
    int defaultFunctionOffset_4_;
    int unknown_8_;
    int entryTableOffset_c_;
    int entryCount_10_;
};
struct ScriptFunction_ov017_021d4ce4_2 {
    int codeOffset_0_;
    int unknown_4_;
    int frameSlotCount_8_;
    int argCount_c_;
};

extern "C" void func_ov017_021d4e38(void* arg0, int arg1);

// USA: StartScriptEntry_ov017_021d4ce4
extern "C" ARM int StartScriptEntry_ov017_021d4ce4(void* scriptVM, int entryId) {
    unsigned char* scriptVMBytes = (unsigned char*)scriptVM;
    if (*(struct ScriptHeader_ov017_021d4ce4**)(scriptVMBytes + 0x44) == NULL) {
        return -1;
    }

    *(int*)(scriptVMBytes + 0x14) = *(int*)(scriptVMBytes + 0x10);
    *(int*)(scriptVMBytes + 0x28) = *(int*)(scriptVMBytes + 0x24);
    *(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34) = NULL;

    if (entryId < 0) {
        struct ScriptHeader_ov017_021d4ce4* header = *(struct ScriptHeader_ov017_021d4ce4**)(scriptVMBytes + 0x44);
        *(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34) = (struct ScriptFunction_ov017_021d4ce4_2*)((char*)header + header->defaultFunctionOffset_4_);
    } else {
        struct ScriptEntry_ov017_021d4ce4_3* entry;
        int i;
        struct ScriptHeader_ov017_021d4ce4* header = *(struct ScriptHeader_ov017_021d4ce4**)(scriptVMBytes + 0x44);
        entry = (struct ScriptEntry_ov017_021d4ce4_3*)((char*)header + header->entryTableOffset_c_);
        for (i = 0; i < header->entryCount_10_; i++, entry++) {
            if (entry->id_0_ == entryId) {
                *(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34) = (struct ScriptFunction_ov017_021d4ce4_2*)((char*)header + entry->functionOffset_4_);
                break;
            }
        }
    }

    if (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34) == NULL) {
        return -1;
    }

    int frame = *(int*)(scriptVMBytes + 0x14) - (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->argCount_c_ * 8;
    *(int*)(scriptVMBytes + 0x30) = frame;
    *(int*)(scriptVMBytes + 0x14) = frame + (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->frameSlotCount_8_ * 8;

    int locals = *(int*)(scriptVMBytes + 0x30) + (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->argCount_c_ * 8;
    int localsSize = ((*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->frameSlotCount_8_ - (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->argCount_c_) * 8;
    memset((void*)locals, 0, localsSize);

    int code = *(int*)(scriptVMBytes + 0x48) + (*(struct ScriptFunction_ov017_021d4ce4_2**)(scriptVMBytes + 0x34))->codeOffset_0_;
    *(int*)(scriptVMBytes + 0x3c) = 0;
    *(int*)(scriptVMBytes + 0x40) = 0;
    *(int*)(scriptVMBytes + 0x50) = 0;

    func_ov017_021d4e38(scriptVMBytes, code);

    return (*(int*)(scriptVMBytes + 0x3c) == 0) ? 1 : 0;
}
