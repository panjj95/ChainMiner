// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AverageTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVERAGETRACKER
public:
    class AverageTracker& operator=(class AverageTracker const &) = delete;
    AverageTracker(class AverageTracker const &) = delete;
    AverageTracker() = delete;
#endif

public:
    MCAPI void addSample(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

protected:

private:

};