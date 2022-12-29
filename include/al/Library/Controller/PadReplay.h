#pragma once

#include <controller/seadController.h>

namespace al {
    class IUsePadDataReader;
    class IUsePadDataWriter;

    void createReplayController(unsigned int);
    void unregistReplayController(unsigned int);
    sead::Controller *getReplayController(unsigned int);
    void setPadDataReader(al::IUsePadDataReader *,unsigned int);
    void createAndSetPadDataArcReader(const char*,const char*,unsigned int);
    void startPadReplay(unsigned int);
    void pausePadReplay(unsigned int);
    void endPadReplay(unsigned int);
    void setPadDataWriter(al::IUsePadDataWriter *,unsigned int);
    void startPadRecording(unsigned int);
    void endPadRecording(unsigned int);
    bool isPadReplaying(unsigned int);
    void getPadReplayRemainFrame(unsigned int);
    bool isPadRecording(unsigned int);
    void invalidatePadReplay(unsigned int);
    void validatePadReplay(unsigned int);
    bool isValidReplayController(unsigned int);
    void isReadPadReplayData(unsigned int);
}