/**
 * @file  CheckFallDamageSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CheckFallDamageSystem.
 *
 */
class CheckFallDamageSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHECKFALLDAMAGESYSTEM
public:
    class CheckFallDamageSystem& operator=(class CheckFallDamageSystem const &) = delete;
    CheckFallDamageSystem(class CheckFallDamageSystem const &) = delete;
    CheckFallDamageSystem() = delete;
#endif

public:
    /**
     * @symbol ?_checkFallDamage@CheckFallDamageSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEAUCheckFallDamageRequestComponent@@@Z
     * @hash   70364128
     */
    MCAPI static void _checkFallDamage(class StrictEntityContext &, class ActorOwnerComponent &, struct CheckFallDamageRequestComponent &);
    /**
     * @symbol ?createSystem@CheckFallDamageSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -748933316
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};