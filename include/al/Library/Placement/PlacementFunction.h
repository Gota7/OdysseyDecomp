#pragma once

#include "al/Library/Placement/PlacementId.h"
#include "al/Library/Placement/PlacementInfo.h"
#include <math/seadMatrix.h>
#include <math/seadQuat.h>
#include <math/seadVector.h>

namespace al {
    class ActorInitInfo;
    class AreaInitInfo;

    bool isValidInfo(const PlacementInfo &);
    bool isPlaced(const ActorInitInfo &);
    void getObjectName(const char **, const ActorInitInfo &);
    void getObjectName(const char **, const PlacementInfo &);
    bool tryGetObjectName(const char **, const PlacementInfo &);
    bool tryGetObjectName(const char **, const ActorInitInfo &);
    bool tryGetStringArg(const char **, const PlacementInfo &, const char *);
    bool isObjectName(const ActorInitInfo &, const char *);
    bool isObjectName(const PlacementInfo &, const char *);
    bool isObjectNameSubStr(const ActorInitInfo &, const char *);
    bool isObjectNameSubStr(const PlacementInfo &, const char *);
    bool tryGetClassName(const char **, const ActorInitInfo &);
    bool tryGetClassName(const char **, const PlacementInfo &);
    bool tryGetPlacementInfoByKey(PlacementInfo *, const PlacementInfo &, const char *);
    void getClassName(const char **, const ActorInitInfo &);
    void getClassName(const char **, const PlacementInfo &);
    bool isClassName(const ActorInitInfo &, const char *);
    bool isClassName(const PlacementInfo &, const char *);
    void getDisplayName(const char **, const ActorInitInfo &);
    bool tryGetDisplayName(const char **, const ActorInitInfo &);
    void getDisplayName(const char **, const PlacementInfo &);
    bool tryGetDisplayName(const char **, const PlacementInfo &);
    void getPlacementTargetFile(const char **, const PlacementInfo &);
    bool tryGetTrans(sead::Vector3f *, const ActorInitInfo &);
    bool tryGetTrans(sead::Vector3f *, const PlacementInfo &);
    void multZoneMtx(sead::Vector3f *, const PlacementInfo &);
    void getTrans(sead::Vector3f *, const PlacementInfo &);
    void getTrans(sead::Vector3f *, const ActorInitInfo &);
    bool tryGetRotate(sead::Vector3f *, const ActorInitInfo &);
    bool tryGetRotate(sead::Vector3f *, const PlacementInfo &);
    bool tryGetZoneMatrixTR(sead::Matrix34f *, const PlacementInfo &);
    void getRotate(sead::Vector3f *, const PlacementInfo &);
    bool tryGetQuat(sead::Quatf *, const ActorInitInfo &);
    bool tryGetQuat(sead::Quatf *, const PlacementInfo &);

    /* more matrix / vector postition funcs */

    bool tryGetArg(int *, const ActorInitInfo &, const char *);
    bool tryGetArg(int *, const PlacementInfo &, const char *);
    bool tryGetArg(f32 *, const ActorInitInfo &, const char *);
    bool tryGetArg(f32 *, const PlacementInfo &, const char *);
    bool tryGetArg(bool *, const ActorInitInfo &, const char *);
    bool tryGetArg(bool *, const PlacementInfo &, const char *);
    void getArg(int *, const ActorInitInfo &, const char *);
    void getArg(int *, const PlacementInfo &, const char *);
    void getArg(f32 *, const ActorInitInfo &, const char *);
    void getArg(f32 *, const PlacementInfo &, const char *);
    void getArg(bool *, const ActorInitInfo &, const char *);
    void getArg(bool *, const PlacementInfo &, const char *);
    s32 getArgS32(const ActorInitInfo &, const char *);
    f32 getArgF32(const ActorInitInfo &, const char *);
    void getArgV3f(sead::Vector3f *, const ActorInitInfo &, const char *);
    bool tryGetArgV3f(sead::Vector3f *, const ActorInitInfo &, const char *);
    void getArgV3f(sead::Vector3f *, const PlacementInfo &, const char *);
    bool tryGetArgV3f(sead::Vector3f *, const PlacementInfo &, const char *);
    bool isArgBool(const ActorInitInfo &, const char *);
    bool isArgBool(const PlacementInfo &, const char *);
    bool isArgString(const ActorInitInfo &, const char *, const char *);
    void getStringArg(const char **, const ActorInitInfo &, const char *);
    bool isArgString(const PlacementInfo &, const char *, const char *);
    void getStringArg(const char **, const PlacementInfo &, const char *);
    void getStringArg(const char **, const AreaInitInfo &, const char *);
    const char* getStringArg(const ActorInitInfo &, const char *);
    const char* getStringArg(const AreaInitInfo &, const char *);
    const char* getStringArg(const PlacementInfo &, const char *);
    bool tryGetStringArg(const char **, const ActorInitInfo &, const char *);
    bool tryGetStringArg(const char **, const AreaInitInfo &, const char *);
    bool tryGetArgV2f(sead::Vector2f *, const ActorInitInfo &, const char *);
    bool tryGetArgV2f(sead::Vector2f *, const PlacementInfo &, const char *);
};