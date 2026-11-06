#include <globaldefs.h>

#if defined(jpn)
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Input/Input.h"

struct Struct_02072a68;

struct Struct_02072a68_2
{
    Struct_02072a68* unknown_0_;
    short unknown_4_;
};

struct Struct_0205bef8
{
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x38];
};

struct Struct_ov012_02189314_2
{
    char unknown_0_[8];
    char unknown_8_[0x74];
};

struct Struct_01ff8b48_12
{
    char unknown_0_[0x5400];
    Struct_ov012_02189314_2 unknown_5400_;
};

struct Struct_01ff8b48_13
{
    char unknown_0_[0x3c];
    Struct_01ff8b48_12 unknown_3c_;
};

struct Struct_ov012_02189314_3
{
    char unknown_0_[0x868];
    int unknown_868_;
};

struct Struct_ov012_02189314
{
    char unknown_0_[0x18];
    SafeAllocator unknown_18_[6];
    char unknown_90_[0x130c - 0x90];
    char* unknown_130c_;
    char unknown_1310_[4];
    Struct_02072a68_2 unknown_1314_;
    char unknown_131c_[0x1340 - 0x131c];
    unsigned char unknown_1340_;
    unsigned char unknown_1341_;
    char unknown_1342_[2];
    char* unknown_1344_;
    char unknown_1348_[8];
    int unknown_1350_[4];
    char unknown_1360_[0x1368 - 0x1360];
    unsigned char unknown_1368_;
    char unknown_1369_[0x1374 - 0x1369];
    unsigned char unknown_1374_;
    unsigned char unknown_1375_;
    char unknown_1376_[2];
    Struct_0205bef8 unknown_1378_;
    int unknown_13b8_;
    char unknown_13bc_[0x48];
    void* unknown_1404_;
    char* unknown_1408_;
    const void* unknown_140c_;
    unsigned int unknown_1410_;
    char* unknown_1414_;
    char unknown_1418_[0x1428 - 0x1418];
    char* unknown_1428_;
    char unknown_142c_[0x1458 - 0x142c];
    char unknown_1458_[0x40];
    char unknown_1498_[0x40];
    char unknown_14d8_[0x20];
};

