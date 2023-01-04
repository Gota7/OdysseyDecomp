#include "Placement/PlacementId.h"

namespace al {
    PlacementId::PlacementId() = default;

    PlacementId::PlacementId(const char *pId, const char *pUnitConfName, const char *a3) :
        mId(pId), mUnitConfigName(pUnitConfName), _10(a3), mCommonID(nullptr) {

    }

    bool PlacementId::init(const PlacementInfo &rInfo) {
        mId = nullptr;
        _10 = nullptr;
        mUnitConfigName = nullptr;
        mCommonID = nullptr;

        rInfo._0.tryGetStringByKey(&mCommonID, "CommonId");
        rInfo._10.tryGetStringByKey(&mUnitConfigName, "UnitConfigName");
        rInfo._10.tryGetStringByKey(&_10, "Id");
        return rInfo._0.tryGetStringByKey(&mId, "Id");
    }

    // al::PlacementId::isEqual(al::PlacementId const&)const
    // al::PlacementId::isEqual(al::PlacementId const&, al::PlacementId const&)

    bool PlacementId::isValid() const {
        if (mCommonID != nullptr) {
            return true;
        }

        return mId != nullptr;
    }

    void PlacementId::makeString(sead::BufferedSafeString *pOutStr) const {
        if (mCommonID != nullptr) {
            pOutStr->format(mCommonID);
        }
        else if (mUnitConfigName == nullptr) {
            if (mId != nullptr) {
                pOutStr->format(mId);
            }
            else {
                pOutStr->format("");
            }
        }
        else {
            pOutStr->format("%s(%s[%s])", mId, mUnitConfigName, _10);
        }
    }
};