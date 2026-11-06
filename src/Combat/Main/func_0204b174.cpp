#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int CompareBytes_02001aec(void* left, void* right, int count);

struct Struct_0204a848;
struct Struct_0204acdc;
struct Struct_0204aa64;

typedef void (*Type_0204b174)(const void*, int, unsigned int);

extern "C" int func_0204a848(Struct_0204a848* arg0, Type_0204b174 arg1, unsigned char* arg2, void* arg3);
extern "C" int func_0204acdc(Struct_0204acdc* arg0, void* arg1, unsigned char* arg2, SafeAllocator* arg3);
extern "C" int func_0204aa64(Struct_0204aa64* arg0, Type_0204b174 arg1, unsigned char* arg2, void* arg3);

extern char data_020f0238;
extern char data_020f023d;
extern char data_020f0242;
extern int data_020f01f8[][4];
extern Type_0204b174 data_020f01b0[];
extern int data_020f0218[][4];

struct BGLayer_0204b174 {
    unsigned char unknown_0_[0x10];
    Struct_0204acdc* pScreenBlocks_10_;
    unsigned char unknown_14_[8];
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
    unsigned char screenBlockCount_1d_;
    unsigned char screenBlockCapacity_1e_;
};

// USA: LoadBGBlock_0204b174
extern "C" ARM int LoadBGBlock_0204b174(struct BGLayer_0204b174* layer, char* block, Type_0204b174 allocator) {
    char tag[5];

    if (block == 0) {
        return 1;
    }

    __clear(tag, 5);
    memcpy(tag, block, 5);

    if (CompareBytes_02001aec(tag, &data_020f0238, 4) == 0) {
        Type_0204b174 characterDataLoader = (Type_0204b174)data_020f01f8[layer->isSubScreen_1c_0_][layer->bgIndex_1c_4_];
        return func_0204a848((Struct_0204a848*)layer, characterDataLoader, (unsigned char*)block, (void*)allocator);
    }

    if (CompareBytes_02001aec(tag, &data_020f023d, 4) == 0) {
        Type_0204b174 paletteLoader = data_020f01b0[layer->isSubScreen_1c_0_];
        return func_0204aa64((Struct_0204aa64*)((char*)layer + 0xc), paletteLoader, (unsigned char*)block, (void*)allocator);
    }

    if (CompareBytes_02001aec(tag, &data_020f0242, 4) == 0) {
        if (layer->pScreenBlocks_10_ != 0) {
            if (layer->screenBlockCapacity_1e_ <= layer->screenBlockCount_1d_) {
                return 1;
            }
            int status = func_0204acdc((Struct_0204acdc*)((char*)layer->pScreenBlocks_10_ + layer->screenBlockCount_1d_ * 0x10),
                                           (void*)(Type_0204b174)data_020f0218[layer->isSubScreen_1c_0_][layer->bgIndex_1c_4_],
                                           (unsigned char*)block, (SafeAllocator*)allocator);
            if (status != 0) {
                return 1;
            }
            layer->screenBlockCount_1d_ = layer->screenBlockCount_1d_ + 1;
            return 0;
        }
    }

    return 1;
}