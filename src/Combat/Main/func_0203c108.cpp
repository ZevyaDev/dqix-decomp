#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
#if !defined(jpn)
extern "C" void func_0203c5a8(void* arg0, void* arg1, short* arg2);
#endif
extern void* data_02105244;

extern "C" void func_0203c198(char* arg0);

struct Struct_0203c108;
extern "C" void func_0203c6b8(struct Struct_0203c108* arg0, short arg1);

struct Struct_0203c108_2;
#if defined(jpn)
extern "C" void func_0203cbe4(struct Struct_0203c108_2* arg0, const short* arg1);
#else
extern "C" void func_0203c6fc(struct Struct_0203c108_2* arg0, short arg1);
#endif

#if defined(jpn)
extern "C" void func_0203cb58(void*, void*);
extern "C" void func_0203bf00(void*, char*, void*, int);
extern "C" void func_0203c5a8(void*, void*, void*, int);
#endif
struct Struct_0203c108_3 {
    char unknown_0_[0x14];
    short unknown_14_;
};

// USA: SetSpriteText_0203c108
extern "C" ARM void SetSpriteText_0203c108(struct Struct_0203c108_3* spriteText, char* text) {
    if (data_02105244 != NULL && text != NULL && *text != 0) {
#if defined(jpn)
        char oldSlots[0x14];
        char convertedText[0x80];
        memcpy(oldSlots, spriteText, 0x14);
        func_0203cb58(data_02105244, oldSlots);
        func_0203c198((char*)spriteText);
        __clear(convertedText, 0x80);
        func_0203bf00(spriteText, text, convertedText, 10);
        *(int*)((char*)spriteText + 0x20) = 10;
        func_0203c5a8(data_02105244, convertedText, spriteText, 10);
        func_0203cbe4(static_cast<Struct_0203c108_2*>(data_02105244),
                               reinterpret_cast<const short*>(oldSlots));
#else
        char formattedText[0x100];
        __clear(formattedText, 0x100);
        sprintf(formattedText, text);
        short oldSlot = spriteText->unknown_14_;
        func_0203c6b8((struct Struct_0203c108*)data_02105244, oldSlot);
        func_0203c198((char*)spriteText);
        func_0203c5a8(data_02105244, formattedText, &spriteText->unknown_14_);
        func_0203c6fc((struct Struct_0203c108_2*)data_02105244, oldSlot);
#endif
    }
}
