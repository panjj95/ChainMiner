/**
 * @file  HoldBlockSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoldBlockSystem.
 *
 */
class HoldBlockSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDBLOCKSYSTEM
public:
    class HoldBlockSystem& operator=(class HoldBlockSystem const &) = delete;
    HoldBlockSystem(class HoldBlockSystem const &) = delete;
    HoldBlockSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2063113045
     */
    virtual ~HoldBlockSystem();
    /**
     * @vftbl  1
     * @symbol ?registerEvents@HoldBlockSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     * @hash   -1199167943
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @vftbl  2
     * @symbol ?tick@HoldBlockSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1884439091
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_holdBlockSystemOnActorDie@HoldBlockSystem@@CAXAEAUActorDieEvent@@@Z
     * @hash   -1819253095
     */
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent &);

private:

};