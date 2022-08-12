// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"
#include "SideBySide.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~SideBySideExtractionSystem();
    /*1*/ virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDEEXTRACTIONSYSTEM
#endif
    MCAPI SideBySideExtractionSystem(class std::tuple<struct ExtractionDependencies<struct SideBySideExtractionId::TickBegin>, struct ExtractionDependencies<struct SideBySideExtractionId::BeginManagePassengers>, struct ExtractionDependencies<struct SideBySideExtractionId::ManagePassengersStopRiding>, struct ExtractionDependencies<struct SideBySideExtractionId::ManagePassengersPositioning>, struct ExtractionDependencies<struct SideBySideExtractionId::EntityInside>> const &);
    MCAPI static void _onSideBySideExtractionRequest(struct SideBySide::ExtractMethods const &, struct OnExtractSideBySide const &);
    MCAPI static void onStoreSideBySideResult(struct OnStoreSideBySideResult const &);



};