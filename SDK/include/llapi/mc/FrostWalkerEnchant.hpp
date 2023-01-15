/**
 * @file  FrostWalkerEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FrostWalkerEnchant.
 *
 */
class FrostWalkerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKERENCHANT
public:
    class FrostWalkerEnchant& operator=(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1849130199
     */
    virtual ~FrostWalkerEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@FrostWalkerEnchant@@UEBAHH@Z
     * @hash   1902227704
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@FrostWalkerEnchant@@UEBAHH@Z
     * @hash   -468749370
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@FrostWalkerEnchant@@UEBAHXZ
     * @hash   -1908066926
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -242808173
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -241884652
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -233503771
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -232580250
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FROSTWALKERENCHANT
    /**
     * @symbol ?isTreasureOnly@FrostWalkerEnchant@@UEBA_NXZ
     * @hash   -1995418738
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol ??0FrostWalkerEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   -1888378438
     */
    MCAPI FrostWalkerEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

};