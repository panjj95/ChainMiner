/**
 * @file  BiomeComponentFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeComponentFactory.
 *
 */
class BiomeComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECOMPONENTFACTORY
public:
    class BiomeComponentFactory& operator=(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory() = delete;
#endif

public:
    /**
     * @symbol ??0BiomeComponentFactory@@QEAA@W4FactoryScope@0@@Z
     * @hash   -655114715
     */
    MCAPI BiomeComponentFactory(enum class BiomeComponentFactory::FactoryScope);
    /**
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
     * @hash   1163931026
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class CompoundTag &) const;
    /**
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   880696739
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class Json::Value &, class SemVersion const &) const;
    /**
     * @symbol ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
     * @hash   -969449351
     */
    MCAPI void registrationFinished();

};