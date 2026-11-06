#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "NitroSDK/Timing.h"

#if defined(jpn)
#define func_ov016_0218c04c func_ov016_0218ca98
#define data_ov016_0219d0c8 data_ov016_0219d0c0
#endif

extern "C" unsigned int func_020c8534(int arg0);
extern "C" unsigned int func_020c8520(int arg0);
extern "C" unsigned int func_ov016_0218fc78(void);
extern "C" unsigned int func_ov016_0218fc84(void);
extern "C" void func_ov016_0218fc8c(void*, unsigned int);
extern "C" void func_ov016_0218fcac(void*, int);
struct NitroVM;
void NitroVM_Initialize(NitroVM*);
int NitroVM_PrepareReadFileByPath(NitroVM*, char const*);
void NitroVM_FinishRead(NitroVM*);
extern "C" void* func_ov016_0218e558(void* arg0, int arg1);
extern "C" unsigned int func_ov016_0218e690(void* arg0);
extern "C" unsigned int func_ov016_0218e6a8(void* arg0);
extern "C" unsigned int func_ov016_0218e678(void* arg0);
extern "C" void* func_ov016_0218e660(void* arg0);
extern "C" unsigned int func_ov016_0218e750(void* arg0);
extern "C" int func_ov016_0218e6c0(void* arg0);
extern "C" void func_ov016_0218e6e4(void* arg0);
extern "C" void func_ov016_0218e72c(void* arg0);
extern "C" void func_ov016_0218e640(void* arg0);
extern "C" int func_ov016_0218e768(void* arg0, void* arg1);
extern "C" void func_ov016_0218bce8(void* arg0, unsigned int arg1);
#if defined(jpn)
extern "C" void func_ov016_0218bec4(void* arg0);
#else
extern "C" void func_ov016_0218bec4(void* arg0, int arg1);
#endif
extern "C" void func_020d1f0c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d1fd0(int arg0, int arg1);
extern "C" void func_020d24c4(int arg0);
extern "C" void func_020c9778(int arg0, int arg1);
extern "C" void UpdateSound_020bbd9c(void);
extern "C" int func_020ce89c(int arg0, int arg1, int arg2);
extern "C" unsigned short func_ov016_0218ca70(void);
extern "C" int func_020c7dcc(void);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
void CleanDataCache(void);
void CleanCacheRange(const void* p, unsigned int n);
extern "C" void func_0203ad14(void*, int, void*, int);
struct Struct_0203aba8;
extern "C" void func_0203aba8(Struct_0203aba8*, void*, void*);
extern "C" void func_0203ae4c(void* arg0, int arg1, void* arg2);
extern "C" void func_0203ad88(void* arg0, void* arg1, int arg2);
extern "C" void func_0203ac10(void* arg0, void* arg1, int arg2);
struct Struct_02000c9c_8;
extern "C" int GetGameLanguage_0200fb08(Struct_02000c9c_8*);
extern "C" void func_ov016_0218c024(void);

