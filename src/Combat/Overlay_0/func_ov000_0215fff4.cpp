#include <globaldefs.h>

// USA: GetTargetResult_ov000_0215fff4
extern "C" ARM void* GetTargetResult_ov000_0215fff4(void* target, int index, int listIndex) {
    unsigned char* shiftedTargetBytes = (unsigned char*)target + listIndex;
    if (shiftedTargetBytes[0x18] <= index) return 0;
    void* result = *(void**)((char*)target + listIndex * 4);
    int i = 0;
    while (i < index && result != 0) {
        result = *(void**)((char*)result + 0x20);
        i++;
    }
    return result;
}
