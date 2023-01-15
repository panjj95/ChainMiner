/**
 * @file  ChargeHeldItemGoal.hpp
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
 * @brief MC class ChargeHeldItemGoal.
 *
 */
class ChargeHeldItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEHELDITEMGOAL
public:
    class ChargeHeldItemGoal& operator=(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1521949639
     */
    virtual ~ChargeHeldItemGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@ChargeHeldItemGoal@@UEAA_NXZ
     * @hash   -1544662175
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@ChargeHeldItemGoal@@UEAA_NXZ
     * @hash   732805983
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@ChargeHeldItemGoal@@UEAAXXZ
     * @hash   395346570
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@ChargeHeldItemGoal@@UEAAXXZ
     * @hash   1650810474
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@ChargeHeldItemGoal@@UEAAXXZ
     * @hash   -525929931
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@ChargeHeldItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -878432849
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0ChargeHeldItemGoal@@QEAA@AEAVMob@@@Z
     * @hash   -60610402
     */
    MCAPI ChargeHeldItemGoal(class Mob &);

};