struct Struct_ov016_0218c04c {
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

#if defined(jpn)
volatile int data_ov016_0219d0d4;
SafeAllocator* data_ov016_0219d0c8;
int data_ov016_0219d0c4;
int data_ov016_0219d0dc;
int data_ov016_0219d0d8;
int data_ov016_0219d0fc;
short* data_ov016_0219d0f0;
short* data_ov016_0219d0ec;
int data_ov016_0219d0e8;
unsigned int data_ov016_0219d0e4;
int data_ov016_0219d0e0;
int data_ov016_0219d0d0;
int data_ov016_0219cfb4;
Struct_ov016_0218c04c* data_ov016_0219d0f4;
int data_ov016_0219d0f8;
long long data_ov016_0219d110;
volatile long long data_ov016_0219d108;
unsigned long long data_ov016_0219d100;
Alarm data_ov016_0219d118;
#else
SafeAllocator* data_ov016_0219d0c8;
int data_ov016_0219d0c0;
int data_ov016_0219d0c4;
int data_ov016_0219d0fc;
int data_ov016_0219d0f8;
Struct_ov016_0218c04c* data_ov016_0219d0f4;
short* data_ov016_0219d0f0;
short* data_ov016_0219d0ec;
int data_ov016_0219d0e8;
unsigned int data_ov016_0219d0e4;
int data_ov016_0219d0e0;
int data_ov016_0219d0dc;
int data_ov016_0219d0d8;
volatile int data_ov016_0219d0d4;
int data_ov016_0219d0d0;
int data_ov016_0219d0cc;
volatile long long data_ov016_0219d108;
unsigned long long data_ov016_0219d100;
long long data_ov016_0219d110;
Alarm data_ov016_0219d118;
#endif
extern char gMusicManager_02109bf4;

// USA: func_ov016_0218c04c
#if defined(jpn)
extern "C" ARM void func_ov016_0218c04c(const char* arg0) {
#else
extern "C" ARM void func_ov016_0218c04c(const char* arg0, int arg1) {
#endif
	unsigned char var0[0x48];
	int var1;
	int var2;
	unsigned short var3;
	bool var4;
	int var5;
	int var6;
	int var7;
	unsigned char var8;
	float var9;
	int var10;
	void* var11;
	int var12;
	unsigned int var18;
	unsigned int var13;
	unsigned int var14;
	unsigned int var15;
	unsigned int var16;
	unsigned int var17;

	var12 = 0;
	var3 = 0;
	var4 = false;
	var16 = func_020c8534(3);
	var14 = func_020c8520(3) - var16;
	if (var14 >= func_ov016_0218fc78()) {
		var14 = func_ov016_0218fc78();
	}
	var17 = func_020c8534(4);
	var15 = func_020c8520(4) - var17;
	if (var15 >= func_ov016_0218fc84()) {
		var15 = func_ov016_0218fc84();
	}
	func_ov016_0218fc8c((void*)func_020c8534(3), var14);
	func_ov016_0218fcac((void*)func_020c8534(4), var15);
	NitroVM_Initialize((NitroVM*)var0);

	if (NitroVM_PrepareReadFileByPath((NitroVM*)var0, arg0)) {
	var11 = func_ov016_0218e558(var0, 6);
	if (var11 != 0) {
		var18 = 0;

		var5 = 0;
		var6 = func_ov016_0218e690(var11);
		var13 = func_ov016_0218e6a8(var11);
		var7 = (int)(((unsigned long long)(unsigned int)func_ov016_0218e660(var11) << 24) /
			((unsigned long long)var13 * func_ov016_0218e678(var11)));
		data_ov016_0219d0e4 = (var7 + 1) * 7;
		data_ov016_0219d0f0 = (short*)data_ov016_0219d0c8->Allocate(data_ov016_0219d0e4 * var13 * 2);
		data_ov016_0219d0ec = (short*)data_ov016_0219d0c8->Allocate(data_ov016_0219d0e4 * var13 * 2);
		memset(data_ov016_0219d0f0, 0, data_ov016_0219d0e4 * var13 * 2);
		memset(data_ov016_0219d0ec, 0, data_ov016_0219d0e4 * var13 * 2);
		CleanDataCache();
		var8 = 0;
		data_ov016_0219d108 = var8;
		data_ov016_0219d0e8 = var8;
		data_ov016_0219d110 = var8;
		data_ov016_0219d0d8 = var8;
		data_ov016_0219d0d4 = 1;
		data_ov016_0219d0dc = var8;
		data_ov016_0219d0fc = var8;
		data_ov016_0219d0e0 = var8;
		ZeroInitializeAlarm(&data_ov016_0219d118);
		{
			unsigned long long var19 = GetCurrentTimestamp();
			unsigned long long var20 = (0xf4240ULL << 24) / func_ov016_0218e678(var11);
			unsigned long long var21 = ((var20 * 0x82ea) >> 6) / 1000;
			SetInterval(&data_ov016_0219d118, var19 + 5, (unsigned int)var21, (void (*)(ProcessorContext**))func_ov016_0218c024, (ProcessorContext**)0);
		}
		data_ov016_0219d100 = (GetCurrentTimestamp() << 6) / 0x82ea;
		var9 = (float)func_ov016_0218e678(var11) / 16777216.0f;
		var10 = 0;

		while (func_ov016_0218e6c0(var11)) {
			if (data_ov016_0219d0d0 == 0) {
				Struct_ov016_0218c04c* var22 = data_ov016_0219d0f4;
				unsigned long long var23 = (GetCurrentTimestamp() << 6) / 0x82ea;
				if (data_ov016_0219d100 + var22->unknown_14_ <= var23) {
#if defined(jpn)
					func_0203ad14(&gMusicManager_02109bf4, var22->unknown_10_, 0, 0);
#else
					if (var22->unknown_10_ != 0) {
						func_0203ad14(&gMusicManager_02109bf4, var22->unknown_12_, 0, 0);
					} else {
						func_0203aba8((Struct_0203aba8*)&gMusicManager_02109bf4, (void*)var22->unknown_12_, &data_ov016_0219d0cc);
					}
#endif
					UpdateSound_020bbd9c();
					data_ov016_0219d0d0 = 1;
					var10 = var18;
				}
			}
			if ((*(unsigned short*)0x27fffa8 & 0x8000) >> 15) {
#if defined(jpn)
				func_0203ae4c(&gMusicManager_02109bf4, 1, 0);
				data_ov016_0219d0f8 = 1;
				func_020ce89c(0xc, 0, 0);
				*(unsigned int*)(&gMusicManager_02109bf4 + 0xa8) =
					(unsigned int)(1000.0f * ((float)(var18 - var10) / var9));
				func_0203ae4c(&gMusicManager_02109bf4, 0, 0);
#else
				data_ov016_0219d0f8 = 1;
				if (data_ov016_0219d0f4->unknown_10_ != 0) {
					func_0203ae4c(&gMusicManager_02109bf4, 1, 0);
					func_020ce89c(0xc, 0, 0);
					*(unsigned int*)(&gMusicManager_02109bf4 + 0xa8) =
						(unsigned int)(1000.0f * ((float)(var18 - var10) / var9));
					func_0203ae4c(&gMusicManager_02109bf4, 0, 0);
				} else {
					func_020ce89c(0xc, 0, 0);
				}
#endif
				data_ov016_0219d0f8 = 0;
			}
			func_ov016_0218e6e4(var11);
			var18++;

			if ((func_020c7dcc() & 0x40000000) || (func_020c7dcc() & 0x80000000)) {
				if (func_ov016_0218e660(var11) != 0) {
					unsigned long long var24 = func_ov016_0218e750(var11);
					int var25 = 0;
					for (; var25 < var24; var25++) {
						if (var12 != 0) {
							long long var28; do { var28 = data_ov016_0219d110 - data_ov016_0219d108; } while (data_ov016_0219d0e4 - var28 == 0);
						}
						func_ov016_0218e768(var11, data_ov016_0219d0f0 + data_ov016_0219d0e8);
						func_ov016_0218e768(var11, data_ov016_0219d0ec + data_ov016_0219d0e8);
						CleanCacheRange(data_ov016_0219d0f0 + data_ov016_0219d0e8, var13 * 2);
						CleanCacheRange(data_ov016_0219d0ec + data_ov016_0219d0e8, var13 * 2);
						data_ov016_0219d0e8 = data_ov016_0219d0e8 + var13;
						if (data_ov016_0219d0e8 == data_ov016_0219d0e4 * var13) {
							data_ov016_0219d0e8 = 0;
						}
						data_ov016_0219d110 = data_ov016_0219d110 + 1;
					}
					if (var12 == 0 && var18 >= 6) {
						func_ov016_0218bce8(func_ov016_0218e660(var11), var13);
						var12 = 1;
					}
				}
			}
			if (var18 >= 6 || func_ov016_0218e660(var11) == 0) {
				int var29 = (int)(data_ov016_0219d110 - data_ov016_0219d108);
				if (data_ov016_0219d0f8 != 0 ||
					(var29 <= (var7 + 1) * 3 && var8 == 0 && func_ov016_0218e660(var11) != 0)) {
					func_ov016_0218e72c(var11);
					var8 = 1;
				} else {
#if defined(jpn)
					func_ov016_0218bec4(var11);
#else
					func_ov016_0218bec4(var11, arg1);
#endif
					var8 = 0;
				}
			}

			{
				unsigned short var30 = func_ov016_0218ca70();
#if defined(jpn)
				if (data_ov016_0219cfb4 == 0) {
#else
				if (data_ov016_0219d0c0 == 0) {
#endif
					var30 &= ~0xa;
				}
				if (var30 != var3) {
					var3 = var30;
#if defined(jpn)
					if (data_ov016_0219cfb4 == 1) {
#else
					if (data_ov016_0219d0c0 == 1) {
#endif
						if ((var30 & 1) || (var30 & 2) || (var30 & 0x400) || (var30 & 0x800) || (var30 & 8)) {
							var4 = true;
							break;
						}
					} else if (var30 & 8) {
						if (var12 == 1) {
							func_020d1f0c(3, 0, 1, 0);
							func_020d1fd0(3, 0);
							func_020d24c4(1);
						}
						while (func_ov016_0218ca70() != 0) {
							func_020c9778(0, 1);
						}
						while ((func_ov016_0218ca70() & 8) == 0) {
							func_020c9778(0, 1);
						}
						if (var12 == 1) {
							memset(data_ov016_0219d0f0, 0, data_ov016_0219d0e4 * var13 * 2);
							memset(data_ov016_0219d0ec, 0, data_ov016_0219d0e4 * var13 * 2);
							CleanDataCache();
							data_ov016_0219d110 = data_ov016_0219d110 - data_ov016_0219d108;
							data_ov016_0219d108 = 0;
							data_ov016_0219d0e8 = (int)data_ov016_0219d110 * var13;
							if (data_ov016_0219d0e8 == data_ov016_0219d0e4 * var13) {
								data_ov016_0219d0e8 = 0;
							}
							func_ov016_0218bce8(func_ov016_0218e660(var11), var13);
						}
					} else if (var30 & 2) {
						var4 = true;
						break;
					}
				}
			}

#if defined(jpn)
			if (data_ov016_0219cfb4 == 1) {
#else
			if (data_ov016_0219d0c0 == 1) {
#endif
				int var31, var32, var33, var34;
				int var35;
				g_touchInput.RefreshState();
				g_touchInput.GetTouchPoint(&var1, &var2);
				var35 = (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ? 1 : 0;
#if defined(jpn)
				var31 = 0x56; var32 = 0xb3; var33 = 0x67; var34 = 0x98;
#else
				switch (GetGameLanguage_0200fb08((Struct_02000c9c_8*)GameState::GetInstance())) {
				case 1:
					var31 = 0x4c; var32 = 0xbd; var33 = 0x67; var34 = 0x98;
					break;
				case 2:
					var31 = 0x4c; var32 = 0xbd; var33 = 0x5d; var34 = 0xa2;
					break;
				case 3:
					var31 = 0x42; var32 = 0xc7; var33 = 0x57; var34 = 0xa7;
					break;
				case 4:
					var31 = 0x56; var32 = 0xb3; var33 = 0x67; var34 = 0x98;
					break;
				case 5:
					var31 = 0x46; var32 = 0xc3; var33 = 0x5d; var34 = 0xa2;
					break;
				default:
					var31 = 0x4c; var32 = 0xbd; var33 = 0x67; var34 = 0x98;
					break;
				}
#endif
				if (var35) {
					if (var31 <= var1 && var1 <= var32 && var2 >= 0x88 && var2 <= 0x97) {
						var4 = true;
						break;
					}
					if (var33 <= var1 && var1 <= var34 && var2 >= 0x98 && var2 <= 0xa9) {
						var4 = true;
						break;
					}
				}
			}
			var5 = var5 + 1;
			if (var5 == var6) {
				break;
			}
		}

		if (!var4) {
			unsigned int var36;
			for (var36 = 0; var36 < 5; var36++) {
#if defined(jpn)
				func_ov016_0218bec4(var11);
#else
				func_ov016_0218bec4(var11, arg1);
#endif
			}
		}
		while (data_ov016_0219d0d4 == 0) {
		}
		if ((func_020c7dcc() & 0x40000000) || (func_020c7dcc() & 0x80000000)) {
			if (var12 == 1) {
				func_020d1f0c(3, 0, 1, 0);
				func_020d1fd0(3, 0);
				func_020d24c4(1);
			}
		}
		CancelAlarm(&data_ov016_0219d118);
		data_ov016_0219d0c8->Free(data_ov016_0219d0f0);
		data_ov016_0219d0c8->Free(data_ov016_0219d0ec);
		func_ov016_0218e640(var11);
		NitroVM_FinishRead((NitroVM*)var0);
#if defined(jpn)
		if (data_ov016_0219d0f4->unknown_10_ > -1) {
			func_0203ad88(&gMusicManager_02109bf4, 0, 0);
			UpdateSound_020bbd9c();
		}
#else
		if (data_ov016_0219d0f4->unknown_12_ > -1) {
			if (data_ov016_0219d0f4->unknown_10_ != 0) {
				func_0203ad88(&gMusicManager_02109bf4, 0, 0);
			} else {
				func_0203ac10(&gMusicManager_02109bf4, &data_ov016_0219d0cc, 0);
			}
			UpdateSound_020bbd9c();
		}
#endif
	}
}
}
