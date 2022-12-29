#pragma once

#include <gfx/seadColor.h>
#include <math/seadMatrix.h>
#include <math/seadVector.h>
#include <math/seadMathCalcCommon.h>
#include <cmath>

namespace al {
    bool isNear(float, float, float);
    bool isNear(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    bool isNear(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    bool isNear(sead::Color4f const &, sead::Color4f const &, float);
    bool isNearZero(float, float);
    bool isNearZero(sead::Matrix34<float> const &, float);
    bool isNearZeroOrGreater(float, float);
    bool isNearZeroOrLess(float, float);
    bool isExistNearZeroVal(sead::Vector3<float> const &, float);
    bool isNormalize(sead::Vector3<float> const &, float);
    bool isNormalize(sead::Matrix34<float> const &);
    bool isParallelDirection(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    bool isReverseDirection(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    bool isNearDirection(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    bool isNearDirection(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    bool isInRange(int, int, int);
    bool isInRange(float, float, float);
    void normalize(sead::Vector2<float> *);
    void normalize(sead::Vector3<float> *);
    void normalize(sead::Matrix33<float> *);
    void normalize(sead::Matrix34<float> *);
    void tryNormalizeOrZero(sead::Vector2<float> *);
    void tryNormalizeOrZero(sead::Vector2<float> *, sead::Vector2<float> const &);
    void tryNormalizeOrDirZ(sead::Vector3<float> *);
    void tryNormalizeOrDirZ(sead::Vector3<float> *, sead::Vector3<float> const &);
    void normalizeComplement(sead::Matrix34<float> *);
    void getMaxAbsElementIndex(sead::Vector3<float> const &);
    void setLength(sead::Vector3<float> *, float);
    void setProjectionLength(sead::Vector3<float> *, sead::Vector3<float> const &, float);
    void limitLength(sead::Vector2<float> *, sead::Vector2<float> const &, float);
    void limitLength(sead::Vector3<float> *, sead::Vector3<float> const &, float);
    void normalizeAbs(float, float, float);
    float normalize(float, float, float);
    float normalize(int, int, int);
    float sign(float);
    int sign(int);
    void cubeRoot(float);
    void clampV3f(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void clampV2f(sead::Vector2<float> *, sead::Vector2<float> const &, sead::Vector2<float> const &);
}    // namespace al