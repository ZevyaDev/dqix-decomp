#include <globaldefs.h>
#include <NitroSDK/BGBases.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Timing.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

#if defined(jpn)
#define func_020c39a0 func_020c546c
#define func_ov016_0218d2f4 func_ov016_0218d9f8
#endif

extern "C" int func_020d1fb0(int arg0, int arg1);
extern "C" void func_020d2038(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" int func_020d1f70(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_020d1ee4(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020c39a0(short* arg0, int arg1);
extern "C" void func_020bc078(int* arg0);
extern "C" void func_0203aa44(void* arg0);
extern "C" void func_0203aaf8(void* arg0, int arg1, int arg2);
extern "C" void func_020c3864(int arg0);
extern "C" void MapVRAMBanksToLCDC(int banks);
extern "C" void func_020ca458(int arg0, void* arg1, unsigned int arg2);
extern "C" void DisableLCDCMappedVRAMBanks(void);
extern "C" void func_020c391c(int arg0, int arg1, int arg2);
extern "C" void LoadToSubOAM(const void* p, unsigned int off, unsigned int n);
extern "C" void ReleaseSubBGVRAMBanks(void);
extern "C" void ReleaseSubObjVRAMBanks(void);
extern "C" void MapVRAMBanksToSubObj(int banks);
extern "C" void MapVRAMBanksToSubBG(int banks);
extern "C" void func_020c3984(unsigned int arg0);
extern "C" void func_020c9820(void);
extern "C" unsigned int func_020c8534(int arg0);
extern "C" unsigned int func_020c8520(int arg0);
extern "C" unsigned int func_ov016_0218fc78(void);
extern "C" unsigned int func_ov016_0218fc84(void);
extern "C" void func_ov016_0218fc8c(unsigned int arg0, unsigned int arg1);
extern "C" void func_ov016_0218fcac(unsigned int arg0, unsigned int arg1);
extern "C" void* func_ov016_0218e558(void* arg0, int arg1);
extern "C" unsigned int func_ov016_0218e690(void* arg0);
extern "C" unsigned int func_ov016_0218e6a8(void* arg0);
extern "C" unsigned int func_ov016_0218e678(void* arg0);
extern "C" unsigned int func_ov016_0218e660(void* arg0);
extern "C" unsigned int func_ov016_0218e750(void* arg0);
extern "C" int func_ov016_0218e6c0(void* arg0);
extern "C" void func_ov016_0218e6e4(void* arg0);
extern "C" int func_ov016_0218e708(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_ov016_0218e72c(void* arg0);
extern "C" void func_ov016_0218e640(void* arg0);
extern "C" int func_ov016_0218e768(void* arg0, void* arg1);
extern "C" void func_ov016_0218e240(unsigned short* arg0, char* arg1, unsigned short arg2, int arg3, int arg4, unsigned char arg5, int arg6, int arg7);
extern "C" void func_02012bd8(void);
extern "C" void func_020d1f0c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d1fd0(int arg0, int arg1);
extern "C" void func_020d24c4(int arg0);
extern "C" void func_020c9778(int arg0, int arg1);
extern "C" void func_020bbd9c(void);
extern "C" int func_020ce89c(int arg0, int arg1, int arg2);
extern "C" int func_020c7dcc(void);
extern "C" void func_0203ad14(void*, int, void*, int);
extern "C" void func_0203aba8(void* arg0, int arg1, void* arg2);
extern "C" void func_0203ae4c(void* arg0, int arg1, void* arg2);
extern "C" void func_0203ad88(void* arg0, void* arg1, int arg2);
extern "C" void func_0203ac10(void* arg0, void* arg1, int arg2);

struct Struct_020e58dc_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; };
struct Struct_020e58dc { Struct_020e58dc_2* unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" Struct_020e58dc_2* func_020e58dc(Struct_020e58dc* arg0, int arg1);

struct Struct_ov016_0218d2f4 {
	int unknown_0_;
#if !defined(jpn)
	int unknown_4_;
#endif
};

struct Struct_ov016_0218d2f4_2 {
	char unknown_0_[0x10];
#if defined(jpn)
	short unknown_10_;
#else
	unsigned char unknown_10_;
	char unknown_11_;
	short unknown_12_;
#endif
	unsigned int unknown_14_;
};

struct Struct_021052b4 {
	int unknown_0_;
	union {
		int unknown_4_;
		unsigned short unknown1_4_;
	};
};

#if defined(jpn)
int data_ov016_0219d150;
int data_ov016_0219d144;
int data_ov016_0219d148;
Struct_ov016_0218d2f4_2* data_ov016_0219d154;
short* data_ov016_0219d170;
int data_ov016_0219d16c;
unsigned int data_ov016_0219d168;
unsigned int data_ov016_0219d164;
int data_ov016_0219d160;
int data_ov016_0219d15c;
int data_ov016_0219d158;
volatile int data_ov016_0219d174;
unsigned long long data_ov016_0219d178;
volatile unsigned long long data_ov016_0219d188;
unsigned long long data_ov016_0219d180;
Alarm data_ov016_0219d190;
extern int data_ov016_0219cfb4;
extern SafeAllocator* data_ov016_0219d0c0;
#define data_ov016_0219d0c8 data_ov016_0219d0c0
#else
int data_ov016_0219d14c;
int data_ov016_0219d144;
int data_ov016_0219d148;
volatile int data_ov016_0219d174;
short* data_ov016_0219d170;
int data_ov016_0219d16c;
unsigned int data_ov016_0219d168;
unsigned int data_ov016_0219d164;
int data_ov016_0219d160;
int data_ov016_0219d15c;
int data_ov016_0219d158;
Struct_ov016_0218d2f4_2* data_ov016_0219d154;
int data_ov016_0219d150;
unsigned long long data_ov016_0219d180;
unsigned long long data_ov016_0219d178;
volatile unsigned long long data_ov016_0219d188;
Alarm data_ov016_0219d190;
extern int data_ov016_0219d0c0;
extern SafeAllocator* data_ov016_0219d0c8;
#endif
extern char gMusicManager_02109bf4;
extern Struct_021052b4 data_021052b4[];
extern char data_027e0000;

// USA: func_ov016_0218cf34
extern "C" ARM void func_ov016_0218cf34(void) {
    data_ov016_0219d188++;
}

// USA: func_ov016_0218cf58
extern "C" ARM void func_ov016_0218cf58(unsigned int arg0, unsigned int arg1) {
    unsigned int var0 = 0x00ffb0ff / arg0;

    unsigned int var2 = (data_ov016_0219d168 * arg1) << 1;
    unsigned int var3 = (arg1 >> 6) * (var0 << 1);

    CleanCacheRange(data_ov016_0219d170, var2);
    func_020d1fb0(1, 0);

    func_020d2038(0, 1, (int)data_ov016_0219d170, 1,
        0, (data_ov016_0219d168 * arg1) >> 1, 0x7f, 0, var0, 0x40);

    func_020d1f70(0, var3, var3, (int)func_ov016_0218cf34, 0);
    func_020d1ee4(1, 0, 1, 0);
    func_020d24c4(1);
}

// USA: func_ov016_0218d034
extern "C" ARM void func_ov016_0218d034(void) {
    if (data_ov016_0219d174 == 0) {
        data_ov016_0219d174 = 1;
        if (data_ov016_0219d148 == 0) {
            func_020c391c(6, 0, 0);
            *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1000;
        } else {
            func_020c391c(2, 0, 0);
            *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x400;
        }
        data_ov016_0219d148 ^= 1;
    }
    *(unsigned int*)((char*)&data_027e0000 + 0x3000 + 0xff8) |= 1;
}

// USA: func_ov016_0218d0d4
#if defined(jpn)
extern "C" ARM void func_ov016_0218d0d4(void* arg0, void* arg1) {
#else
extern "C" ARM void func_ov016_0218d0d4(void* arg0, void* arg1, int arg2) {
#endif
    int var2;
    while (data_ov016_0219d174 == 0) {
    }
    while (data_ov016_0219d15c <= (var2 = data_ov016_0219d160)) {
        SleepCurrentContext(1);
    }
    data_ov016_0219d144 = 0;
    if (data_ov016_0219d164 < 2 ||
        data_ov016_0219d15c - var2 <= 1) {
#if !defined(jpn)
        Struct_020e58dc_2* var3 = func_020e58dc((Struct_020e58dc*)arg2, var2);
#endif
        unsigned short* var4;
        if (data_ov016_0219d148 == 0) {
            var4 = (unsigned short*)0x06820000;
        } else {
            var4 = (unsigned short*)0x06800000;
        }
        func_ov016_0218e708(arg0, var4, 0x100, 0);
#if !defined(jpn)
        if (var3 != 0 && var3->unknown_4_ == 0) {
            func_ov016_0218e240(var4, (char*)var3->unknown_10_, 0x7fff, 0, 0xa8, 1, 1, var3->unknown_0_);
            var3->unknown_0_ += 4;
        }
#endif
        if (data_ov016_0219d148 == 0) {
            var4 = (unsigned short*)0x06600000;
        } else {
            var4 = (unsigned short*)GetSubBG2ScreenBase();
        }
        func_ov016_0218e708(arg1, var4, 0x100, 0);
#if !defined(jpn)
        if (var3 != 0 && var3->unknown_4_ == 1) {
            func_ov016_0218e240(var4, (char*)var3->unknown_10_, 0xffff, 0, 0xa8, 1, 1, var3->unknown_0_);
            var3->unknown_0_ += 4;
        }
#endif
        data_ov016_0219d174 = 0;
    } else {
        func_ov016_0218e72c(arg0);
        func_ov016_0218e72c(arg1);
#if defined(jpn)
        data_ov016_0219d148 ^= 1;
#endif
        data_ov016_0219d164 = 0;
    }
    data_ov016_0219d160++;
    data_ov016_0219d164++;
}

// USA: func_ov016_0218d294
extern "C" ARM void func_ov016_0218d294(void) {
	data_ov016_0219d144 = 1;
	if (data_ov016_0219d158 == 0) data_ov016_0219d15c++;
}

// USA: func_ov016_0218d2bc
extern "C" ARM unsigned short func_ov016_0218d2bc(void) {
	unsigned short var0 = *(volatile unsigned short*)0x4000130;
	unsigned short var1 = *(volatile unsigned short*)0x27fffa8;
	return (unsigned short)(((var0 | var1) ^ 0x2fff) & 0x2fff);
}

// USA: func_ov016_0218d2f4
extern "C" ARM void func_ov016_0218d2f4(const char* arg0, const char* arg1, SafeAllocator* arg2, Struct_ov016_0218d2f4_2* arg3,
	Struct_ov016_0218d2f4 arg4) {
	NitroVM var0;
	NitroVM var1;
	int var2;
	int var3;

#if defined(jpn)
	data_ov016_0219d154 = arg3;
	data_ov016_0219d180 = 0;
	data_ov016_0219d150 = arg3->unknown_10_ < 0 ? 1 : 0;
	data_ov016_0219cfb4 = arg4.unknown_0_;
	func_020c39a0((short*)0x400006c, -16);
	func_020c39a0((short*)0x400106c, -16);
#else
	func_020c39a0((short*)0x400006c, -16);
	func_020c39a0((short*)0x400106c, -16);
	data_ov016_0219d154 = arg3;
	data_ov016_0219d180 = 0;
	data_ov016_0219d150 = arg3->unknown_12_ < 0 ? 1 : 0;
	data_ov016_0219d0c0 = arg4.unknown_0_;
	func_020bc078(&data_ov016_0219d14c);
	if (data_ov016_0219d154->unknown_10_ == 0) {
		func_0203aa44(&gMusicManager_02109bf4);
		func_0203aaf8(&gMusicManager_02109bf4, data_ov016_0219d154->unknown_12_, 0);
	}
#endif

	SetInterruptHandler(1, (const void*)func_ov016_0218d034);
	EnableSpecificInterrupts(0x60078);
	{
		volatile unsigned short* var4 = (volatile unsigned short*)0x4000208;
		unsigned short var5 = *var4;
		*var4 = 1;
	}
	func_020c3864(1);
	MapVRAMBanksToLCDC(0x1ff);
	func_020ca458(0, (void*)0x6800000, 0xa4000);
	DisableLCDCMappedVRAMBanks();
	func_020ca458(0xc0, (void*)0x7000000, 0x400);
	func_020ca458(0, (void*)0x5000000, 0x400);
	func_020ca458(0xc0, (void*)0x7000400, 0x400);
	func_020ca458(0, (void*)0x5000400, 0x400);
	MapVRAMBanksToLCDC(3);
	func_020c391c(2, 0, 0);
	*(volatile unsigned short*)0x4000304 = *(volatile unsigned short*)0x4000304 | 0x8000;
	*(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x60) | 0x20;

	for (var2 = 0; var2 < 0x80; var2++) {
		data_021052b4[var2].unknown_0_ = 0;
		data_021052b4[var2].unknown_4_ = 0;
	}
	var3 = 0;
	for (int var6 = 0; var6 < 0xc0; var6 += 0x40) {
		for (int var7 = 0; var7 < 0x100; var7 += 0x40, var3++) {
			data_021052b4[var3].unknown_0_ = (var6 & 0xff) | 0xc0000c00 | ((var7 & 0x1ff) << 16);
			data_021052b4[var3].unknown1_4_ = (var7 / 8 + (var6 / 8) * 32) | 0xf000;
		}
	}
	DC_FlushRange(data_021052b4, 0x400);
	LoadToSubOAM(data_021052b4, 0, 0x400);
	ReleaseSubBGVRAMBanks();
	ReleaseSubObjVRAMBanks();
	MapVRAMBanksToSubObj(8);
	MapVRAMBanksToSubBG(4);
	func_020c3984(5);
	{
		volatile unsigned short* var8 = (volatile unsigned short*)0x400100c;
		*var8 = (*var8 & 0x43) | 0x84 | 0x4000;
		*var8 = *var8 & ~3;
		*var8 = *var8 & ~0x40;
		*(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x400;
	}
	func_020c9820();
	data_ov016_0219d0c8 = arg2;
	func_020c39a0((short*)0x400006c, 0);
	func_020c39a0((short*)0x400106c, 0);

	int var9;
	unsigned int var10;
	unsigned long long var11;
	int var12;
	float var13;
	unsigned char var14;
	int var15;
	int var16;
	int var17;
	bool var18;
	unsigned short var19;
	unsigned int var20;
	unsigned int var21;
	unsigned int var22;
	unsigned int var23;
	int var24;
	void* var25;

	var24 = 0;
	var19 = 0;
	var18 = 0;
	var21 = func_020c8534(3);
	var21 = func_020c8520(3) - var21;
	if (var21 >= func_ov016_0218fc78()) {
		var21 = func_ov016_0218fc78();
	}
	var22 = func_020c8534(4);
	var22 = func_020c8520(4) - var22;
	if (var22 >= func_ov016_0218fc84()) {
		var22 = func_ov016_0218fc84();
	}
	func_ov016_0218fc8c(func_020c8534(3), var21);
	func_ov016_0218fcac(func_020c8534(4), var22);
	NitroVM_Initialize(&var1);
	NitroVM_Initialize(&var0);

	void* var26;
	if (NitroVM_PrepareReadFileByPath(&var1, arg0) &&
		NitroVM_PrepareReadFileByPath(&var0, arg1) &&
		(var26 = func_ov016_0218e558(&var1, 6)) != 0 &&
		(var25 = func_ov016_0218e558(&var0, 6)) != 0) {
		var23 = 0;

		var17 = 0;
		var16 = func_ov016_0218e690(var26);
		var20 = func_ov016_0218e6a8(var26);
		var15 = (int)(((unsigned long long)func_ov016_0218e660(var26) << 24) /
			((unsigned long long)var20 * func_ov016_0218e678(var26)));
		data_ov016_0219d168 = (var15 + 1) * 7;
		data_ov016_0219d170 = (short*)data_ov016_0219d0c8->Allocate(data_ov016_0219d168 * var20 * 2);
		memset(data_ov016_0219d170, 0, data_ov016_0219d168 * var20 * 2);
		CleanDataCache();
		var14 = 0;
		data_ov016_0219d188 = 0;
		data_ov016_0219d16c = 0;
		data_ov016_0219d178 = 0;
		data_ov016_0219d148 = 0;
		data_ov016_0219d174 = 1;
		data_ov016_0219d160 = 0;
		data_ov016_0219d15c = 0;
		data_ov016_0219d164 = 0;
		ZeroInitializeAlarm(&data_ov016_0219d190);
		{
			unsigned long long var27 = GetCurrentTimestamp();
			unsigned long long var28 = (0xf4240ULL << 24) / func_ov016_0218e678(var26);
			unsigned long long var29 = ((var28 * 0x82ea) >> 6) / 1000;
			SetInterval(&data_ov016_0219d190, var27 + 5, (unsigned int)var29,
				(Alarm::PFNCompletion)func_ov016_0218d294, 0);
		}
		data_ov016_0219d180 = (GetCurrentTimestamp() << 6) / 0x82ea;
		var13 = (float)func_ov016_0218e678(var26) / 16777216.0f;
		var12 = 0;

		while (func_ov016_0218e6c0(var26)) {
			if (data_ov016_0219d150 == 0) {
				Struct_ov016_0218d2f4_2* var30 = data_ov016_0219d154;
				unsigned long long var31 = (GetCurrentTimestamp() << 6) / 0x82ea;
				if (data_ov016_0219d180 + var30->unknown_14_ <= var31) {
#if defined(jpn)
					func_0203ad14(&gMusicManager_02109bf4, var30->unknown_10_, 0, 0);
#else
					if (var30->unknown_10_ != 0) {
						func_0203ad14(&gMusicManager_02109bf4, var30->unknown_12_, 0, 0);
					} else {
						func_0203aba8(&gMusicManager_02109bf4, var30->unknown_12_, &data_ov016_0219d14c);
					}
#endif
					func_020bbd9c();
					data_ov016_0219d150 = 1;
					var12 = var23;
				}
			}
			if ((*(unsigned short*)0x27fffa8 & 0x8000) >> 15) {
				data_ov016_0219d158 = 1;
#if defined(jpn)
				func_0203ae4c(&gMusicManager_02109bf4, 1, 0);
				func_020ce89c(0xc, 0, 0);
				*(unsigned int*)(&gMusicManager_02109bf4 + 0xa8) =
					(unsigned int)(1000.0f * ((float)(var23 - var12) / var13));
				func_0203ae4c(&gMusicManager_02109bf4, 0, 0);
#else
				if (data_ov016_0219d154->unknown_10_ != 0) {
					func_0203ae4c(&gMusicManager_02109bf4, 1, 0);
					func_020ce89c(0xc, 0, 0);
					*(unsigned int*)(&gMusicManager_02109bf4 + 0xa8) =
						(unsigned int)(1000.0f * ((float)(var23 - var12) / var13));
					func_0203ae4c(&gMusicManager_02109bf4, 0, 0);
				} else {
					func_020ce89c(0xc, 0, 0);
				}
#endif
				data_ov016_0219d158 = 0;
			}
			func_ov016_0218e6c0(var25);
			func_ov016_0218e6e4(var26);
			func_ov016_0218e6e4(var25);
			var23++;

			if ((func_020c7dcc() & 0x40000000) || (func_020c7dcc() & 0x80000000)) {
				if (func_ov016_0218e660(var26) != 0) {
					var11 = func_ov016_0218e750(var26);
					var9 = 0;
					var10 = var20 * 2;
					for (; var9 < var11; var9++) {
						if (var24 != 0) {
							unsigned long long var32;
							do {
								var32 = data_ov016_0219d178 - data_ov016_0219d188;
							} while (data_ov016_0219d168 - var32 == 0);
						}
						func_ov016_0218e768(var26, data_ov016_0219d170 + data_ov016_0219d16c);
						CleanCacheRange(data_ov016_0219d170 + data_ov016_0219d16c, var10);
						data_ov016_0219d16c = data_ov016_0219d16c + var20;
						if (data_ov016_0219d16c == data_ov016_0219d168 * var20) {
							data_ov016_0219d16c = 0;
						}
						data_ov016_0219d178 = data_ov016_0219d178 + 1;
					}
					if (var24 == 0 && var23 >= 6) {
						func_ov016_0218cf58(func_ov016_0218e660(var26), var20);
						var24 = 1;
					}
				}
			}
			if (var23 >= 6 || func_ov016_0218e660(var26) == 0) {
				int var33 = (int)(data_ov016_0219d178 - data_ov016_0219d188);
				if (data_ov016_0219d158 != 0 ||
					(var33 <= (var15 + 1) * 3 && var14 == 0 && func_ov016_0218e660(var26) != 0)) {
					func_ov016_0218e72c(var26);
					func_ov016_0218e72c(var25);
					var14 = 1;
				} else {
#if defined(jpn)
					func_ov016_0218d0d4(var26, var25);
#else
					func_ov016_0218d0d4(var26, var25, arg4.unknown_4_);
#endif
					var14 = 0;
				}
			}

			{
				unsigned short var34 = func_ov016_0218d2bc();
#if defined(jpn)
				if (data_ov016_0219cfb4 == 0) {
#else
				if (data_ov016_0219d0c0 == 0) {
#endif
					var34 = (unsigned short)(var34 & ~0xa);
				}
				if (var34 != var19) {
					var19 = var34;
					if (var34 & 8) {
						if (var24 == 1) {
							func_020d1f0c(1, 0, 1, 0);
							func_020d1fd0(1, 0);
							func_020d24c4(1);
						}
						while (func_ov016_0218d2bc() != 0) {
							func_020c9778(0, 1);
						}
						while ((func_ov016_0218d2bc() & 8) == 0) {
							func_020c9778(0, 1);
						}
						if (var24 == 1) {
							memset(data_ov016_0219d170, 0, data_ov016_0219d168 * var20 * 2);
							CleanDataCache();
							data_ov016_0219d178 = data_ov016_0219d178 - data_ov016_0219d188;
							data_ov016_0219d188 = 0;
							data_ov016_0219d16c = (int)data_ov016_0219d178 * var20;
							if (data_ov016_0219d16c == data_ov016_0219d168 * var20) {
								data_ov016_0219d16c = 0;
							}
							func_ov016_0218cf58(func_ov016_0218e660(var26), var20);
						}
					} else if (var34 & 2) {
						var18 = 1;
						break;
					}
				}
			}
			var17 = var17 + 1;
			if (var17 == var16) {
				break;
			}
		}

		if (var18 == 0) {
			unsigned int var35;
			for (var35 = 0; var35 < 5; var35++) {
#if defined(jpn)
				func_ov016_0218d0d4(var26, var25);
#else
				func_ov016_0218d0d4(var26, var25, arg4.unknown_4_);
#endif
			}
		}
		while (data_ov016_0219d174 == 0) {
		}
		if ((func_020c7dcc() & 0x40000000) || (func_020c7dcc() & 0x80000000)) {
			if (var24 == 1) {
				func_020d1f0c(1, 0, 1, 0);
				func_020d1fd0(1, 0);
				func_020d24c4(1);
			}
		}
		CancelAlarm(&data_ov016_0219d190);
		data_ov016_0219d0c8->Free(data_ov016_0219d170);
		func_ov016_0218e640(var26);
		func_ov016_0218e640(var25);
		NitroVM_FinishRead(&var1);
		NitroVM_FinishRead(&var0);
#if defined(jpn)
		if (data_ov016_0219d154->unknown_10_ > -1) {
			func_0203ad88(&gMusicManager_02109bf4, 0, 0);
			func_020bbd9c();
		}
#else
		if (data_ov016_0219d154->unknown_12_ > -1) {
			if (data_ov016_0219d154->unknown_10_ != 0) {
				func_0203ad88(&gMusicManager_02109bf4, 0, 0);
			} else {
				func_0203ac10(&gMusicManager_02109bf4, &data_ov016_0219d14c, 0);
			}
			func_020bbd9c();
		}
#endif
	}
	SetInterruptHandler(1, (const void*)func_02012bd8);
}
