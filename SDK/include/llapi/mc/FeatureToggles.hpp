/**
 * @file  FeatureToggles.hpp
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
 * @brief MC class FeatureToggles.
 *
 */
class FeatureToggles {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETOGGLES
public:
    class FeatureToggles& operator=(class FeatureToggles const &) = delete;
    FeatureToggles(class FeatureToggles const &) = delete;
    FeatureToggles() = delete;
#endif

public:
    /**
     * @symbol ??0FeatureToggles@@QEAA@AEAVAppPlatform@@@Z
     * @hash   -1737621604
     */
    MCAPI FeatureToggles(class AppPlatform &);
    /**
     * @symbol ?get@FeatureToggles@@QEAAPEAVOption@@W4FeatureOptionID@@@Z
     * @hash   -1168276586
     */
    MCAPI class Option * get(enum class FeatureOptionID);
    /**
     * @symbol ?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z
     * @hash   -928175871
     */
    MCAPI bool isEnabled(enum class FeatureOptionID) const;

//private:
    /**
     * @symbol ?_getDisableIfOtherOptionDisabledSetupCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEAVOption@@@Z@std@@W4FeatureOptionID@@@Z
     * @hash   1797573501
     */
    MCAPI class std::function<void (class Option &)> _getDisableIfOtherOptionDisabledSetupCallback(enum class FeatureOptionID) const;
    /**
     * @symbol ?_getDisabledIfOptionExpectationsNotMetSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     * @hash   116175028
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @symbol ?_getDisabledIfOtherOptionsEnabledSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@@Z
     * @hash   739527995
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOtherOptionsEnabledSetupCallback(std::vector<enum class FeatureOptionID>);
    /**
     * @symbol ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     * @hash   -1895235160
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @symbol ?_initialize@FeatureToggles@@AEAAXAEAVAppPlatform@@@Z
     * @hash   -1577470218
     */
    MCAPI void _initialize(class AppPlatform &);
    /**
     * @symbol ?_registerFeature@FeatureToggles@@AEAAXW4FeatureOptionTabID@@W4FeatureOptionID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2_N1V?$function@$$A6AXAEAVOption@@@Z@5@V?$function@$$A6AXAEA_N@Z@5@@Z
     * @hash   -106981161
     */
    MCAPI void _registerFeature(enum class FeatureOptionTabID, enum class FeatureOptionID, std::string const &, std::string const &, bool, enum class FeatureOptionID, class std::function<void (class Option &)>, class std::function<void (bool &)>);
    /**
     * @symbol ?_registerFeatures@FeatureToggles@@AEAAXXZ
     * @hash   6003122
     */
    MCAPI void _registerFeatures();
    /**
     * @symbol ?_setupDependencies@FeatureToggles@@AEAAXXZ
     * @hash   1530337130
     */
    MCAPI void _setupDependencies();

private:
    /**
     * @symbol ?mFeatureToggles@FeatureToggles@@0V?$unique_ptr@VFeatureToggles@@U?$default_delete@VFeatureToggles@@@std@@@std@@A
     * @hash   344549114
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;

};