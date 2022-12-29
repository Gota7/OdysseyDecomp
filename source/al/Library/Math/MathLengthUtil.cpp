#include "Math/MathLengthUtil.h"

namespace al {
    bool isNear(float n, float n2, float t) {
        auto v4 = sead::MathCalcCommon<float>::abs(n - n2);
        auto v5 = -t;
        if (t > 0.0)
            v5 = t;
        return v4 < v5;
    }    // this can probably be simplified

    // void isNear(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    // void isNear(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // void isNear(sead::Color4f const &, sead::Color4f const &, float);
    bool isNearZero(float n, float t) { return sead::MathCalcCommon<float>::abs(n) < t; }
    // bool isNearZero(sead::Matrix34<float> const &matrix, float tolerance);
    // void isNearZeroOrGreater(float, float);
    // void isNearZeroOrLess(float, float);
    // void isExistNearZeroVal(sead::Vector3<float> const &, float);
    // void isNormalize(sead::Vector3<float> const &, float);
    // void isNormalize(sead::Matrix34<float> const &);
    // void isParallelDirection(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    // void isReverseDirection(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // void isNearDirection(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    // void isNearDirection(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // void isInRange(int, int, int);
    // bool isInRange(float n, float min, float max);
    // void normalize(sead::Vector2<float> *);
    // void normalize(sead::Vector3<float> *);
    // void normalize(sead::Matrix33<float> *);
    // void normalize(sead::Matrix34<float> *);
    // void tryNormalizeOrZero(sead::Vector2<float> *);
    // void tryNormalizeOrZero(sead::Vector2<float> *, sead::Vector2<float> const &);
    // void tryNormalizeOrDirZ(sead::Vector3<float> *);
    // void tryNormalizeOrDirZ(sead::Vector3<float> *, sead::Vector3<float> const &);
    // void normalizeComplement(sead::Matrix34<float> *);
    // void getMaxAbsElementIndex(sead::Vector3<float> const &);
    // void setLength(sead::Vector3<float> *, float);
    // void setProjectionLength(sead::Vector3<float> *, sead::Vector3<float> const &, float);
    // void limitLength(sead::Vector2<float> *, sead::Vector2<float> const &, float);
    // void limitLength(sead::Vector3<float> *, sead::Vector3<float> const &, float);
    // void normalizeAbs(float, float, float);
    float normalize(float n, float min, float max) {
        if (sead::Mathf::abs(max - min) < 0.001f) {
            if (n < min)
                return 0.0f;
            else
                return 1.0f;
        }

        float clamped = sead::Mathf::clamp(n, min, max);
        return (clamped - min) / (max - min);
    }

    // void normalize(int, int, int);
    // void sign(float);
    int sign(int n) {
        if (n < 0)
            return -1;
        if (n > 0)
            return 1;
        return 0;
    }
    // void cubeRoot(float);
    // void clampV3f(sead::Vector3<float> *v, sead::Vector3<float> const &min, sead::Vector3<float> const &max);
    // void clampV2f(sead::Vector2<float> *v, sead::Vector2<float> const &min, sead::Vector2<float> const &max);
}    // namespace al