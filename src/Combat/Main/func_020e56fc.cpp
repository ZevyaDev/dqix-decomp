#include <globaldefs.h>

extern "C" void func_020e53bc(void* arg0, int arg1, void* arg2, void* arg3);
struct Struct_020e5204;
extern "C" void func_020e5204(void*, struct Struct_020e5204*);

// USA: LoadNounTableInPlace_020e56fc
extern "C" ARM int LoadNounTableInPlace_020e56fc(void* nounTable, int fileData, int fileSize) {
    int var0;
    if (fileData == 0 || fileSize == 0) return 0;
    func_020e53bc(nounTable, fileData, &var0, (void*)func_020e5204);
    return 1;
}
