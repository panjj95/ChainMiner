// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptSculkSpreader : public ScriptObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSCULKSPREADER
public:
    class ScriptSculkSpreader& operator=(class ScriptSculkSpreader const &) = delete;
    ScriptSculkSpreader(class ScriptSculkSpreader const &) = delete;
    ScriptSculkSpreader() = delete;
#endif

public:
    /*0*/ virtual ~ScriptSculkSpreader();
    MCAPI void addCursorsWithOffset(class BlockPos const &, int);
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class BlockPos>> getCursorPosition(int) const;
    MCAPI class Scripting::Result<int> getMaxCharge() const;
    MCAPI class Scripting::Result<int> getNumberOfCursors() const;
    MCAPI class Scripting::Result<int> getTotalCharge() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptSculkSpreader> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptSculkSpreader> getHandle(class BlockSource &, class BlockPos const &, class Scripting::WeakLifetimeScope const &);

protected:

private:

};