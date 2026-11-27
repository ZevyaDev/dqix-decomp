#include <globaldefs.h>

struct SortEntry_020749ac { int id_0_; float key_4_; };

// USA: QuickSortByKey_020749ac
extern "C" ARM void QuickSortByKey_020749ac(SortEntry_020749ac* entries, int first, int last, int isDescending) {
    int left = (int)(unsigned int)first;
    int right = last;
    float pivotKey = entries[left].key_4_;

    if (isDescending != 0) {
        for (;;) {
            while (entries[left].key_4_ > pivotKey) {
                left++;
            }
            while (entries[right].key_4_ < pivotKey) {
                right--;
            }
            if (left >= right) {
                break;
            }
            float leftKey = entries[left].key_4_;
            int leftId = entries[left].id_0_;
            entries[left].key_4_ = entries[right].key_4_;
            entries[left].id_0_ = entries[right].id_0_;
            entries[right].key_4_ = leftKey;
            entries[right].id_0_ = leftId;
            left++;
            right--;
        }
    } else {
        for (;;) {
            while (entries[left].key_4_ < pivotKey) {
                left++;
            }
            while (entries[right].key_4_ > pivotKey) {
                right--;
            }
            if (left >= right) {
                break;
            }
            float leftKey = entries[left].key_4_;
            int leftId = entries[left].id_0_;
            entries[left].key_4_ = entries[right].key_4_;
            entries[left].id_0_ = entries[right].id_0_;
            entries[right].key_4_ = leftKey;
            entries[right].id_0_ = leftId;
            left++;
            right--;
        }
    }

    if (first < left - 1) {
        QuickSortByKey_020749ac(entries, first, left - 1, isDescending);
    }
    if (right + 1 < last) {
        QuickSortByKey_020749ac(entries, right + 1, last, isDescending);
    }
}
