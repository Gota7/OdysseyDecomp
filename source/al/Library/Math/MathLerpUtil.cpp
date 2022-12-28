#include "Math/MathLerpUtil.h"

namespace al {
    float easeIn(float n) { return (((n * -0.5f) + 1.5f) * n) * n; }
    float easeOut(float n) { return (((n * -0.5f) * n) + 1.5f) * n; }
    float easeInOut(float n) { return (((n * -2.0f) + 3.0f) * n) * n; }
    float squareIn(float n) { return n * n; }
    float squareOut(float n) { return (2.0f - n) * n; }
    float powerIn(float n, float pow) { return powf(n, pow); }
    float powerOut(float n, float pow) { return powf(n, 1.0f / pow); }
    // float logarithmIn(float, float);
    // float logarithmOut(float, float);
    float exponentIn(float n, float exp);
    float exponentOut(float n, float exp) { return 1.0f - (1.0f - n) * (exp2f(((1.0f - n) - 1.0f) * exp)); }
    // float hermiteRate(float, float, float);
    // float calcFourthOrderRate(float, float);
    // float calcTriangleWave01(float x, float y);
    // float calcTriangleWave(float, float, float, float);
    float lerpValue(float min, float max, float time) {
        if (time < 0.0f)
            time = 0.0f;
        else if (time > 1.0f)
            time = 1.0f;
        return (min * (1.0f - time) + (time * max));
    }
    // float calcRate01(float, float, float);
    // float easeByType(float, int);
    // float lerpValue(float, float, float, float, float);
    // float lerpDegree(float, float, float);
    // float lerpRadian(float, float, float);
    // float lerpVec(sead::Vector2<float> *, sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    // float lerpVec(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // float lerpVecHV(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    // float separateVectorHV(sead::Vector3<float> *, sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &);
    // float lerpColor(sead::Color4f *, sead::Color4f const &, sead::Color4f const &, float);
    // float lerpLogValueEaseIn(float, float, float, float);
    // float lerpLogValueEaseOut(float, float, float, float);
    // float lerpLogVecEaseIn(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    // float lerpLogVecEaseOut(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    // float lerpExponentValueEaseIn(float, float, float, float);
    // float lerpExponentValueEaseOut(float, float, float, float);
    // float lerpExponentVecEaseIn(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    // float lerpExponentVecEaseOut(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    // float clampLeapMinAbs(float, float, float, float);
    // float hermite(float, float, float, float, float);
    // float hermite(float, float, float, float, float, float);
    // float hermiteVec(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // float converge(int, int, int);
    // float converge(float, float, float);
    // float convergeDegree(float, float, float);
    // float convergeRadian(float, float, float);
    // float convergeVec(sead::Vector2<float> *, sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    // float convergeVec(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    // float diffNearAngleDegree(float, float);
    // float isInRangeAngleDegree(float, float, float);
    // float calcEyesAnimAngleInRange(float *, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float, float, float);
    // float isSameSign(float, float);
    // float reverseBit8(unsigned char);
    // float reverseBit16(unsigned short);
    // float reverseBit32(unsigned int);
    // float calcVanDerCorput(unsigned int);
    // float calcHammersleyPoint(sead::Vector2<float> *, unsigned int, unsigned int);
    // float findMaxFromArray(int const *, int);
    // float separateMinMax(sead::Vector3<float> *, sead::Vector3<float> *, sead::Vector3<float> const &);
    // float findMinFromArray(int const *, int);
}    // namespace al