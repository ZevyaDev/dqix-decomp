#include <globaldefs.h>

struct Struct_0201a300_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    int unknown_28_;
};

// USA: ResetNodeGraph_020280b0
extern "C" ARM void ResetNodeGraph_020280b0(struct Struct_0201a300_5* graph) {
    graph->unknown_1c_ = 0;
    graph->unknown_0_ = 0;
    graph->unknown_1_ = 0;
    graph->unknown_2_ = 0;
    graph->unknown_3_ = 0;
    graph->unknown_4_ = 0;
    graph->unknown_8_ = 0;
    graph->unknown_c_ = 0;
    graph->unknown_10_ = 0;
    graph->unknown_14_ = 0;
    graph->unknown_18_ = 0;
    graph->unknown_20_ = 1;
    graph->unknown_24_ = 0;
    graph->unknown_25_ = 0;
    graph->unknown_28_ = 0;
}
