// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MinecartComeOffRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMEOFFRAILSYSTEM
public:
    class MinecartComeOffRailSystem& operator=(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECARTCOMEOFFRAILSYSTEM
#endif
    MCAPI static class Vec3 evaluatePosDeltaComingOffRail(class Vec3 const &, float, bool);



};