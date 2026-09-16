struct Holder { char pad[0x18]; int task; };
struct Work { char pad[0xea8]; int other; int state; };
extern Holder gHolder;
extern void* GetLoader();
extern void Remove(void*, int);
extern void Later();
extern int Val(int);
extern void Sink(int);

#define LIVE                                                                       \
    int v0 = Val(0), v1 = Val(1), v2 = Val(2), v3 = Val(3), v4 = Val(4), v5 = Val(5), \
        v6 = Val(6), v7 = Val(7), v8 = Val(8), v9 = Val(9), v10 = Val(10),           \
        v11 = Val(11), v12 = Val(12), v13 = Val(13), v14 = Val(14), v15 = Val(15);
#define USE Sink(v0 + v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10 + v11 + v12 + v13 + v14 + v15);

extern "C" void guarded(Work* w) {
    void* loader = GetLoader();
    LIVE
    if (w->state == 2) {
        Remove(loader, gHolder.task);
        gHolder.task = -1;
        w->state = 3;
    }
    if (w->state == 3) {
        Later();
    }
    USE
}

extern "C" void nested(Work* w) {
    void* loader = GetLoader();
    LIVE
    if (w->state == 2) {
        Remove(loader, gHolder.task);
        gHolder.task = -1;
        w->state = 3;
        if (w->state == 3) {
            Later();
        }
    }
    if (w->state == 3) {
        Later();
    }
    USE
}
