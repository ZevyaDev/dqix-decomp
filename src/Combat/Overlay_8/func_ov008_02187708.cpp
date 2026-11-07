#include <globaldefs.h>
#include <Memory/SafeAllocator.h>
#include <World/Object3D.h>
#include <Filesystem/BackgroundLoader.h>

#if defined(jpn)
#include <Filesystem/FileIO.h>
struct Struct_ov008_02187278 {
    char unknown_0_[0x14];
    short unknown_14_;
    unsigned char unknown_16_0_ : 1;
};

struct Struct_ov008_021842a0_2 {
    char unknown_0_[0xa0];
    char unknown_a0_[0x18];
    char unknown_b8_[0xb2c - 0xb8];
    const void* unknown_b2c_;
    Struct_ov008_02187278* unknown_b30_;
    void* unknown_b34_;
    void* unknown_b38_;
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    char unknown_49d_[0x8b8 - 0x49d];
    int unknown_8b8_;
};

struct GameObject {
    char unknown_0_[0x134];
    void* unknown_134_;
    char unknown_138_[0x144 - 0x138];
    Struct_ov005_0215840c_2* unknown_144_;
};

struct GameState {
    static GameState* GetInstance();
    GameObject* GetProtagonist();
};

struct Struct_ov008_02187708 {
    unsigned int unknown_0_0_ : 19;
    int unknown_2_3_ : 11;
    unsigned int unknown_3_6_ : 2;
};

static inline char* inline_ov008_02187708(GameState* arg0)
{
    return (char*)arg0 + 0x543c;
}

struct MessageWindow_02021b84;
struct Struct_ov008_021843f8_2;
struct StringList_020727d8;
struct Struct_0201099c_3;
struct StringList_02072a68_2;
struct Struct_02013fb4;

struct Struct_ov008_02185dc0 {
    int unknown_0_[2];
};

extern char data_ov008_0218c0d5[];
extern char data_ov008_0218c0fc[];

extern "C" MessageWindow_02021b84* GetMessageWindow_020421a0();
extern "C" void ResetStringList_020727d8(StringList_020727d8* stringList);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
extern "C" void func_02072928(void* arg0, Struct_02013fb4* arg1, int arg2, int arg3, void* arg4, unsigned char arg5);
extern "C" void SetMessageString_02046574(MessageWindow_02021b84* window, int index, const void* text);
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" void ClearMessageParams_02046380(MessageWindow_02021b84* window);
extern "C" void func_020474a8(MessageWindow_02021b84* arg0, int arg1, const char* arg2, char* arg3);
extern "C" const char* func_020e2168(char* arg0, const char* arg1, short arg2, unsigned int arg3, int arg4);
extern "C" void __clear(void* arg0, unsigned long arg1);

static inline bool inline_ov008_02187708_2(const Struct_ov008_021842a0_2* arg0)
{
    return arg0->unknown_b2c_ != NULL;
}

static inline unsigned int inline_ov008_02187708_3(const Struct_ov008_021842a0_2* arg0)
{
    return arg0->unknown_b30_->unknown_16_0_;
}

