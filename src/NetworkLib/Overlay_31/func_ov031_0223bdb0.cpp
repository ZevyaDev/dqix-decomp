#include <globaldefs.h>
#include <NitroSDK/Graphics3D/Internal.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

#if defined(jpn)
#define func_020ca3ec func_020cbeb8
#endif




struct SpriteDefinition_ov031_0223bdb0 {
    unsigned short entryCount_0_;
    unsigned short unknown_2_;
    unsigned int entriesOffset_4_;
};
struct OAMEntry_ov031_0223bdb0_2 {
    unsigned short unknown_0_[3];
    unsigned short unknown_6_;
};
extern SpriteDefinition_ov031_0223bdb0* data_ov031_02290d2c[];
extern "C" void Memcpy16Bit_020ca3b8(const void* arg0, void* arg1, unsigned int arg2);

// USA: CopySpriteOAMEntries_ov031_0223bdb0
extern "C" ARM void CopySpriteOAMEntries_ov031_0223bdb0(int isSubScreen, int spriteId, void* oamEntries) {
    SpriteDefinition_ov031_0223bdb0* definitions = data_ov031_02290d2c[isSubScreen];
    const unsigned char* source = (const unsigned char*)definitions + definitions[spriteId].entriesOffset_4_;
    int entryCount = definitions[spriteId].entryCount_0_;
    OAMEntry_ov031_0223bdb0_2 entry;
    func_020ca3ec(0, &entry, sizeof(entry));
    OAMEntry_ov031_0223bdb0_2* destination = (OAMEntry_ov031_0223bdb0_2*)oamEntries;
    int i = 0;
    if (entryCount <= 0) {
        return;
    }
    do {
        Memcpy16Bit_020ca3b8(source, &entry, 6);
        func_020ca408(&entry, destination, sizeof(entry));
        i++;
        source += 6;
        destination++;
    } while (i < entryCount);
}
