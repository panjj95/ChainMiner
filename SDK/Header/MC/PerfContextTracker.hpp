// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PerfContextTracker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFCONTEXTTRACKER
public:
    class PerfContextTracker& operator=(class PerfContextTracker const &) = delete;
    PerfContextTracker(class PerfContextTracker const &) = delete;
#endif

public:
    MCAPI PerfContextTracker();
    MCAPI void incrementPacketReceivedInfo(unsigned int);
    MCAPI void incrementPacketSentInfo(unsigned int);
    MCAPI static class PerfContextTracker & getInstance();

protected:

private:

};