// JPN: func_ov008_02187708
extern "C" ARM void func_ov008_02187708(Struct_ov008_021842a0_2* arg0, char* arg1, Struct_ov008_021843f8_2* arg2)
{
    if (arg1 == NULL)
        return;
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader::GetInstance();
    MessageWindow_02021b84* var1 = GetMessageWindow_020421a0();
    short var3 = 0;
    char var4[0x40];
    __clear(var4, sizeof(var4));
    unsigned int var5 = 0;
    ClearMessageParams_02046380(var1);
    if (!inline_ov008_02187708_2(arg0))
    {
        char* var9 = inline_ov008_02187708(var0);
        var3 = ((Struct_ov008_02187708*)(var9 + 4))->unknown_2_3_;
        GameObject* var10 = var0->GetProtagonist();
        if (var10 != NULL)
        {
            if (var3 <= 0)
                var3 = 700 + var10->unknown_144_->unknown_8b8_;
            var5 = var10->unknown_144_->unknown_49c_0_;
            SetMessageString_02046574(var1, 1, var10->unknown_134_);
        }
    }
    else
    {
        if (arg0->unknown_b30_ != NULL)
            var3 = arg0->unknown_b30_->unknown_14_;
        var5 = inline_ov008_02187708_3(arg0);
        SetMessageString_02046574(var1, 1, arg0->unknown_b2c_);
    }
    if (var3 > 0)
    {
        Struct_ov008_02185dc0 var14;
        ResetStringList_020727d8((StringList_020727d8*)&var14);
        const char* var15 = NULL;
        unsigned int var16 = 0;
        if (var3 < 700)
        {
            if (arg0->unknown_b38_ != NULL)
            {
                var15 = FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_b38_, var3);
            }
            else
            {
                var15 = func_020e2168(var4, data_ov008_0218c0d5, var3, var5, 1);
            }
        }
        else
        {
            if (arg0->unknown_b34_ != NULL)
            {
                var15 = FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_b34_, (short)(var3 + 20000));
            }
            else
            {
                char var17[0x40] = "data/bin/";
                AppendText_02042058(var17, data_ov008_0218c0fc);
                BackgroundLoader::AddLockGlobal();
                void* var21 = LoadFileIntoMemory(var17, gFileScratchSpace_0211e33c, &var16);
                if (var21 != NULL)
                {
                    func_02072928(&var14, (Struct_02013fb4*)var21, var16, (short)(var3 + 20000), var4, 0);
                    var15 = var4;
                }
                BackgroundLoader::RemoveLockGlobal();
            }
        }
        SetMessageString_02046574(var1, 0, var15);
    }
    int var23 = 100;
    if (arg2 != NULL)
        var23 = 101;
    func_020474a8(var1, 10, FindStringInTable_020e0434((Struct_0201099c_3*)&arg0->unknown_a0_, var23), arg1);
}
#else

struct Struct_01ff8b48_26 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov008_021843f8_2;

struct Struct_ov008_02187278 {
    unsigned int unknown_0_0_ : 14;
    unsigned int unknown_1_6_ : 17;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 14;
    unsigned int unknown_5_6_ : 17;
    unsigned int unknown_7_7_ : 1;
    unsigned int unknown_8_0_ : 7;
    unsigned int unknown_8_7_ : 7;
    unsigned int unknown_9_6_ : 7;
    unsigned int unknown_a_5_ : 7;
    unsigned int unknown_b_4_ : 4;
    unsigned int unknown_c_0_ : 10;
    unsigned int unknown_d_2_ : 14;
    unsigned int unknown_f_0_ : 7;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int unknown_12_7_ : 7;
    unsigned int unknown_13_6_ : 2;
    short unknown_14_;
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 4;
    unsigned char unknown_16_5_ : 3;
    unsigned char unknown_17_;
};

struct Struct_01ff8b48_13 {
    int unknown_0_[0x18 / 4];
};

struct Struct_ov008_02185dc0 {
    int unknown_0_[2];
};

struct Struct_ov003_021594c4 {
    int unknown_0_[0x20 / 4];
};

struct Struct_02081870_2 {
    int unknown_0_[0xbc / 4];
};

struct Struct_ov006_02158478 {
    int unknown_0_[0xe0 / 4];
};

struct Struct_ov009_02186e00_2 {
    int unknown_0_[0x40 / 4];
};

