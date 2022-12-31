#pragma once

#include <controller/seadController.h>

namespace al {
    class IUsePadDataReader;
    class IUsePadDataWriter;

    void createReplayController(u32);
    void unregistReplayController(u32);
    sead::Controller *getReplayController(u32);
    void setPadDataReader(al::IUsePadDataReader *, u32);
    void createAndSetPadDataArcReader(const char *, const char *, u32);
    void startPadReplay(u32);
    void pausePadReplay(u32);
    void endPadReplay(u32);
    void setPadDataWriter(al::IUsePadDataWriter *, u32);
    void startPadRecording(u32);
    void endPadRecording(u32);
    bool isPadReplaying(u32);
    void getPadReplayRemainFrame(u32);
    bool isPadRecording(u32);
    void invalidatePadReplay(u32);
    void validatePadReplay(u32);
    bool isValidReplayController(u32);
    void isReadPadReplayData(u32);
}    // namespace al