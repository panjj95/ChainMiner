// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DoorInteractGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORINTERACTGOAL
public:
    class DoorInteractGoal& operator=(class DoorInteractGoal const &) = delete;
    DoorInteractGoal(class DoorInteractGoal const &) = delete;
    DoorInteractGoal() = delete;
#endif


public:
    /*0*/ virtual ~DoorInteractGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORINTERACTGOAL
#endif
    MCAPI DoorInteractGoal(class Mob &);

//protected:
    MCAPI bool _doorBlocksPath() const;

//private:
    MCAPI static class DoorBlock const * _findBlockingDoorAtPos(class BlockPos const &, class Mob const &, class Path *, enum Direction::Type &, enum Direction::Type &);


protected:

private:


};