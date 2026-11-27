#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02079e60_60 = 52 };
#else
enum { Enum_02079e60_60 = 60 };
#endif


typedef int (*Type_02079e2c)(void*);

struct Struct_02079e2c {
    unsigned int unknown_0_0_ : 12;
    char* unknown_4_;
};

// USA: BinarySearchActionTable_02079e60
extern "C" ARM void* BinarySearchActionTable_02079e60(struct Struct_02079e2c* actionTable, int key, Type_02079e2c getKey) {
    char* entries = actionTable->unknown_4_;
    int count;
    int low, high, mid, midKey;
    if (entries == 0 || getKey == 0) {
        return 0;
    }
    count = actionTable->unknown_0_0_;
    if (count == 0) {
        return 0;
    }
    low = 0;
    high = count - 1;
    while (low <= high) {
        mid = low + ((high - low + 1) >> 1);
        midKey = getKey(entries + mid * Enum_02079e60_60);
        if (midKey == key) {
            return entries + mid * Enum_02079e60_60;
        }
        if (midKey > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}
