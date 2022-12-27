#include "al/Library/Placement/PlacementFunction.h"
#include "al/Library/Base/String.h"
#include "al/Library/LiveActor/ActorInitFunction.h"
#include "al/Library/Yaml/ByamlIter.h"
#include "math/seadMatrixCalcCommon.h"

namespace al {

    bool isValidInfo(const PlacementInfo &rInfo) {
        return rInfo._0.isValid();
    }

    bool isPlaced(const ActorInitInfo &rInfo) {
        return rInfo.mPlacementInfo->_0.isValid();
    }

    void getObjectName(const char **pOutName, const ActorInitInfo &rInfo) {
        getObjectName(pOutName, *rInfo.mPlacementInfo);
    }

    void getObjectName(const char **pOutName, const PlacementInfo &rInfo) {
        const char* unitConf = "";

        if (rInfo._0.tryGetStringByKey(&unitConf, "UnitConfigName")) {
            if (!al::isEqualString(unitConf, "")) {
                *pOutName = unitConf;
            }
        }
    }

    bool tryGetObjectName(const char **pOutName, const PlacementInfo &rInfo) {
        const char* unitConf = "";

        if (rInfo._0.tryGetStringByKey(&unitConf, "UnitConfigName")) {
            if (!al::isEqualString(unitConf, "")) {
                *pOutName = unitConf;
                return true;
            }
        }

        return false;
    }

    bool tryGetObjectName(const char **pOutName, const ActorInitInfo &rInfo) {
        return tryGetObjectName(pOutName, *rInfo.mPlacementInfo);
    }

    bool tryGetStringArg(const char **pOutName, const PlacementInfo &rInfo, const char *pArg) {
        const char* arg = "";

        if (rInfo._0.tryGetStringByKey(&arg, pArg)) {
            if (!al::isEqualString(arg, "")) {
                *pOutName = arg;
                return true;
            }
        }

        return false;
    }

    bool isObjectName(const ActorInitInfo &rInfo, const char *pObjName) {
        return isObjectName(*rInfo.mPlacementInfo, pObjName);
    }

    bool isObjectName(const PlacementInfo &rInfo, const char *pObjName) {
        const char* unitConf = "";

        if (rInfo._0.tryGetStringByKey(&unitConf, "UnitConfigName")) {
            if (!al::isEqualString("", unitConf)) {
                return al::isEqualString(unitConf, pObjName);
            }
        }

        return false;
    }

    bool isObjectNameSubStr(const ActorInitInfo &rInfo, const char *pObjName) {
        return isObjectNameSubStr(*rInfo.mPlacementInfo, pObjName);
    }

    bool isObjectNameSubStr(const PlacementInfo &rInfo, const char *pObjName) {
        const char* unitConf = "";

        if (rInfo._0.tryGetStringByKey(&unitConf, "UnitConfigName")) {
            if (!al::isEqualString("", unitConf)) {
                return al::isEqualSubString(unitConf, pObjName);
            }
        }

        return false;
    }

    bool tryGetClassName(const char **pClassName, const ActorInitInfo &rInfo) {
        return tryGetClassName(pClassName, *rInfo.mPlacementInfo);
    }

    bool tryGetClassName(const char **pClassName, const PlacementInfo &rInfo) {
        PlacementInfo info;
        
        if (!tryGetPlacementInfoByKey(&info, rInfo, "UnitConfig")) {
            return false;
        }
        
        const char* paramConf = "";

        if (!info._0.tryGetStringByKey(&paramConf, "ParameterConfigName")) {
            return false;
        }

        if (al::isEqualString("", paramConf)) {
            return false;   
        }

        *pClassName = paramConf;
        return true;
    }

    bool tryGetPlacementInfoByKey(PlacementInfo *pOutInfo, const PlacementInfo &rInfo, const char *pKey) {
        ByamlIter iter;

        if (rInfo._0.tryGetIterByKey(&iter, pKey)) {
            pOutInfo->set(iter, rInfo._10);
            return true;
        }

        return false;
    }

    void getClassName(const char **pOut, const ActorInitInfo &rInfo) {
        tryGetClassName(pOut, *rInfo.mPlacementInfo);
    }

    void getClassName(const char **pOut, const PlacementInfo &rInfo) {
        tryGetClassName(pOut, rInfo);
    }

    bool isClassName(const ActorInitInfo &rInfo, const char *pClassName) {
        return isClassName(*rInfo.mPlacementInfo, pClassName);
    }

    bool isClassName(const PlacementInfo &rInfo, const char *pClassName) {
        const char* className = nullptr;

        if (tryGetClassName(&className, rInfo)) {
            return isEqualString(className, pClassName);
        }

        return false;
    }

    void getDisplayName(const char **pDispName, const ActorInitInfo &rInfo) {
        tryGetDisplayName(pDispName, *rInfo.mPlacementInfo);
    }

    bool tryGetDisplayName(const char **pDispName, const ActorInitInfo &rInfo) {
        return tryGetDisplayName(pDispName, *rInfo.mPlacementInfo);
    }

    void getDisplayName(const char **pDispName, const PlacementInfo &rInfo) {
        tryGetDisplayName(pDispName, rInfo);
    }

    bool tryGetDisplayName(const char **pDispName, const PlacementInfo &rInfo) {
        PlacementInfo info;
        
        if (!tryGetPlacementInfoByKey(&info, rInfo, "UnitConfig")) {
            return false;
        }
        
        const char* disp = "";

        if (!info._0.tryGetStringByKey(&disp, "DisplayName")) {
            return false;
        }

        if (al::isEqualString("", disp)) {
            return false;   
        }

        *pDispName = disp;
        return true;
    }

