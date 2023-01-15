/**
 * @file  SideBySideComparisonRateSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideComparisonRateSystem.
 *
 */
class SideBySideComparisonRateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOMPARISONRATESYSTEM
public:
    class SideBySideComparisonRateSystem& operator=(class SideBySideComparisonRateSystem const &) = delete;
    SideBySideComparisonRateSystem(class SideBySideComparisonRateSystem const &) = delete;
    SideBySideComparisonRateSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@SideBySideComparisonRateSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1583288200
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?tick@SideBySideComparisonRateSystem@@CAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@VActorOwnerComponent@@VActorTickNeededComponent@@@@U?$Exclude@V?$FlagComponent@UActorInvalidRegionFlag@@@@@@@@V?$OptionalGlobalT@USideBySideComparisonRateTickComponent@@VEntityRegistryBase@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UUsesSideBySideComparisonComponent@@@@@Z
     * @hash   -1280579304
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class ActorOwnerComponent, class ActorTickNeededComponent>, struct Exclude<class FlagComponent<struct ActorInvalidRegionFlag>>>, class OptionalGlobalT<struct SideBySideComparisonRateTickComponent, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct UsesSideBySideComparisonComponent>);

private:

};