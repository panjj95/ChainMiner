// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PodzolAreaFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PODZOLAREAFEATURE
public:
    class PodzolAreaFeature& operator=(class PodzolAreaFeature const &) = delete;
    PodzolAreaFeature(class PodzolAreaFeature const &) = delete;
    PodzolAreaFeature() = delete;
#endif


public:
    /*0*/ virtual ~PodzolAreaFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PODZOLAREAFEATURE
#endif



};