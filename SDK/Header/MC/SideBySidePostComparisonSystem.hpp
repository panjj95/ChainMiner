// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SideBySidePostComparisonSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEPOSTCOMPARISONSYSTEM
public:
    class SideBySidePostComparisonSystem& operator=(class SideBySidePostComparisonSystem const &) = delete;
    SideBySidePostComparisonSystem(class SideBySidePostComparisonSystem const &) = delete;
    SideBySidePostComparisonSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDEPOSTCOMPARISONSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createSideBySideCleanupCopyComponentSystem(class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::EntityInside>);



};