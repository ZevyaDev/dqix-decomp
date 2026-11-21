#include <globaldefs.h>

extern "C" void func_ov023_021db2e4(volatile int* arg0);

#if defined(jpn)
enum { Enum_ov023_021dca88_1844 = 0x6b0, Enum_ov023_021dca88_1848 = 0x6b4, Enum_ov023_021dca88_1910 = 0x6f2, Enum_ov023_021dca88_1779 = 0x6f3 };
#else
enum { Enum_ov023_021dca88_1844 = 0x734, Enum_ov023_021dca88_1848 = 0x738, Enum_ov023_021dca88_1910 = 0x776, Enum_ov023_021dca88_1911 = 0x777 };
#endif

struct ItemInfoPanel_ov023_021dca88 {
    unsigned char unknown_0_[Enum_ov023_021dca88_1844];
    int loadTaskId_734_;
    int loadTaskIds_738_[7];
    unsigned char unknown_754_[Enum_ov023_021dca88_1910 - Enum_ov023_021dca88_1848 - 7 * sizeof(int)];
    unsigned char state_776_;
    unsigned char step_777_;
};

// USA: CloseItemInfoPanel_ov023_021dca88
extern "C" ARM void CloseItemInfoPanel_ov023_021dca88(void* panel) {
    ItemInfoPanel_ov023_021dca88* itemInfoPanel = (ItemInfoPanel_ov023_021dca88*)panel;
    if (itemInfoPanel->state_776_ == 2) return;
    func_ov023_021db2e4(&itemInfoPanel->loadTaskId_734_);
    for (int i = 0; i < 7; i++) {
        func_ov023_021db2e4(&itemInfoPanel->loadTaskIds_738_[i]);
    }
    itemInfoPanel->state_776_ = 2;
    itemInfoPanel->step_777_ = 0;
}
