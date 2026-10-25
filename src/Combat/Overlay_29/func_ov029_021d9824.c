#include <globaldefs.h>

// One entry of the tables the overlay's __sinit stubs hand to func_ov029_021d9824. Both words are stored offset:
// start is the address of an encoded function plus 0x1200, size its length in bytes plus 0x1200 plus the address
// of data_ov029_021da8e0. A zero start ends the table.
typedef struct {
    unsigned int start;
    unsigned int size;
} Struct_ov029_021d9824;

extern unsigned int data_ov029_021da8e0;

void func_ov029_021d97c0(void* arg0, unsigned int arg1);
int func_ov029_021d97e8(unsigned int arg0);

// USA: func_ov029_021d9824
// DS Protect 1.26: decodes every function in the table in place, then flushes it from the caches. Each word is
// decoded by its kind (func_ov029_021d97e8): B and BLX <label> get their link bit flipped and 0x482 taken off their
// offset; every other word, BL after the same flip, is XORed with a key. The key starts at 0xf03852cb for each
// function and moves on from every decoded word, kept to 24 bits.
ARM void func_ov029_021d9824(Struct_ov029_021d9824* arg0) {
    unsigned int* word;
    unsigned int size;
    unsigned int* end;
    unsigned int key;

    if (arg0 == NULL || arg0->start == 0) {
        return;
    }
    do {
        key = 0xf03852cb;
        word = (unsigned int*)arg0->start;
        size = arg0->size - (unsigned int)&data_ov029_021da8e0 - 0x1200;
        // The loop condition has already checked start; the ROM tests it once more here.
        if (word == NULL) {
            break;
        }
        word = (unsigned int*)((unsigned char*)word - 0x1200);
        end = word + size / 4;
        for (; word < end; word++) {
            switch (func_ov029_021d97e8(*word)) {
            case 1: // BLX <label>
            case 3: // B
                *word = ((*word & 0xff000000) ^ 0x01000000) | (((*word & 0x00ffffff) - 0x482) & 0x00ffffff);
                key = (key ^ *word >> 24) & 0x00ffffff;
                break;
            case 2: // BL
                *word ^= 0x01000000;
                // fall through
            default:
                *word ^= key;
                key = (key ^ *word ^ *word >> 8) & 0x00ffffff;
                break;
            }
        }
        func_ov029_021d97c0((void*)(arg0->start - 0x1200), size);
        arg0++;
    } while (arg0->start != 0);
}
