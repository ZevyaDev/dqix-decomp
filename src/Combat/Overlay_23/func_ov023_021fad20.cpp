#include <globaldefs.h>
#include "Filesystem/FileIO.h"
#include "Resource/PAC.h"

struct PacEntry_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int dataOffset_40_;
    int dataSize_44_;
    int nextOffset_48_;
};


// USA: func_ov023_021fad20
extern "C" ARM int func_ov023_021fad20(const void* arg0, const char* arg1, const void** arg2, unsigned int* arg3) {
    if (FindFilesInNarcBySubstring(arg0, arg1, arg2, arg3, 1) != 0) {
        return 1;
    }
    return GetFilesInPACByExtension((void*)((struct PacEntry_02020aec*)arg0), (const char*)(arg1), (void**)((void**)arg2), 1, (unsigned int*)((int*)arg3), (const char**)(NULL)) != 0;
}
