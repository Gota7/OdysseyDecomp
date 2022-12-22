#pragma once

#include <prim/seadSafeString.h>
#include "al/Library/Placement/PlacementInfo.h"

namespace al {

    class PlacementId {
    public:
        PlacementId();
        PlacementId(const char *, const char *, const char *);

        bool init(const PlacementInfo &);
        bool isEqual(const PlacementId &) const;
        static bool isEqual(const PlacementId &, const PlacementId &);
        bool isValid() const;
        void makeString(sead::BufferedSafeString *) const;

        const char* mId = nullptr;                  // _0
        const char* mUnitConfigName = nullptr;      // _8
        const char* _10 = nullptr;
        const char* mCommonID = nullptr;            // _18
    };
};