#pragma once

#include <math/seadVector.h>

namespace al {
    void calcAngleRadian(sead::Vector3<float> const &, sead::Vector3<float> const &);
    void calcAngleDegree(sead::Vector3<float> const &, sead::Vector3<float> const &);
    void calcAngleDegree(sead::Vector2<float> const &, sead::Vector2<float> const &);
    void isNearZero(sead::Vector2<float> const &, float);
    void tryCalcAngleDegree(float *, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void isNearZero(sead::Vector3<float> const &, float);
    void calcAngleOnPlaneRadian(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void verticalizeVec(sead::Vector3<float> *, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void calcAngleOnPlaneDegree(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void calcAngleOnPlaneDegreeOrZero(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void tryCalcAngleOnPlaneDegree(float *, sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void isParallelDirection(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    void calcAngleSignOnPlane(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &);
    void isNearAngleRadian(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    void normalize(sead::Vector2<float> *, sead::Vector2<float> const &);
    void isNearAngleRadian(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    void normalize(sead::Vector3<float> *, sead::Vector3<float> const &);
    void isNearAngleDegree(sead::Vector2<float> const &, sead::Vector2<float> const &, float);
    void isNearAngleDegree(sead::Vector3<float> const &, sead::Vector3<float> const &, float);
    void isNearAngleRadianHV(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    void tryNormalizeOrZero(sead::Vector3<float> *, sead::Vector3<float> const &);
    void tryNormalizeOrZero(sead::Vector3<float> *);
    void isNearAngleDegreeHV(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float);
    void isInAngleOnPlaneDegreeHV(sead::Vector3<float> const &, sead::Vector3<float> const &, sead::Vector3<float> const &, float, float, float, float);
}    // namespace al