#include "Math/MathLengthUtil.h"

namespace al {
    bool isNear(f32 n, f32 n2, f32 t) {
        auto v4 = sead::MathCalcCommon<f32>::abs(n - n2);
        auto v5 = -t;
        if (t > 0.0)
            v5 = t;
        return v4 < v5;
    }    // this can probably be simplified
    bool isNearZero(f32 n, f32 t) {
        return sead::MathCalcCommon<f32>::abs(n) < t;
    }
    f32 normalize(f32 n, f32 min, f32 max) {
        if (sead::Mathf::abs(max - min) < 0.001f) {
            if (n < min)
                return 0.0f;
            else
                return 1.0f;
        }

        f32 clamped = sead::Mathf::clamp(n, min, max);
        return (clamped - min) / (max - min);
    }
    s32 sign(s32 n) {
        if (n < 0)
            return -1;
        if (n > 0)
            return 1;
        return 0;
    }
}    // namespace al