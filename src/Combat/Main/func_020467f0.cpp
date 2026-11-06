#include <globaldefs.h>

struct PacEntry_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int dataOffset_40_;
    int dataSize_44_;
    int nextOffset_48_;
};

// USA: GetPacEntryData_020467f0
extern "C" ARM void* GetPacEntryData_020467f0(struct PacEntry_02020aec* pac, int index, void** outEntry, int* outSize) {
    int i;
    if (pac == NULL) return NULL;
    i = 0;
    while (pac->unknown_0_ != 0) {
        if (index == i) {
            int dataOffset = pac->dataOffset_40_;
            if (outSize != NULL) *outSize = pac->dataSize_44_;
            *outEntry = pac;
            return (char*)pac + dataOffset;
        }
        pac = (struct PacEntry_02020aec*)((char*)pac + pac->nextOffset_48_);
        i++;
    }
    return NULL;
}
