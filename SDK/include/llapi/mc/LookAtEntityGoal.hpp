/**
 * @file  LookAtEntityGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LookAtActorGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtEntityGoal.
 *
 */
class LookAtEntityGoal : public LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATENTITYGOAL
public:
    class LookAtEntityGoal& operator=(class LookAtEntityGoal const &) = delete;
    LookAtEntityGoal(class LookAtEntityGoal const &) = delete;
    LookAtEntityGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -905846350
     */
    virtual ~LookAtEntityGoal();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();

};