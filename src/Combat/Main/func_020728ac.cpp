#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_020f0cc8;

struct Struct_02108db0 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
extern struct Struct_02108db0 data_02108db0;

// USA: LoadStringList_020728ac
extern "C" ARM void LoadStringList_020728ac(int stringList, int allocator, struct Struct_02013fb4* scriptData, int scriptSize, int idFilter, unsigned short idFilterCount, unsigned char skippedStringCount) {
    char script[0x430];
    data_02108db0.unknown_10_ = stringList;
    data_02108db0.unknown_c_ = allocator;
    data_02108db0.unknown_8_ = idFilter;
    data_02108db0.unknown_2_ = idFilterCount;
    data_02108db0.unknown_4_ = 0;
    data_02108db0.unknown_0_ = skippedStringCount;
    ((Script*)((struct Struct_0201f040*)script))->Initialize();
    ((Script*)((struct Struct_0201f040*)script))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0cc8);
    ((Script*)((struct Struct_0201f040_2*)script))->Load(scriptData, scriptSize);
    ((Script*)((struct Struct_0201f040_3*)script))->Execute();
}
