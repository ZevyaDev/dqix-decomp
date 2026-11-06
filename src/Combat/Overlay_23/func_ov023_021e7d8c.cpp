#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021e7d8c func_ov023_021e7f74
#endif
#include <std_library_functions.h>

struct Struct_0205d81c;
struct MessageWindow_02021b84;

struct Struct_ov023_021e7d8c {
    char unknown_0_[0x78];
    char unknown_78_[0x5d8 - 0x78];
    char* unknown_5d8_;
};

typedef void (Struct_ov023_021e7d8c::*Type_ov023_021e7d8c)();

struct Struct_ov023_021fd7cc {
    Type_ov023_021e7d8c unknown_0_[3];
};

struct Struct_ov023_021e7d8c_2 {
    short unknown_0_[3];
};

#if defined(jpn)
struct Struct_ov023_021fd75c {
    char unknown_0_[0x8];
    Struct_ov023_021e7d8c_2 unknown_8_;
    char unknown_e_[0x18 - 0xe];
};

#define data_ov023_021fd75c data_ov023_021fd760
#define data_ov023_021fd7cc data_ov023_021fca50
#else
struct Struct_ov023_021fd75c {
    char unknown_0_[0x32];
    Struct_ov023_021e7d8c_2 unknown_32_;
    char unknown_38_[0x6c - 0x38];
};
#endif

extern Struct_ov023_021fd7cc data_ov023_021fd7cc;
extern Struct_ov023_021fd75c data_ov023_021fd75c;

extern "C" MessageWindow_02021b84* GetMessageWindow_020421a0();
extern "C" void func_0205deb4(Struct_0205d81c* arg0, int arg1, int arg2);

extern "C" {
void ClearMessageParams_02046380(MessageWindow_02021b84* window);
void func_ov023_021e7cec(Struct_ov023_021e7d8c* arg0, int arg1, short arg2, short arg3);
#if defined(jpn)
void func_0205d304(void* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
void func_0205d304(void* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
}

// USA: func_ov023_021e7d8c
// JPN: func_ov023_021e7f74
extern "C" ARM void func_ov023_021e7d8c(Struct_ov023_021e7d8c* arg0)
{
    MessageWindow_02021b84* var0 = GetMessageWindow_020421a0();
    Type_ov023_021e7d8c var1[3];
    *(Struct_ov023_021fd7cc*)var1 = data_ov023_021fd7cc;
    short var2[3];
#if defined(jpn)
    *(Struct_ov023_021e7d8c_2*)var2 = data_ov023_021fd75c.unknown_8_;
#else
    *(Struct_ov023_021e7d8c_2*)var2 = data_ov023_021fd75c.unknown_32_;
#endif
    for (unsigned char var3 = 0; var3 < 3; var3++)
    {
        ClearMessageParams_02046380(var0);
        func_ov023_021e7cec(arg0, var3, 2, var2[var3]);
#if defined(jpn)
        memset(arg0->unknown_5d8_, 0, 0x800);
#else
        memset(arg0->unknown_5d8_, 0, 0x960);
#endif
        (arg0->*var1[var3])();
#if defined(jpn)
        func_0205d304(arg0->unknown_78_, arg0->unknown_5d8_, 0, 0, 0, 1, 0);
#else
        func_0205d304(arg0->unknown_78_, arg0->unknown_5d8_, 0, 0, 0, 1, 0, 0);
#endif
    }
    for (int var4 = 0; var4 < 3; var4++)
        func_0205deb4((Struct_0205d81c*)arg0->unknown_78_, (unsigned char)var4, 0);
}
