#pragma once

#include "IUse/IUse.h"
#include "IUse/IUseAreaObj.h"
#include "IUse/IUseCamera.h"
#include "Placement/PlacementInfo.h"

namespace al {
    class AudioDirector;
    class LayoutInitInfo;
    class ViewIdHolder;

    class ActorInitInfo {
    public:
        u64* _0;
        al::PlacementInfo* mPlacementInfo;              // _8
        al::LayoutInitInfo* mLayoutInfo;                // _10
        al::AreaObjDirector* mAreaObjDirector;          // _18
        al::CameraDirector* mCameraDirector;            // _20
        u64* _28;
        u64* _30;
        u64* _38;
        u64* _40;
        u64* _48;
        u64* _50;
        u64* _58;
        u64* _60;
        u64* _68;
        u64* _70;
        al::SceneObjHolder* mSceneObjHolder;            // _78
        u64* _80;
        u64* _88;
        u64* _90;
        u64* _98;
        u64* _A0;
        u64* _A8;
        u64* _B0;
        u64* _B8;
        u64* _C0;
        u64* _C8;
        al::AudioDirector* mAudioDirector;              // _D0
        u64* _D8;
        u64* _E0;
        u64* _E8;
        u64* _F0;
        u64* _F8;
        ViewIdHolder* mIDHolder;                        // _100
    };
};