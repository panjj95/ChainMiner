/**
 * @file  ActorUpdateRidingIDSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdateRidingIDSystem.
 *
 */
class ActorUpdateRidingIDSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATERIDINGIDSYSTEM
public:
    class ActorUpdateRidingIDSystem& operator=(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem() = delete;
#endif

public:
    /**
     * @symbol ?createClearPrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   45210690
     */
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();
    /**
     * @symbol ?createClearRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1419786610
     */
    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();
    /**
     * @symbol ?createUpdatePrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -878470204
     */
    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();
    /**
     * @symbol ?tickClearRidingID@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPassengerComponent@@@@@Z
     * @hash   1276097067
     */
    MCAPI static void tickClearRidingID(class StrictEntityContext &, struct PassengerComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PassengerComponent> &);
    /**
     * @symbol ?tickClearRidingPrevIDAfterRemovePassenger@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAURidingPrevIDComponent@@@Z
     * @hash   -1641215766
     */
    MCAPI static void tickClearRidingPrevIDAfterRemovePassenger(class StrictEntityContext &, struct PassengerComponent const &, struct RidingPrevIDComponent &);
    /**
     * @symbol ?tickUpdateRidingPrevID@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAURidingPrevIDComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@@@@Z
     * @hash   -18879996
     */
    MCAPI static void tickUpdateRidingPrevID(class StrictEntityContext &, struct PassengerComponent const &, struct RidingPrevIDComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>);

};