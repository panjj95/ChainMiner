// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CoralHangFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALHANGFEATURE
public:
    class CoralHangFeature& operator=(class CoralHangFeature const &) = delete;
    CoralHangFeature(class CoralHangFeature const &) = delete;
    CoralHangFeature() = delete;
#endif


public:
    /*0*/ virtual ~CoralHangFeature();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALHANGFEATURE
#endif



};