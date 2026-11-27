#include <globaldefs.h>

struct Struct_0203a974_2;
extern "C" int func_020bdac0(struct Struct_0203a974_2* arg0);
extern "C" void* SetCurrentSoundArchive_020bd42c(void*);
extern "C" int func_020bdcc4(void*, int, int);
extern "C" int func_020bdc98(void*, int);

// USA: LoadSequence_0203aaf8
extern "C" ARM int LoadSequence_0203aaf8(void* manager, void* sequenceIndex, int* heapState) {
    char* managerBytes = (char*)manager;
    if (*(void**)managerBytes == NULL) return 0;
    SetCurrentSoundArchive_020bd42c(managerBytes + 0x4);
    if (heapState != NULL) {
        func_020bdcc4(sequenceIndex, 3, *(int*)managerBytes);
        *heapState = func_020bdac0(*(struct Struct_0203a974_2**)managerBytes);
        func_020bdcc4(sequenceIndex, 4, *(int*)managerBytes);
    } else {
        func_020bdc98(sequenceIndex, *(int*)managerBytes);
    }
    return 1;
}
