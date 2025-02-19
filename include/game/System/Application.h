#pragma once

#include <basis/seadTypes.h>
#include <heap/seadDisposer.h>

#include <System/SystemKit.h>

#include "RootTask.h"

namespace al {
    class GameFrameworkNx;
    class AccountHolder;
}    // namespace al

class Application {
    SEAD_SINGLETON_DISPOSER(Application)
public:
    Application();
    void init(s32, char **);
    void run();
    RootTask *getRootTask() const;

    al::SystemKit *mSystemKit;
    al::GameFrameworkNx *mFramework;
    u64 _30;
    al::AccountHolder *mAccountHolder;
};