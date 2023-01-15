/**
 * @file  DamageOverTimeSystem.hpp
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
 * @brief MC class DamageOverTimeSystem.
 *
 */
class DamageOverTimeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMESYSTEM
public:
    class DamageOverTimeSystem& operator=(class DamageOverTimeSystem const &) = delete;
    DamageOverTimeSystem(class DamageOverTimeSystem const &) = delete;
    DamageOverTimeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2038561431
     */
    virtual ~DamageOverTimeSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@DamageOverTimeSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   493968655
     */
    virtual void tick(class EntityRegistry &);

};