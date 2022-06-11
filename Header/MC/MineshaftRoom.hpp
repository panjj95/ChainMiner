// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MineshaftRoom : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTROOM
public:
    class MineshaftRoom& operator=(class MineshaftRoom const &) = delete;
    MineshaftRoom(class MineshaftRoom const &) = delete;
    MineshaftRoom() = delete;
#endif


public:
    /*0*/ virtual ~MineshaftRoom();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTROOM
#endif
    MCAPI MineshaftRoom(struct MineshaftData &, int, class Random &, int, int);



};