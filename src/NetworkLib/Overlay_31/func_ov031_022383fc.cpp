#include <globaldefs.h>

struct Struct_ov031_022383fc {
	unsigned char unknown_0_[0x1c];
	unsigned char unknown_1c_;
};
extern Struct_ov031_022383fc* gDialog_ov031_02290d10;

struct Struct_ov031_022269d8;
struct Struct_ov031_02223268_2;
extern "C" Struct_ov031_02223268_2* func_ov031_0223baa0(Struct_ov031_022269d8* arg0, int arg1);
extern "C" void CopySpriteOAMEntries_ov031_0223bdb0(int isSubScreen, int spriteId, void* oamEntries);
extern "C" void SetSpritePosition_ov031_0223bbd8(void* sprite, int entryIndex, int x, int y);

struct OAMAllocation_ov031_02222ce4;
extern "C" ARM void SetSpritePriority_ov031_0223bcc8(OAMAllocation_ov031_02222ce4* sprite, int entryIndex, int priority);

extern unsigned char data_ov031_022492fe[];
extern unsigned char data_ov031_022492ea[];
extern unsigned short data_ov031_02249364[];
extern unsigned short data_ov031_02249366[];

// USA: func_ov031_022383fc
extern "C" ARM void func_ov031_022383fc(int arg0) {
	Struct_ov031_02223268_2* var0 = func_ov031_0223baa0(
		*(Struct_ov031_022269d8**)((char*)gDialog_ov031_02290d10 + 8 + arg0 * 4), 0);

	unsigned char var1 = gDialog_ov031_02290d10->unknown_1c_;
	unsigned char var2 = *((unsigned char*)data_ov031_022492fe + var1 * 2 + arg0);
	CopySpriteOAMEntries_ov031_0223bdb0(0, var2 + 1, var0);

	unsigned char var3 = gDialog_ov031_02290d10->unknown_1c_;
	Struct_ov031_022269d8* var4 = *(Struct_ov031_022269d8**)((char*)gDialog_ov031_02290d10 + 8 + arg0 * 4);
	unsigned char var5 = *((unsigned char*)data_ov031_022492ea + var3 * 2 + arg0);
	unsigned short var6 = *(unsigned short*)((char*)data_ov031_02249364 + var3 * 8 + var5 * 4);
	unsigned short var7 = *(unsigned short*)((char*)data_ov031_02249366 + var3 * 8 + var5 * 4);
	SetSpritePosition_ov031_0223bbd8(var4, -1, var6, var7);

	void* var8 = *(void**)((char*)gDialog_ov031_02290d10 + 8 + arg0 * 4);
	SetSpritePriority_ov031_0223bcc8((OAMAllocation_ov031_02222ce4*)var8, -1, 0);
}
