#pragma once

#include <math/seadVector.h>

namespace al {
    void calcAngleRadian(const sead::Vector3f &, const sead::Vector3f &);
    void calcAngleDegree(const sead::Vector3f &, const sead::Vector3f &);
    void calcAngleDegree(const sead::Vector2f &, const sead::Vector2f &);
    void isNearZero(const sead::Vector2f &, f32);
    void tryCalcAngleDegree(f32 *, const sead::Vector3f &, const sead::Vector3f &);
    void isNearZero(const sead::Vector3f &, f32);
    void calcAngleOnPlaneRadian(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &);
    void verticalizeVec(sead::Vector3f *, const sead::Vector3f &, const sead::Vector3f &);
    void calcAngleOnPlaneDegree(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &);
    void calcAngleOnPlaneDegreeOrZero(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &);
    void tryCalcAngleOnPlaneDegree(f32 *, const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &);
    void isParallelDirection(const sead::Vector3f &, const sead::Vector3f &, f32);
    void calcAngleSignOnPlane(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &);
    void isNearAngleRadian(const sead::Vector2f &, const sead::Vector2f &, f32);
    void normalize(sead::Vector2f *, const sead::Vector2f &);
    void isNearAngleRadian(const sead::Vector3f &, const sead::Vector3f &, f32);
    void normalize(sead::Vector3f *, const sead::Vector3f &);
    void isNearAngleDegree(const sead::Vector2f &, const sead::Vector2f &, f32);
    void isNearAngleDegree(const sead::Vector3f &, const sead::Vector3f &, f32);
    void isNearAngleRadianHV(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &, f32, f32);
    void tryNormalizeOrZero(sead::Vector3f *, const sead::Vector3f &);
    void tryNormalizeOrZero(sead::Vector3f *);
    void isNearAngleDegreeHV(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &, f32, f32);
    void isInAngleOnPlaneDegreeHV(const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &, f32, f32, f32, f32);
}    // namespace al