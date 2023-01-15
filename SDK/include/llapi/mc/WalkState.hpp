/**
 * @file  WalkState.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WalkState.
 *
 */
class WalkState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALKSTATE
public:
    class WalkState& operator=(class WalkState const &) = delete;
    WalkState(class WalkState const &) = delete;
    WalkState() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1535412714
     */
    virtual ~WalkState();
    /**
     * @vftbl  1
     * @symbol ?tick@WalkState@@UEAAXXZ
     * @hash   1651880300
     */
    virtual void tick();
    /**
     * @vftbl  2
     * @symbol ?start@PetSleepWithOwnerState@@UEAAXXZ
     * @hash   1517695777
     */
    virtual void start();
    /**
     * @vftbl  3
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     * @hash   -1379317951
     */
    virtual void stop();

};