#include <globaldefs.h>
#include <World/Zone3D.h>
#include <GameState/GameState.h>

extern "C" void* func_0205ec34(void);
void* GetField0x3f8Address(GameState* battleStruct);
int GetBitmapPixel(unsigned char* base, int row, int col);
void* GetPointerFromArray0x3c(unsigned char* obj, unsigned int index);
extern "C" int _Z35LookupAndForEachNodeIfMatch02064b24PvitS_(void* a, int mode, unsigned short id, void* c);

struct Obj0201b600;
struct Elem0201b600;
struct FeatureElem02017a94;
// Declared under its literal mangled name, as IsElemFlag4ClearByKeys_0201bd74.cpp and the
// other three FindElemByKeys callers already do: the symbol is bound, and the call site
// needs the third argument narrowed as UNSIGNED short (lsl/lsr, not lsl/asr).
extern "C" struct FeatureElem02017a94* _Z14FindElemByKeysP11Obj0201b600is(
    struct Obj0201b600* obj, int key1, unsigned short key2);

struct FeatureElem02017a94 {
    unsigned short key;   // 0x00
    unsigned short flags; // 0x02
    unsigned char pad[0x2b];
};

struct FeatureNode02017a94 {
    unsigned char pad00[0x2d];
    unsigned char id2d;
    unsigned short field2e;
    unsigned char pad30[0x70 - 0x30];
    struct FeatureNode02017a94* next;
};

// Stack context handed to _Z35LookupAndForEachNodeIfMatch02064b24PvitS_ as its 4th argument.
// That callee clears field30 before walking; we only ever fill field0c.
struct AppendContext02017a94 {
    unsigned char pad00[0x0c];
    unsigned int zoneId;
    unsigned char pad10[0x30 - 0x10];
    unsigned int field30;
};

// USA: func_02017a94
extern "C" ARM void func_02017a94(Zone3D* zone) {
    GameState* gs = GameState::GetInstance();
    if (gs == NULL) {
        return;
    }
    if (GetField0x3f8Address(gs) == NULL) {
        return;
    }
    unsigned char* bmp = (unsigned char*)func_0205ec34();
    int row;
    int colLow;
    int colHigh;
    if (bmp != NULL && *(unsigned char*)((char*)zone + 0x281d) != 0) {
        for (row = 0; row < 2; row++) {
            for (colLow = 0; colLow < 0x7f; colLow++) {
                if (GetBitmapPixel(bmp, (unsigned char)row, (short)colLow)) {
                    struct FeatureElem02017a94* e =
                        _Z14FindElemByKeysP11Obj0201b600is((struct Obj0201b600*)zone, row, colLow);
                    if (e != NULL) {
                        e->flags &= ~4;
                    }
                }
            }
            for (colHigh = 0x80; colHigh < 0xff; colHigh++) {
                if (GetBitmapPixel(bmp, (unsigned char)row, (short)colHigh)) {
                    struct FeatureElem02017a94* e =
                        _Z14FindElemByKeysP11Obj0201b600is((struct Obj0201b600*)zone, row, colHigh - 0x80);
                    struct FeatureNode02017a94* n;
                    if (e != NULL) {
                        e->flags |= 4;
                        if ((e->flags & 8) != 0) {
                            unsigned int cur;
                            unsigned short mask;
                            e->flags |= 1;
                            n = (struct FeatureNode02017a94*)
                                GetPointerFromArray0x3c((unsigned char*)zone->substruct_6c_, 2);
                            while (n != NULL) {
                                if (n->id2d == e->key) {
                                    // (cur >> 4) and ((mask << 20) >> 16) are spelled in the
                                    // 16-bit high-half form: mwccarm only emits lsl #16 / lsr #20
                                    // for the first and lsr #16 (not asr) for the second when the
                                    // shift runs in the unsigned domain. Semantics are identical
                                    // (cur is 16-bit, so no bits are shifted out).
                                    cur = n->field2e;
                                    mask = (unsigned short)(((cur << 16) >> 20) | 1);
                                    n->field2e = (cur & 0xffff000f) | ((unsigned int)(mask << 20) >> 16);
                                    break;
                                }
                                n = n->next;
                            }
                        }
                    }
                }
            }
        }
        struct AppendContext02017a94 ctx;
        ctx.zoneId = zone->currentZoneID_;
        _Z35LookupAndForEachNodeIfMatch02064b24PvitS_(bmp, 3, 0x6c, &ctx);
        _Z35LookupAndForEachNodeIfMatch02064b24PvitS_(bmp, 0x14, 0x6c, &ctx);
        // Written through the Zone3D member rather than the same raw-pointer expression the
        // guard uses: identical address, but mwccarm then cannot CSE it into a callee-saved
        // register across the loop nest (the ROM recomputes `add sl,#0x2000` at both sites).
        zone->unk_276c[0x281d - 0x276c] = 0;
    }
}