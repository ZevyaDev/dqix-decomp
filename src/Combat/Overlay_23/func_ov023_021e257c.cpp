#include <globaldefs.h>

struct LayoutElement_ov023_021e257c_2 {
	short id_0_;
	unsigned char type_2_;
	unsigned char fontSize_3_0_ : 4;
	unsigned char colorIndex_3_4_ : 4;
	char unknown_4_[4];
	short width_8_;
	short height_a_;
	void* unknown_c_;
	unsigned char unknown_10_0_ : 4;
	unsigned char unknown_10_4_ : 1;
	unsigned char unknown_10_5_ : 1;
	unsigned char unknown_10_6_ : 1;
	unsigned char unknown_10_7_ : 1;
	char unknown_11_[3];
};

struct Layout_ov023_021e257c {
	char unknown_0_[4];
	void* pTextWindow_4_;
	char unknown_8_[4];
	LayoutElement_ov023_021e257c_2* pElements_c_;
	char unknown_10_[6];
	unsigned short elementCount_16_;
	char unknown_18_[0x48 - 0x18];
	short lineHeight_48_;
	short largeFontLineHeight_4a_;
};

struct Struct_ov023_021e257c_3;
extern "C" ARM void* func_ov023_021e27f8(struct Struct_ov023_021e257c_3* arg0, int arg1);
extern "C" ARM void func_ov023_021e2030(int arg0, int arg1, int arg2, void* arg3);
extern "C" int func_ov023_021e2c38(void* arg0, int arg1);
extern "C" void func_ov023_021e2b5c(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void FillTextWindowRect_0204f914(void* textWindow, int colorIndex, int left, int top, int right, int bottom);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);
extern "C" void func_0204f7e8(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8, int arg9, bool arg10, bool arg11);

#if defined(jpn)
extern "C" void __clear(void*, int);
extern "C" int sprintf(char*,const char*,...);
extern char data_ov023_021fcf44[];
extern "C" void func_02050678(void*,int,int,void*,int,int,short*,short*);
extern "C" void func_02050cc0(void*,int,int,void*,int,int,short*,short*,int,int,bool,bool);
#endif

extern "C" ARM void DrawLayoutElements_ov023_021e257c(struct Layout_ov023_021e257c* layout) {
	if (layout->pTextWindow_4_ == 0) return;
	unsigned short elementIndex;
	for (elementIndex = 0; elementIndex < layout->elementCount_16_; elementIndex++) {
		LayoutElement_ov023_021e257c_2* element = &layout->pElements_c_[elementIndex];
		void* group = func_ov023_021e27f8((struct Struct_ov023_021e257c_3*)layout, element->id_0_);
		if (!group) continue;
		if (!func_ov023_021e2c38(layout, *(short*)group)) continue;
		short x, y;
		func_ov023_021e2b5c(layout, element->id_0_, &x, &y);

#if defined(jpn)
		unsigned fontSize;
		short lineHeight;
		fontSize=element->fontSize_3_0_;
		lineHeight=(short)(fontSize+1);
		if(fontSize==0xc) lineHeight=0x14;
		void* textWindow=layout->pTextWindow_4_;
#else
		short lineHeight = layout->lineHeight_48_;
		int fontSize = element->fontSize_3_0_;
		void* textWindow = layout->pTextWindow_4_;
		if (lineHeight == 0) lineHeight = (short)(fontSize + 1);
		if (fontSize == 0xc) {
			lineHeight = layout->largeFontLineHeight_4a_;
			if (lineHeight == 0) lineHeight = 0x14;
		}
#endif
		*(short*)((char*)textWindow + 0xb4) = (short)fontSize;
		*(short*)((char*)textWindow + 0xb6) = lineHeight;

		switch (element->type_2_) {
		case 0: {
			int right = (short)(x + element->width_8_);
			int bottom = (short)(y + element->height_a_);
			FillTextWindowRect_0204f914(layout->pTextWindow_4_, element->colorIndex_3_4_, x, y, right, bottom);
			break;
		}
		case 1: {
#if defined(jpn)
			char taggedText[0x400];
			__clear(taggedText,0x400);
			sprintf(taggedText,data_ov023_021fcf44,*(short*)((char*)group+0x14),element->unknown_c_);
			func_02050678(layout->pTextWindow_4_,x,y,taggedText,element->fontSize_3_0_,element->colorIndex_3_4_,&element->width_8_,&element->height_a_);
#else
			if (*((unsigned char*)group + 0x16) & 0x8) x -= func_020420e8(element->unknown_c_, 0) >> 1;
			if (*((unsigned char*)group + 0x16) & 0x10) x -= func_020420e8(element->unknown_c_, 0);
			func_0204f41c(layout->pTextWindow_4_, x, y, element->unknown_c_, element->fontSize_3_0_, element->colorIndex_3_4_, &element->width_8_, &element->height_a_, 0);
#endif
			break;
		}
		case 2: {
#if defined(jpn)
			func_02050cc0
#else
			func_0204f7e8
#endif
			(layout->pTextWindow_4_, x, y, element->unknown_c_, element->fontSize_3_0_, element->colorIndex_3_4_, &element->width_8_, &element->height_a_,
				element->unknown_10_4_, element->unknown_10_0_, element->unknown_10_5_, element->unknown_10_6_);
			break;
		}
#if !defined(jpn)
		case 3:
			func_ov023_021e2030((int)layout->pTextWindow_4_, x, y, element->unknown_c_);
			break;
#endif
		}
	}
}
