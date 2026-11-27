#include <globaldefs.h>

struct Struct_02029634_2 {
    char unknown_0_[0x34];
    struct Struct_02029634_2* unknown_34_;
};

struct Struct_02029634 {
    char unknown_0_[0x44];
    struct Struct_02029634_2* unknown_44_;
    char unknown_48_[0x12];
    unsigned short unknown_5a_;
};

// USA: GetTextMenuEntry_0202a9ac
extern "C" ARM struct Struct_02029634_2* GetTextMenuEntry_0202a9ac(struct Struct_02029634* menu, int index) {
    struct Struct_02029634_2* entry;
    int i;
    if (index < 0 || menu->unknown_5a_ <= index) {
        return 0;
    }
    entry = menu->unknown_44_;
    for (i = 0; i < index; i++) {
        if (entry == 0) {
            return 0;
        }
        entry = entry->unknown_34_;
    }
    return entry;
}
