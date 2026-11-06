#include <globaldefs.h>
#include "Filesystem/FileIO.h"

struct PacEntry_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int dataOffset_40_;
    int dataSize_44_;
    int nextOffset_48_;
};

extern "C" int func_0204684c(struct PacEntry_02020aec* arg0, const char* arg1, void** arg2, int arg3, int* arg4, void** arg5);

// USA: func_ov023_021fad20
extern "C" ARM int func_ov023_021fad20(const void* arg0, const char* arg1, const void** arg2, unsigned int* arg3) {
    if (FindFilesInNarcBySubstring(arg0, arg1, arg2, arg3, 1) != 0) {
        return 1;
    }
    return func_0204684c((struct PacEntry_02020aec*)arg0, arg1, (void**)arg2, 1, (int*)arg3, NULL) != 0;
}