struct Struct_ov008_021842a0_2 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    SafeAllocator unknown_50_;
    SafeAllocator unknown_64_;
    SafeAllocator unknown_78_;
    SafeAllocator unknown_8c_;
    Struct_01ff8b48_13 unknown_a0_;
    char* unknown_b8_;
    char unknown_bc_[0x14];
    Struct_ov003_021594c4 unknown_d0_[3];
    Struct_02081870_2 unknown_130_;
    Struct_ov006_02158478 unknown_1ec_[6];
    void* unknown_72c_;
    void* unknown_730_;
    void* unknown_734_;
    void* unknown_738_;
    void* unknown_73c_;
    void* unknown_740_;
    unsigned char unknown_744_[8];
    unsigned char unknown_74c_;
    Struct_ov009_02186e00_2 unknown_750_;
    Object3D unknown_790_;
    char unknown_83c_[0x2c8];
    void* unknown_b04_;
    void* unknown_b08_;
    void* unknown_b0c_;
    signed char unknown_b10_;
    unsigned char unknown_b11_;
    unsigned char unknown_b12_;
    unsigned char unknown_b13_;
    short unknown_b14_;
    short unknown_b16_;
    int unknown_b18_;
    int unknown_b1c_;
    int unknown_b20_;
    int unknown_b24_;
    unsigned char unknown_b28_;
    unsigned char unknown_b29_;
    unsigned char unknown_b2a_;
    int unknown_b2c_;
    const void* unknown_b30_;
    Struct_ov008_02187278* unknown_b34_;
    void* unknown_b38_;
    void* unknown_b3c_;
    Struct_01ff8b48_26 unknown_b40_[2];
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    char unknown_49d_[0x950 - 0x49d];
    int unknown_950_;
};

struct GameObject {
    char unknown_0_[0x150];
    Struct_ov005_0215840c_2* unknown_150_;
};

struct GameState {
    static GameState* GetInstance();
    GameObject* GetProtagonist();
};

struct Struct_ov008_02187708 {
    unsigned int unknown_0_0_ : 19;
    int unknown_2_3_ : 11;
    unsigned int unknown_3_6_ : 2;
};

static inline char* inline_ov008_02187708(GameState* arg0)
{
    return (char*)arg0 + 0x569c;
}

struct MessageWindow_02021b84 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

struct Struct_ov008_02187708_2 {
    int unknown_0_[3];
};

struct StringList_020727d8;
struct Struct_0201099c_3;
struct StringList_02072a68_2;
struct Struct_02013fb4;
struct Struct_02046574_2;

extern char data_ov008_0218b465[];
extern char data_ov008_0218b47c[];
extern char data_ov008_0218b49b[];
extern char data_ov008_0218b4b0[];
extern char data_ov008_0218b4c1[];

extern "C" MessageWindow_02021b84* GetMessageWindow_020421a0();
extern "C" void InitNoun_020e46c4(void* noun);
extern "C" void func_020e4c74(void* arg0, GameObject* arg1);
extern "C" void ResetStringList_020727d8(StringList_020727d8* stringList);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
extern "C" void func_02072928(void* arg0, Struct_02013fb4* arg1, int arg2, int arg3, void* arg4, unsigned char arg5);
extern "C" void SetMessageString_02046574(Struct_02046574_2* window, int index, char* text);
extern "C" char* func_020d2f88(char* arg0, char* arg1);
extern "C" void func_02041a5c(char* arg0, int arg1);
extern "C" void AppendText_02042058(char* buffer, const char* text);

extern "C" {
void __clear(void* arg0, unsigned long arg1);
int sprintf(char* arg0, const char* arg1, ...);
void* ExtractFileFromGP2(char* arg0, char* arg1, unsigned int* arg2);
void ClearMessageParams_02046380(MessageWindow_02021b84* window);
void func_02042764(const void* arg0, char* arg1, int arg2);
void func_020e4b34(Struct_ov008_02187708_2* arg0, char* arg1, char* arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                   int arg9, int arg10, int arg11);
const char* CopyStringFromTableFile_020e046c(char* buffer, void* fileData, unsigned int fileSize, short stringId);
void func_02046608(MessageWindow_02021b84* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, int arg6);
int func_020420e8(const char* arg0, int arg1);
}

