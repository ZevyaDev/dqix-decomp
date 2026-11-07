#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020dfbdc {
    int unknown_0_;
    int unknown_4_;
};
extern "C" int func_020dfbdc(void* arg0, struct Struct_020dfbdc* arg1);

extern "C" void* func_020e0280(void* arg0, void* arg1, void* arg2, void* arg3);

struct Struct_0201099c_3 {
    unsigned int unknown_0_[3];
};
extern "C" int func_020e0440(struct Struct_0201099c_3* arg0, int arg1);

// USA: CopyStringFromTableFile_020e046c
extern "C" ARM char* CopyStringFromTableFile_020e046c(char* buffer, void* fileData, void* fileSize, int stringId) {
    struct Struct_0201099c_3 stringTable;
    int var1;
    char* text;
    if (buffer == NULL || fileData == NULL || fileSize == NULL || stringId < 0) return NULL;
    memset(&stringTable, 0, sizeof(stringTable));
    func_020e0280(&stringTable, fileData, &var1, (void*)func_020dfbdc);
    text = (char*)func_020e0440(&stringTable, stringId);
    if (text == NULL) {
        buffer[0] = 0;
        return NULL;
    }
    strcpy(buffer, text);
    return buffer;
}
