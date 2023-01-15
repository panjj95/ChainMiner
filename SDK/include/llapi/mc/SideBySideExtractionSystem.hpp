/**
 * @file  SideBySideExtractionSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySide.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideExtractionSystem.
 *
 */
class SideBySideExtractionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEEXTRACTIONSYSTEM
public:
    class SideBySideExtractionSystem& operator=(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem(class SideBySideExtractionSystem const &) = delete;
    SideBySideExtractionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2138497509
     */
    virtual ~SideBySideExtractionSystem();
    /**
     * @vftbl  1
     * @symbol ?registerEvents@SideBySideExtractionSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     * @hash   1215759495
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @symbol ??0SideBySideExtractionSystem@@QEAA@AEBV?$array@V?$vector@IV?$allocator@I@std@@@std@@$0CE@@std@@@Z
     * @hash   1560202910
     */
    MCAPI SideBySideExtractionSystem(class std::array<std::vector<unsigned int>, 36> const &);
    /**
     * @symbol ?_onSideBySideExtractionRequest@SideBySideExtractionSystem@@SAXAEBUExtractMethods@SideBySide@@AEBUOnExtractSideBySide@@@Z
     * @hash   607946893
     */
    MCAPI static void _onSideBySideExtractionRequest(struct SideBySide::ExtractMethods const &, struct OnExtractSideBySide const &);
    /**
     * @symbol ?onStoreSideBySideResult@SideBySideExtractionSystem@@SAXAEBUOnStoreSideBySideResult@@@Z
     * @hash   -1968669246
     */
    MCAPI static void onStoreSideBySideResult(struct OnStoreSideBySideResult const &);

};