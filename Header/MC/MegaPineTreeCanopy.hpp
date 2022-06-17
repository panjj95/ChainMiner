// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MegaPineTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGAPINETREECANOPY
public:
    class MegaPineTreeCanopy& operator=(class MegaPineTreeCanopy const &) = delete;
    MegaPineTreeCanopy(class MegaPineTreeCanopy const &) = delete;
    MegaPineTreeCanopy() = delete;
#endif


public:
    /*0*/ virtual ~MegaPineTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEGAPINETREECANOPY
#endif



};