extern "C" void func_0205d6a0(void* arg0, int arg1);
extern "C" void func_ov023_021e20c0(void* arg0);
extern "C" int func_ov023_021e20f0(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_02042428(char* arg0, int arg1);
extern "C" int func_02099304(Struct_ov012_02189314_2* arg0, char* arg1, const void* arg2, unsigned int arg3, void* arg4, int arg5, unsigned char arg6, char* arg7, char* arg8);
extern "C" void func_0205de24(void* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov023_021e6e60(Struct_ov012_02189314* arg0);
extern "C" void func_ov012_0218aabc(Struct_ov012_02189314* arg0);
extern "C" void func_0205bef8(Struct_0205bef8* arg0);
extern "C" void func_0205ba68(Struct_0205bef8* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(Struct_0205bef8* arg0, int arg1);
extern "C" void func_0205bb04(Struct_0205bef8* arg0, int arg1);
extern "C" int func_0205bf58(Struct_0205bef8* arg0, unsigned int arg1);
extern "C" int func_0205bb84(Struct_0205bef8* arg0);
extern "C" void func_0205eaa0(void* arg0, int arg1, int arg2);
extern "C" int func_ov023_021e2868(void* arg0);
extern "C" int func_ov023_021e7148(Struct_ov012_02189314* arg0);
extern "C" int func_ov023_021e6e20(Struct_ov012_02189314* arg0);
extern "C" void func_ov012_02186248(Struct_ov012_02189314* arg0, unsigned char arg1, int arg2);
extern "C" void func_ov023_021e6808(Struct_ov012_02189314* arg0, char* arg1);
extern "C" void func_ov023_021e68d8(Struct_ov012_02189314* arg0, char* arg1);
extern "C" char* func_02072a68(Struct_02072a68_2* arg0, short arg1);
extern "C" void func_ov012_0218bba0(Struct_ov012_02189314* arg0, int arg1, int arg2);
extern "C" int func_ov012_02185db4(void* arg0, const char* arg1);
extern "C" void func_0205def8(void* arg0, int arg1, int arg2);
extern "C" void func_ov012_02189d18(Struct_ov012_02189314* arg0);
extern "C" Struct_ov012_02189314_3* GetMessageWindow_020421a0();
extern "C" void StartMessage_0204500c(Struct_ov012_02189314_3* window, const char* text, int arg2);

extern "C" const char data_ov012_0218bfc1[];
extern "C" char data_02108760[];

static inline Struct_ov012_02189314_2* inline_ov012_02189314(GameState* arg0)
{
    return &((Struct_01ff8b48_13*)arg0)->unknown_3c_.unknown_5400_;
}

// JPN: func_ov012_02189314
extern "C" ARM void func_ov012_02189314(Struct_ov012_02189314* arg0)
{
    if (arg0->unknown_1340_ == 0)
    {
        func_0205d6a0(arg0->unknown_90_, 1);
        Struct_ov012_02189314_2* var0 = inline_ov012_02189314(GameState::GetInstance());
        memset(arg0->unknown_1428_, 0, 0x400);
        arg0->unknown_130c_ = arg0->unknown_1428_;
        memcpy(arg0->unknown_1428_, var0->unknown_8_, 0x74);
        arg0->unknown_1350_[0] = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov012_0218bfc1, 0);
        func_ov023_021e20c0(arg0->unknown_13bc_);
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 1)
    {
        BackgroundLoader* var1 = BackgroundLoader::GetInstance();
        if (var1->GetTaskStatus(arg0->unknown_1350_[0]))
        {
            if (var1->GetDetailedTaskStatus(arg0->unknown_1350_[0]) != 2)
            {
                var1->RemoveTask(arg0->unknown_1350_[0]);
                arg0->unknown_1350_[0] = -1;
            }
            void* var2;
            unsigned int var3;
            var1->GetLoadedFileByID(arg0->unknown_1350_[0], &var2, &var3);
            arg0->unknown_18_[4].Reset();
            func_ov023_021e20f0(arg0->unknown_13bc_, &arg0->unknown_18_[4], var2, var3);
            var1->RemoveTask(arg0->unknown_1350_[0]);
            arg0->unknown_1350_[0] = -1;
            arg0->unknown_1340_++;
            return;
        }
        return;
    }
    else if (arg0->unknown_1340_ == 2)
    {
        Struct_ov012_02189314_2* var4 = inline_ov012_02189314(GameState::GetInstance());
        memset(arg0->unknown_1344_, 0, 0x800);
        func_02042428(arg0->unknown_1344_, 0xc);
        char* var5 = arg0->unknown_1344_;
        int var6 = strlen(var5);
        func_02099304(var4, arg0->unknown_1408_, arg0->unknown_140c_, arg0->unknown_1410_, var5 + var6, 0x800 - var6, 0, arg0->unknown_1498_, arg0->unknown_1458_);
        memset(arg0->unknown_1414_, 0, 0xf2);
        char* var7 = arg0->unknown_1344_;
        memcpy(arg0->unknown_1414_, var7, strlen(var7));
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 3)
    {
        arg0->unknown_1368_ = 0;
        func_0205de24(arg0->unknown_90_, 0, 2);
        func_ov023_021e6e60(arg0);
        func_ov012_0218aabc(arg0);
        arg0->unknown_13b8_ = 0;
        func_0205bef8(&arg0->unknown_1378_);
        func_0205ba68(&arg0->unknown_1378_, 11, 7, 0);
        func_0205bacc(&arg0->unknown_1378_, 77);
        arg0->unknown_1378_.unknown_4_ = 1;
        func_0205bb04(&arg0->unknown_1378_, arg0->unknown_13b8_);
        memcpy(arg0->unknown_1404_, inline_ov012_02189314(GameState::GetInstance())->unknown_8_, 0x72);
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 4)
    {
        if (func_0205bf58(&arg0->unknown_1378_, GameState::GetInstance()->GetTickCount()))
        {
            int var8 = func_0205bb84(&arg0->unknown_1378_);
            if (var8 != arg0->unknown_13b8_)
            {
                int var9 = var8 / 7;
                int var10 = var8 % 7;
                if (var10 >= 6 && var9 >= 4)
                {
                    int var11 = arg0->unknown_13b8_ / 7;
                    int var12 = arg0->unknown_13b8_ % 7;
                    if (var9 - var11 == 1)
                        var9 = 0;
                    else if (var9 != var11)
                        var9 = 3;
                    if (var10 - var12 == 1)
                        var10 = 0;
                    else if (var10 != var12)
                        var10 = 5;
                    var8 = var9 * 7 + var10;
                }
                func_0205eaa0(data_02108760, 2, 0);
                arg0->unknown_13b8_ = var8;
                func_0205bb04(&arg0->unknown_1378_, var8);
            }
        }
        int var13 = 0;
        int var14 = func_ov023_021e2868(arg0->unknown_13bc_);
        if (var14 != 0 && g_touchInput.pressed_)
        {
            arg0->unknown_13b8_ = var14 - 1;
            func_0205bb04(&arg0->unknown_1378_, arg0->unknown_13b8_);
            var13 = 1;
        }
        int var15 = 0;
        if (func_ov023_021e7148(arg0) || var13)
        {
            func_0205eaa0(data_02108760, 1, 0);
            int var16 = arg0->unknown_13b8_ / 7;
            int var17 = arg0->unknown_13b8_ % 7;
            if (var16 >= 10)
            {
                if (var17 == 0)
                {
                    if (arg0->unknown_1374_ != 0)
                        arg0->unknown_1374_ = 0;
                    else
                        arg0->unknown_1374_ = 1;
                    func_ov012_02186248(arg0, arg0->unknown_1341_, 1);
                }
                else if (var17 == 1)
                {
                    if (arg0->unknown_1375_ >= 2)
                        func_ov023_021e6808(arg0, arg0->unknown_1428_ + arg0->unknown_1375_ - 2);
                }
                else if (var17 == 2)
                {
                    if (arg0->unknown_1375_ >= 2)
                        func_ov023_021e68d8(arg0, arg0->unknown_1428_ + arg0->unknown_1375_ - 2);
                }
                else if (var17 == 3)
                {
                    if (arg0->unknown_1375_ >= 2)
                    {
                        char* var18 = arg0->unknown_1428_;
                        arg0->unknown_1375_ -= 2;
                        var18 += arg0->unknown_1375_;
                        memcpy(var18, func_02072a68(&arg0->unknown_1314_, 0x71), 2);
                    }
                }
                else if (var17 == 4)
                {
                    char* var19 = arg0->unknown_1428_;
                    if (arg0->unknown_1375_ >= 0x72)
                        arg0->unknown_1375_ = 0x70;
                    var19 += arg0->unknown_1375_;
                    memcpy(var19, func_02072a68(&arg0->unknown_1314_, 0x7b), 2);
                    arg0->unknown_1375_ += 2;
                }
                else if (var17 == 5)
                {
                    var15 = 1;
                }
            }
            else
            {
                if (var16 >= 5)
                {
                    var17 += 7;
                    var16 -= 5;
                }
                char* var20;
                if (arg0->unknown_1374_ == 0)
                    var20 = func_02072a68(&arg0->unknown_1314_, var17 + 200);
                else
                    var20 = func_02072a68(&arg0->unknown_1314_, var17 + 300);
                var20 += var16 * 2;
                char var21[3];
                memcpy(var21, var20, 2);
                var21[2] = 0;
                var20 = arg0->unknown_1428_;
                if (arg0->unknown_1375_ >= 0x72)
                    arg0->unknown_1375_ = 0x70;
                var20 += arg0->unknown_1375_;
                memcpy(var20, var21, 2);
                arg0->unknown_1375_ += 2;
            }
            func_ov012_0218bba0(arg0, 0, -1);
        }
        else if (func_ov023_021e6e20(arg0))
        {
            if (arg0->unknown_1375_ == 0)
                var15 = 1;
        }
        if (var15)
        {
            GameState::GetInstance();
            if (func_ov012_02185db4(arg0->unknown_14d8_, arg0->unknown_1428_))
            {
                func_0205def8(arg0->unknown_90_, 0, 14);
                arg0->unknown_1340_ = 10;
                return;
            }
            func_0205d6a0(arg0->unknown_90_, 1);
            arg0->unknown_1340_++;
            return;
        }
    }
    else if (arg0->unknown_1340_ == 5)
    {
        memcpy(inline_ov012_02189314(GameState::GetInstance())->unknown_8_, arg0->unknown_1428_, 0x74);
        arg0->unknown_130c_ = 0;
        memset(arg0->unknown_1428_, 0, 0x400);
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 6)
    {
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 7)
    {
        arg0->unknown_1341_ = 1;
        func_ov023_021e6e60(arg0);
        func_ov012_02189d18(arg0);
        arg0->unknown_1368_ = 1;
        arg0->unknown_1340_ = 1;
        return;
    }
    else if (arg0->unknown_1340_ == 10)
    {
        Struct_ov012_02189314_3* var22 = GetMessageWindow_020421a0();
        StartMessage_0204500c(var22, func_02072a68(&arg0->unknown_1314_, 501), 0);
        var22->unknown_868_ = 1;
        arg0->unknown_1340_++;
        return;
    }
    else if (arg0->unknown_1340_ == 11)
    {
        if (GetMessageWindow_020421a0()->unknown_868_ == 0)
        {
            func_0205def8(arg0->unknown_90_, 1, 14);
            arg0->unknown_1340_ = 4;
        }
    }
}
#endif
