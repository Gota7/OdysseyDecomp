#pragma once

#include "IUse/IUseName.h"

namespace al {
    class StageSwitchKeeper;

    class IUseStageSwitch : public virtual IUseName {
    public:
        virtual StageSwitchKeeper *getStageSwitchKeeper() const = 0;
        virtual void initStageSwitchKeeper() = 0;
    };
};    // namespace al