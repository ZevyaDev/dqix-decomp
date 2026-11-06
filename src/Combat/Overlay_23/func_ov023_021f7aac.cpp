#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);

struct PacEntry_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int dataOffset_40_;
    int dataSize_44_;
    int nextOffset_48_;
};
extern "C" void* GetPacEntryData_020467f0(struct PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);

struct PacEntry_02020cb8_4 {
    signed char unknown_0_;
    char unknown_1_[0x47];
    int nextOffset_48_;
};
extern "C" int CountPacEntries_02046900(struct PacEntry_02020cb8_4* pac);

struct BGLayer_0204af38;
extern "C" void AllocateBGScreenBlocks_0204af38(struct BGLayer_0204af38* layer, int capacity, SafeAllocator* allocator);

extern "C" void LoadBGBlock_0204b174(struct BGLayer_0204af38* layer, void* block, SafeAllocator* allocator, int arg3);

extern char data_ov023_021fe5f4[];

struct Struct_ov023_021f7688 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
};

// USA: func_ov023_021f7aac
extern "C" ARM void func_ov023_021f7aac(struct Struct_ov023_021f7688* arg0, void* arg1, struct PacEntry_02020aec* arg2, unsigned int arg3) {
#if defined(jpn)
 enum {Enum_ov023_021f7aac_40=0x24};
#else
 enum {Enum_ov023_021f7aac_40=0x28};
#endif
    if (arg2 == 0 || arg3 == 0) return;

    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (var0 == 0) return;

    int var1 = CountPacEntries_02046900((struct PacEntry_02020cb8_4*)arg2);
    int var2 = 0;
    int var3;
    for (var3 = 0; var3 < var1; var3++) {
        int var4;
        void* var5;
        GetPacEntryData_020467f0(arg2, var3, &var5, &var4);
        if (strstr((char*)var5, data_ov023_021fe5f4) != NULL) var2++;
    }

    if (var2 > 0) {
        AllocateBGScreenBlocks_0204af38((struct BGLayer_0204af38*)((char*)arg0 + Enum_ov023_021f7aac_40), (unsigned char)var2, (SafeAllocator*)((char*)var0 + 4));
    }

    int var6;
    for (var6 = 0; var6 < var1; var6++) {
        int var7;
        void* var8;
        void* var9 = GetPacEntryData_020467f0(arg2, var6, &var8, &var7);
        if (var9 != 0) {
            LoadBGBlock_0204b174((struct BGLayer_0204af38*)((char*)arg0 + Enum_ov023_021f7aac_40), var9, (SafeAllocator*)((char*)var0 + 4), var7);
        }
    }
}
