#include <globaldefs.h>

struct GXOamAttr0223bbd8 { unsigned int attr01; unsigned short attr2; unsigned short attr3; };
struct OamGroup0223bbd8 { unsigned char pad[8]; GXOamAttr0223bbd8* oam; unsigned char count; };

static inline void G2_GetOBJPosition(const GXOamAttr0223bbd8* oam, unsigned int* x, unsigned int* y) {
    *x = (oam->attr01 & 0x1ff0000) >> 16;
    *y = oam->attr01 & 0xff;
}

static inline void G2_SetOBJPosition(GXOamAttr0223bbd8* oam, int x, int y) {
    oam->attr01 = (oam->attr01 & ~(0x1ff0000 | 0xff)) | (y & 0xff) | ((x & 0x1ff) << 16);
}

#pragma optimize_for_size off
// USA: func_ov031_0223bbd8
extern "C" ARM void func_ov031_0223bbd8(OamGroup0223bbd8* group, int index, int x, int y) {
    GXOamAttr0223bbd8* oam = group->oam;
    if (index >= 0) {
        G2_SetOBJPosition(&oam[index], x, y);
        return;
    }
    int baseX, baseY;
    G2_GetOBJPosition(&oam[0], (unsigned int*)&baseX, (unsigned int*)&baseY);
    G2_SetOBJPosition(&oam[0], x, y);
    int i;
    int dx = x - baseX;
    int dy = y - baseY;
    i = 1;
    if (i < group->count) {
        do {
            int curX, curY;
            G2_GetOBJPosition(&oam[i], (unsigned int*)&curX, (unsigned int*)&curY);
            G2_SetOBJPosition(&oam[i], dx + curX, curY + dy);
            i++;
        } while (i < group->count);
    }
}
