// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SHFillerCorridor : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHFILLERCORRIDOR
public:
    class SHFillerCorridor& operator=(class SHFillerCorridor const &) = delete;
    SHFillerCorridor(class SHFillerCorridor const &) = delete;
    SHFillerCorridor() = delete;
#endif


public:
    /*0*/ virtual ~SHFillerCorridor();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHFILLERCORRIDOR
#endif
    MCAPI static class BoundingBox findPieceBox(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int);



};