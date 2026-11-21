#include <globaldefs.h>
#include "Graphics/BGLayer.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/StringList.h"

struct StringTable_0201099c_14;

struct Struct_0208b9a0;
extern "C" ARM void func_0208d82c(struct Struct_0208b9a0*);

struct BGLayer_02020cb8;


// USA: ResetQuestDisplay_0208b9a0
extern "C" ARM void ResetQuestDisplay_0208b9a0(char* display, unsigned char arg1) {
    *(int*)(display + 0x0) = 0;
    ((StringList*)((struct StringTable_0201099c_14*)(display + 0x4)))->Reset();
    func_0208d82c((struct Struct_0208b9a0*)(display + 0x1c));
    *(unsigned char*)(display + 0x3c) = 0;
    *(unsigned char*)(display + 0x3d) = 0;
    ((BGLayer*)((struct BGLayer_02020cb8*)(display + 0x40)))->Reset();
    ((OBJSpriteSet*)(display + 0x60))->Reset();
    *(int*)(display + 0xb4) = 0;
    *(int*)(display + 0xb8) = (*(volatile unsigned int*)0x04001000 & 0x1f00) >> 8;
    *(int*)(display + 0xbc) = -1;
    *(int*)(display + 0xc0) = -1;
    *(float*)(display + 0xcc) = 1.0f;
    *(int*)(display + 0xc8) = 0;
    *(short*)(display + 0xd2) = -1;
    *(unsigned char*)(display + 0xd4) = 0;
    *(unsigned char*)(display + 0xd5) = 0;
    *(unsigned char*)(display + 0xd6) = 0;
    *(unsigned char*)(display + 0xd7) = 0;
    *(unsigned char*)(display + 0xd8) = 1;
    *(unsigned char*)(display + 0xd9) = 0;
    *(short*)(display + 0xda) = 0;
    *(unsigned char*)(display + 0xdc) = 1;
    *(unsigned char*)(display + 0xdd) = 0;
    *(unsigned char*)(display + 0xde) = 0;
    *(unsigned char*)(display + 0xdf) = arg1;
    *(unsigned char*)(display + 0xe0) = 0;
}