    void getPlacementTargetFile(const char **pFile, const PlacementInfo &rInfo) {
        PlacementInfo info;
        tryGetPlacementInfoByKey(&info, rInfo, "UnitConfig");

        auto file = "";
        if (info._0.tryGetStringByKey(&file, "PlacementTargetFile") && !al::isEqualString("", file)) {
            *pFile = file;
        }
    }

    bool tryGetTrans(sead::Vector3f *pTrans, const ActorInitInfo &rInfo) {
        PlacementInfo* info = rInfo.mPlacementInfo;

        if (!tryGetByamlV3f(pTrans, info->_0, "Translate")) {
            return false;
        }

        multZoneMtx(pTrans, *info);
        return true;
    }

    bool tryGetTrans(sead::Vector3f *pTrans, const PlacementInfo &rInfo) {
        if (!tryGetByamlV3f(pTrans, rInfo._0, "Translate")) {
            return false;
        }

        multZoneMtx(pTrans, rInfo);
        return true;
    }

    void multZoneMtx(sead::Vector3f *pMult, const PlacementInfo &rInfo) {
        sead::Matrix34f zoneMatrix;

        if (!tryGetZoneMatrixTR(&zoneMatrix, rInfo)) {
            return;
        }

        pMult->mul(zoneMatrix);
    }

    void getTrans(sead::Vector3f *pTrans, const PlacementInfo &rInfo) {
        if (!tryGetByamlV3f(pTrans, rInfo._0, "Translate")) {
            return;
        }

        multZoneMtx(pTrans, rInfo);
    }

    void getTrans(sead::Vector3f *pTrans, const ActorInitInfo &rInfo) {
        PlacementInfo* plInf = rInfo.mPlacementInfo;

        if (!tryGetByamlV3f(pTrans, plInf->_0, "Translate")) {
            return;
        }

         multZoneMtx(pTrans, *plInf);
    }

    bool tryGetRotate(sead::Vector3f *pRotate, const ActorInitInfo &rInfo) {
        return tryGetRotate(pRotate, *rInfo.mPlacementInfo);
    }

    // al::tryGetRotate(sead::Vector3<float> *, al::PlacementInfo const&)

    #ifdef NON_MATCHING
    // some scheduling issues
    bool tryGetZoneMatrixTR(sead::Matrix34f *pOutMtx, const PlacementInfo &rInfo) {
        ByamlIter iter = rInfo._10;

        if (!iter.isValid()) {
            return false;
        }

        sead::Vector3f translate = sead::Vector3f::zero;

        if (!tryGetByamlV3f(&translate, iter, "Translate")) {
            return false;
        }

        sead::Vector3f rotate = sead::Vector3f::zero;

        if (!tryGetByamlV3f(&rotate, iter, "Rotate")) {
            return false;
        }

        pOutMtx->makeRT(rotate * 0.017453f, translate);
        return true;
    }
    #endif

    bool tryGetArg(int *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        return rInfo.mPlacementInfo->_0.tryGetIntByKey(pOut, pKey);
    }

    bool tryGetArg(int *pOut, const PlacementInfo &rInfo, const char *pKey) {
        return rInfo._0.tryGetIntByKey(pOut, pKey);
    }

    bool tryGetArg(f32 *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        return rInfo.mPlacementInfo->_0.tryGetFloatByKey(pOut, pKey);
    }

    bool tryGetArg(f32 *pOut, const PlacementInfo &rInfo, const char *pKey) {
        return rInfo._0.tryGetFloatByKey(pOut, pKey);
    }

    bool tryGetArg(bool *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        return rInfo.mPlacementInfo->_0.tryGetBoolByKey(pOut, pKey);
    }

    bool tryGetArg(bool *pOut, const PlacementInfo &rInfo, const char *pKey) {
        return rInfo._0.tryGetBoolByKey(pOut, pKey);
    }

    void getArg(int *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        rInfo.mPlacementInfo->_0.tryGetIntByKey(pOut, pKey);
    }

    void getArg(int *pOut, const PlacementInfo &rInfo, const char *pKey) {
        rInfo._0.tryGetIntByKey(pOut, pKey);
    }

    void getArg(f32 *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        rInfo.mPlacementInfo->_0.tryGetFloatByKey(pOut, pKey);
    }

    void getArg(f32 *pOut, const PlacementInfo &rInfo, const char *pKey) {
        rInfo._0.tryGetFloatByKey(pOut, pKey);
    }

    void getArg(bool *pOut, const ActorInitInfo &rInfo, const char *pKey) {
        rInfo.mPlacementInfo->_0.tryGetBoolByKey(pOut, pKey);
    }

    void getArg(bool *pOut, const PlacementInfo &rInfo, const char *pKey) {
        rInfo._0.tryGetBoolByKey(pOut, pKey);
    }

    s32 getArgS32(const ActorInitInfo &rInfo, const char *pKey) {
        s32 ret = 0;
        rInfo.mPlacementInfo->_0.tryGetIntByKey(&ret, pKey);
        return ret;
    }

    f32 getArgF32(const ActorInitInfo &rInfo, const char *pKey) {
        f32 ret = 0;
        rInfo.mPlacementInfo->_0.tryGetFloatByKey(&ret, pKey);
        return ret;
    }



    bool tryGetRailPointPos(sead::Vector3f *pPoint, const PlacementInfo &rInfo) {
        if (!tryGetByamlV3f(pPoint, rInfo._0, "Translate")) {
            return false;
        }

        multZoneMtx(pPoint, rInfo);
        return true;
    }

};