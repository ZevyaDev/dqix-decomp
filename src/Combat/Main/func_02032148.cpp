#include <globaldefs.h>
#include "System/Matrix.h"

// obj-02032148 anchor/shape pair, reconstructed from the call site at
// dqix-decomp/src/Combat/Main/func_02094b9c.cpp:26, which passes
// (anchor, &shape, shape.ext1). There the shape is filled as
//   x = pos[0], y = pos[1], z = pos[2], ext0 = size[0], ext1 = size[1]
// and size[2] is known to be 0 on this path (the caller takes the size[2]==0
// branch). The third argument is dead -- the body never reads r2.
struct Shape02094b9c { fix32_t x, y, z, ext0, ext1; };

// USA: func_02032148
// Point-vs-shapes test: reject unless anchor->y lies in [shape->y, shape->y+ext1],
// then accept when ext0^2 >= dx^2 + dz^2.
//
// Every tail choice below is codegen-forced, not stylistic:
//   * dx declared BEFORE dz -- dx falls to the scratch `lr` and dz takes the lowest
//     callee-saved register r4, and the a->x/s->x/a->z/sub/s->z/ext0/sub load burst
//     becomes the software-pipelined interleave the ROM has.
//   * each square is assigned BACK INTO its own difference local rather than into a
//     fresh `d2`. The reuse is what shortens the live range so mwccarm issues the
//     three smull's in the order dz2, dx2, ext0^2.
//   * the sum is written INLINE in the comparison, not through a named temp. That
//     creates the `add` node after the radius subtree, so the radius `orr` finishes
//     at 0x0084 and the `add` lands in the just-freed r1 at 0x0088.
extern "C" ARM int func_02032148(const Vector3fix* anchor, const struct Shape02094b9c* s, int e) {
    if (s->y > anchor->y) { return 0; }
    if (s->y + s->ext1 < anchor->y) { return 0; }

    fix32_t dx = anchor->x - s->x;
    fix32_t dz = anchor->z - s->z;
    dz = FIX32_MULTIPLY(dz, dz);
    dx = FIX32_MULTIPLY(dx, dx);
    return FIX32_MULTIPLY(s->ext0, s->ext0) >= dx + dz;
}