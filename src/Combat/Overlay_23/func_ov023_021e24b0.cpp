#include <globaldefs.h>

extern "C" void* func_ov023_021e2418(void*, int);

struct LayoutElement_ov023_021e24b0 {
    char unknown_0_[3];
    unsigned char fontSize_3_0_ : 4;
    unsigned char colorIndex_3_4_ : 4;
    char unknown_4_[8];
    int number_c_;
    unsigned char digitCount_10_0_ : 4;
    unsigned char isRightAligned_10_4_ : 1;
    unsigned char hasPlusSign_10_5_ : 1;
    unsigned char isZeroPadded_10_6_ : 1;
    unsigned char unknown_10_7_ : 1;
};

// USA: SetLayoutGroupNumber_ov023_021e24b0
extern "C" ARM void SetLayoutGroupNumber_ov023_021e24b0(void* layout, int groupId, int number, unsigned char fontSize, unsigned char colorIndex, unsigned char isRightAligned, unsigned char digitCount, unsigned char hasPlusSign, unsigned char isZeroPadded) {
    LayoutElement_ov023_021e24b0* element = (LayoutElement_ov023_021e24b0*)func_ov023_021e2418(layout, groupId);
    if (!element) return;
    element->number_c_ = number;
    element->fontSize_3_0_ = fontSize;
    element->colorIndex_3_4_ = colorIndex;
    element->isRightAligned_10_4_ = isRightAligned;
    element->digitCount_10_0_ = digitCount;
    element->hasPlusSign_10_5_ = hasPlusSign;
    element->isZeroPadded_10_6_ = isZeroPadded;
}
