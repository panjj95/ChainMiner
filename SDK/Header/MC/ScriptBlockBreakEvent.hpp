// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptBlockBreakEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKBREAKEVENT
public:
    struct ScriptBlockBreakEvent& operator=(struct ScriptBlockBreakEvent const &) = delete;
    ScriptBlockBreakEvent(struct ScriptBlockBreakEvent const &) = delete;
    ScriptBlockBreakEvent() = delete;
#endif

public:
    MCAPI ScriptBlockBreakEvent(class Player &, class BlockPos const &, class Block const &, class Scripting::WeakLifetimeScope const &);
    MCAPI ~ScriptBlockBreakEvent();

protected:

private:

};