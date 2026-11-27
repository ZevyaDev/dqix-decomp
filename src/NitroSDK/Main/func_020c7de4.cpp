#include <globaldefs.h>

struct ValueQueue_ov031_0224e204 {
    int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_;
    int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_;
};

// USA: InitValueQueue_020c7de4
extern "C" ARM void InitValueQueue_020c7de4(struct ValueQueue_ov031_0224e204 *queue, int entries, int capacity) {
    queue->unknown_4_ = 0;
    queue->unknown_0_ = 0;
    queue->unknown_c_ = 0;
    queue->unknown_8_ = 0;
    queue->unknown_10_ = entries;
    queue->unknown_14_ = capacity;
    queue->unknown_18_ = 0;
    queue->unknown_1c_ = 0;
}
