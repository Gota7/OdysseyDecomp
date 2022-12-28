#pragma once

#include <gfx/seadColor.h>
#include <math/seadVector.h>

namespace al {
    float easeIn(float);
    float easeOut(float);
    float easeInOut(float);
    float squareIn(float);
    float squareOut(float);
    float powerIn(float,float);
    float powerOut(float,float);
    float logarithmIn(float,float);
    float logarithmOut(float,float);
    float exponentIn(float,float);
    float exponentOut(float,float);
    float hermiteRate(float,float,float);
    float calcFourthOrderRate(float,float);
    float calcTriangleWave01(float,float);
    float calcTriangleWave(float,float,float,float);
    float lerpValue(float,float,float);
    float calcRate01(float,float,float);
    float easeByType(float,int);
    float lerpValue(float,float,float,float,float);
    float lerpDegree(float,float,float);
    float lerpRadian(float,float,float);
    float lerpVec(sead::Vector2<float> *,sead::Vector2<float> const&,sead::Vector2<float> const&,float);
    float lerpVec(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float);
    float lerpVecHV(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float);
    float separateVectorHV(sead::Vector3<float> *,sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&);
    float lerpColor(sead::Color4f *,sead::Color4f const&,sead::Color4f const&,float);
    float lerpLogValueEaseIn(float,float,float,float);
    float lerpLogValueEaseOut(float,float,float,float);
    float lerpLogVecEaseIn(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float);
    float lerpLogVecEaseOut(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float);
    float lerpExponentValueEaseIn(float,float,float,float);
    float lerpExponentValueEaseOut(float,float,float,float);
    float lerpExponentVecEaseIn(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float);
    float lerpExponentVecEaseOut(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float);
    float clampLeapMinAbs(float,float,float,float);
    float hermite(float,float,float,float,float);
    float hermite(float,float,float,float,float,float);
    float hermiteVec(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,sead::Vector3<float> const&,sead::Vector3<float> const&,float);
    float converge(int,int,int);
    float converge(float,float,float);
    float convergeDegree(float,float,float);
    float convergeRadian(float,float,float);
    float convergeVec(sead::Vector2<float> *,sead::Vector2<float> const&,sead::Vector2<float> const&,float);
    float convergeVec(sead::Vector3<float> *,sead::Vector3<float> const&,sead::Vector3<float> const&,float);
    float diffNearAngleDegree(float,float);
    float isInRangeAngleDegree(float,float,float);
    float calcEyesAnimAngleInRange(float *,sead::Vector3<float> const&,sead::Vector3<float> const&,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float,float,float);
    float isSameSign(float,float);
    float reverseBit8(unsigned char);
    float reverseBit16(unsigned short);
    float reverseBit32(unsigned int);
    float calcVanDerCorput(unsigned int);
    float calcHammersleyPoint(sead::Vector2<float> *,unsigned int,unsigned int);
    float findMaxFromArray(int const*,int);
    float separateMinMax(sead::Vector3<float> *,sead::Vector3<float> *,sead::Vector3<float> const&);
    float findMinFromArray(int const*,int);
}