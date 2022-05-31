// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VillageFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEFEATURE
public:
    class VillageFeature& operator=(class VillageFeature const &) = delete;
    VillageFeature(class VillageFeature const &) = delete;
    VillageFeature() = delete;
#endif

public:
    /*0*/ virtual ~VillageFeature();
    /*1*/ virtual bool shouldAddHardcodedSpawnAreas() const;
    /*2*/ virtual bool shouldPostProcessMobs() const;
    /*3*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /*5*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /*6*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    MCAPI VillageFeature(unsigned int, int, int);

protected:

private:

};