#include <globaldefs.h>

struct ItemData_0201099c_9;
struct ItemTable_0201099c_10;
extern "C" ItemData_0201099c_9* FindItemData_020dedd0(ItemTable_0201099c_10*, int);

extern "C" void func_ov023_021dcba4(void*);

struct Struct_ov003_02178910 {
    char unknown_0_[0x48];
    ItemTable_0201099c_10* unknown_48_;
    ItemData_0201099c_9* unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x680];
#else
    char unknown1_50_[0x704];
#endif
    int unknown_754_;
    char unknown_758_[0x18];
    short unknown_770_;
    unsigned short unknown_772_;
    unsigned short unknown_774_;
    unsigned char unknown_776_;
};

// USA: func_ov023_021dcae0
extern "C" ARM void func_ov023_021dcae0(struct Struct_ov003_02178910* arg0, int arg1) {
    if (arg0->unknown_776_ == 0 || (arg0->unknown_774_ & 4) == 0) {
        arg0->unknown_772_ = arg1;
        if (arg0->unknown_754_ <= 0 || arg0->unknown_776_ == 0) {
            arg0->unknown_770_ = arg1;
            return;
        }
    }
    short var0 = arg0->unknown_770_;
    if (var0 == arg1) {
        if (arg0->unknown_48_ != NULL) {
            ItemData_0201099c_9* var1 = FindItemData_020dedd0(arg0->unknown_48_, var0);
            if (arg0->unknown_4c_ != var1) arg0->unknown_4c_ = var1;
        }
    } else {
        func_ov023_021dcba4(arg0);
    }
}
