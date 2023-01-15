/**
 * @file  CooldownItemComponent.hpp
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
 * @brief MC class CooldownItemComponent.
 *
 */
class CooldownItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COOLDOWNITEMCOMPONENT
public:
    class CooldownItemComponent& operator=(class CooldownItemComponent const &) = delete;
    CooldownItemComponent(class CooldownItemComponent const &) = delete;
    CooldownItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   588266701
     */
    virtual ~CooldownItemComponent();
    /**
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEBA_NXZ
     * @hash   1717449250
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1256992317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -179373660
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   -498316964
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?bindType@CooldownItemComponent@@SAXXZ
     * @hash   1541444271
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@CooldownItemComponent@@SAAEBVHashedString@@XZ
     * @hash   2116066138
     */
    MCAPI static class HashedString const & getIdentifier();

};