// USA: func_ov008_02187708
extern "C" ARM void func_ov008_02187708(Struct_ov008_021842a0_2* arg0, char* arg1, Struct_ov008_021843f8_2* arg2)
{
    if (arg1 == NULL)
        return;
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader::GetInstance();
    MessageWindow_02021b84* var1 = GetMessageWindow_020421a0();
    char var2[0x30];
    __clear(var2, sizeof(var2));
    short var3 = 0;
    char var4[0x40];
    __clear(var4, sizeof(var4));
    unsigned int var5 = 0;
    ClearMessageParams_02046380(var1);
    Struct_ov008_02187708_2 var6;
    Struct_ov008_02187708_2 var7;
    const void* var8 = arg0->unknown_b30_;
    if (var8 == NULL)
    {
        char* var9 = inline_ov008_02187708(var0);
        var3 = ((Struct_ov008_02187708*)(var9 + 4))->unknown_2_3_;
        GameObject* var10 = var0->GetProtagonist();
        if (var10 != NULL)
        {
            if (var3 <= 0)
            {
                Struct_ov005_0215840c_2* var11 = var10->unknown_150_;
                int var12 = 0x50dc;
                if (var11->unknown_49c_0_ == 1)
                    var12 = 0x510e;
                var3 = var12 - 20000 + var11->unknown_950_;
            }
            var5 = var10->unknown_150_->unknown_49c_0_;
            InitNoun_020e46c4(&var6);
            func_020e4c74(&var6, var10);
            var1->unknown_10_ = &var6;
        }
    }
    else
    {
        Struct_ov008_02187278* var13 = arg0->unknown_b34_;
        if (var13 != NULL)
            var3 = var13->unknown_14_;
        var5 = var13->unknown_16_0_;
        func_02042764(var8, var2, 1);
        InitNoun_020e46c4(&var7);
        func_020e4b34(&var7, var2, var2, 0, 0, 0, 0, var5, 0, 1, 0, 1);
        var1->unknown_10_ = &var7;
    }
    if (var3 > 0)
    {
        Struct_ov008_02185dc0 var14;
        ResetStringList_020727d8((StringList_020727d8*)&var14);
        const char* var15 = NULL;
        unsigned int var16 = 0;
        if (var3 < 700)
        {
            if (arg0->unknown_b3c_ != NULL)
            {
                var15 = FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_b3c_, var3);
            }
            else
            {
                BackgroundLoader::AddLockGlobal();
                unsigned int var17 = 0;
                char var18[0x40];
                char var19[0x20];
                __clear(var18, sizeof(var18));
                __clear(var19, sizeof(var19));
                sprintf(var18, data_ov008_0218b465, var5);
                sprintf(var19, data_ov008_0218b47c, var5);
                void* var20 = ExtractFileFromGP2(var18, var19, &var17);
                if (var20 != NULL)
                    var15 = CopyStringFromTableFile_020e046c(var4, var20, var17, var3);
                BackgroundLoader::RemoveLockGlobal();
            }
        }
        else
        {
            if (arg0->unknown_b38_ != NULL)
            {
                var15 = FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_b38_, (short)(var3 + 20000));
            }
            else
            {
                BackgroundLoader::AddLockGlobal();
                void* var21 = ExtractFileFromGP2(data_ov008_0218b49b, data_ov008_0218b4b0, &var16);
                if (var21 != NULL)
                {
                    func_02072928(&var14, (Struct_02013fb4*)var21, var16, (short)(var3 + 20000), var4, 0);
                    var15 = var4;
                }
                BackgroundLoader::RemoveLockGlobal();
            }
        }
        SetMessageString_02046574((Struct_02046574_2*)var1, 0, (char*)var15);
    }
    char* var22 = arg0->unknown_b8_;
    int var23 = 100;
    int var24 = 0xee;
    if (arg2 != NULL)
    {
        var23 = 101;
        var24 = 0xdf;
    }
    func_02046608(var1, 10, FindStringInTable_020e0434((Struct_0201099c_3*)&arg0->unknown_a0_, var23), var22 + 0x760, var24, 1, 0);
    int var25 = 7;
    if (func_020d2f88(var22 + 0x760, data_ov008_0218b4c1) != NULL)
        var25 = 2;
    if (arg2 != NULL)
    {
        arg0->unknown_b2c_ = (func_020420e8(var22 + 0x760, 0) + 0x10) << 12;
        if (var25 == 2)
            arg0->unknown_b2c_ = 0xe0000;
    }
    func_02041a5c(arg1, var25);
    AppendText_02042058(arg1, var22 + 0x760);
}
#endif
