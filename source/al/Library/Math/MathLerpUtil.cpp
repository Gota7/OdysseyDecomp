#include "Math/MathLerpUtil.h"

namespace al {
    f32 easeIn(f32 n) {
        return (((n * -0.5f) + 1.5f) * n) * n;
    }
    f32 easeOut(f32 n) {
        return (((n * -0.5f) * n) + 1.5f) * n;
    }
    f32 easeInOut(f32 n) {
        return (((n * -2.0f) + 3.0f) * n) * n;
    }
    f32 squareIn(f32 n) {
        return n * n;
    }
    f32 squareOut(f32 n) {
        return (2.0f - n) * n;
    }
    f32 powerIn(f32 n, f32 pow) {
        return powf(n, pow);
    }
    f32 powerOut(f32 n, f32 pow) {
        return powf(n, 1.0f / pow);
    }
    f32 exponentIn(f32 n, f32 exp);
    f32 exponentOut(f32 n, f32 exp) {
        return 1.0f - (1.0f - n) * (exp2f(((1.0f - n) - 1.0f) * exp));
    }
    f32 lerpValue(f32 min, f32 max, f32 time) {
        if (time < 0.0f)
            time = 0.0f;
        else if (time > 1.0f)
            time = 1.0f;
        return (min * (1.0f - time) + (time * max));
    }
}    // namespace al