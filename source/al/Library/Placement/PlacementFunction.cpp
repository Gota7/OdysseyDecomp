#include "al/Library/Placement/PlacementFunction.h"
#include "al/Library/LiveActor/ActorInitFunction.h"

namespace al {
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

};