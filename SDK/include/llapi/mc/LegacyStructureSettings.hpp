/**
 * @file  LegacyStructureSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureSettings.
 *
 */
class LegacyStructureSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURESETTINGS
public:
    class LegacyStructureSettings& operator=(class LegacyStructureSettings const &) = delete;
    LegacyStructureSettings(class LegacyStructureSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0LegacyStructureSettings@@QEAA@XZ
     * @hash   738568505
     */
    MCAPI LegacyStructureSettings();
    /**
     * @symbol ??0LegacyStructureSettings@@QEAA@W4Mirror@@W4Rotation@@PEBVBlock@@AEBVBoundingBox@@@Z
     * @hash   689961706
     */
    MCAPI LegacyStructureSettings(enum class Mirror, enum class Rotation, class Block const *, class BoundingBox const &);
    /**
     * @symbol ?addSwapAuxValue@LegacyStructureSettings@@QEAAXHH@Z
     * @hash   982707695
     */
    MCAPI void addSwapAuxValue(int, int);
    /**
     * @symbol ?getBoundingBox@LegacyStructureSettings@@QEAAAEBVBoundingBox@@XZ
     * @hash   -2034599946
     */
    MCAPI class BoundingBox const & getBoundingBox();
    /**
     * @symbol ?getIgnoreBlock@LegacyStructureSettings@@QEBAPEBVBlock@@XZ
     * @hash   -171285539
     */
    MCAPI class Block const * getIgnoreBlock() const;
    /**
     * @symbol ?getMirror@LegacyStructureSettings@@QEBAAEBW4Mirror@@XZ
     * @hash   -2038814236
     */
    MCAPI enum class Mirror const & getMirror() const;
    /**
     * @symbol ?getRefPos@LegacyStructureSettings@@QEBAAEBVBlockPos@@XZ
     * @hash   1973073826
     */
    MCAPI class BlockPos const & getRefPos() const;
    /**
     * @symbol ?getRotation@LegacyStructureSettings@@QEBAAEBW4Rotation@@XZ
     * @hash   746326516
     */
    MCAPI enum class Rotation const & getRotation() const;
    /**
     * @symbol ?getSwappedBlock@LegacyStructureSettings@@QEBAAEBVBlock@@AEBVBlockPalette@@AEBV2@@Z
     * @hash   235874291
     */
    MCAPI class Block const & getSwappedBlock(class BlockPalette const &, class Block const &) const;
    /**
     * @symbol ?isIgnoreJigsawBlocks@LegacyStructureSettings@@QEBA_NXZ
     * @hash   -806166442
     */
    MCAPI bool isIgnoreJigsawBlocks() const;
    /**
     * @symbol ?isIgnoreStructureBlocks@LegacyStructureSettings@@QEBA_NXZ
     * @hash   -1624942652
     */
    MCAPI bool isIgnoreStructureBlocks() const;
    /**
     * @symbol ?isPlacingWaterBelowSeaLevel@LegacyStructureSettings@@QEBA_NXZ
     * @hash   258895524
     */
    MCAPI bool isPlacingWaterBelowSeaLevel() const;
    /**
     * @symbol ?placeWaterBelowSeaLevel@LegacyStructureSettings@@QEAAX_N@Z
     * @hash   -31496488
     */
    MCAPI void placeWaterBelowSeaLevel(bool);
    /**
     * @symbol ?setBlockRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@@Z
     * @hash   -1995776610
     */
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const *);
    /**
     * @symbol ?setBlockTagRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@@Z
     * @hash   -1528317724
     */
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const *);
    /**
     * @symbol ?setBoundingBox@LegacyStructureSettings@@QEAAXAEBVBoundingBox@@@Z
     * @hash   465274042
     */
    MCAPI void setBoundingBox(class BoundingBox const &);
    /**
     * @symbol ?setIgnoreBlock@LegacyStructureSettings@@QEAAXPEBVBlock@@@Z
     * @hash   1879801651
     */
    MCAPI void setIgnoreBlock(class Block const *);
    /**
     * @symbol ?setIntegrity@LegacyStructureSettings@@QEAAXM@Z
     * @hash   2019523344
     */
    MCAPI void setIntegrity(float);
    /**
     * @symbol ?setMirror@LegacyStructureSettings@@QEAAXW4Mirror@@@Z
     * @hash   -910700540
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol ?setProjection@LegacyStructureSettings@@QEAAXW4Projection@@@Z
     * @hash   1591981492
     */
    MCAPI void setProjection(enum class Projection);
    /**
     * @symbol ?setRefPos@LegacyStructureSettings@@QEAAXAEBVBlockPos@@@Z
     * @hash   -1537805034
     */
    MCAPI void setRefPos(class BlockPos const &);
    /**
     * @symbol ?setRotation@LegacyStructureSettings@@QEAAXW4Rotation@@@Z
     * @hash   1902315606
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setSeed@LegacyStructureSettings@@QEAAXI@Z
     * @hash   1423493450
     */
    MCAPI void setSeed(unsigned int);
    /**
     * @symbol ?updateBoundingBoxFromChunkPos@LegacyStructureSettings@@QEAAXXZ
     * @hash   206247139
     */
    MCAPI void updateBoundingBoxFromChunkPos();
    /**
     * @symbol ??1LegacyStructureSettings@@QEAA@XZ
     * @hash   -1430716359
     */
    MCAPI ~LegacyStructureSettings();
    /**
     * @symbol ?INTEGRITY_MAX@LegacyStructureSettings@@2MB
     * @hash   1713641821
     */
    MCAPI static float const INTEGRITY_MAX;
    /**
     * @symbol ?INTEGRITY_MIN@LegacyStructureSettings@@2MB
     * @hash   -475517251
     */
    MCAPI static float const INTEGRITY_MIN;
    /**
     * @symbol ?MAX_STRUCTURE_SIZE@LegacyStructureSettings@@2HB
     * @hash   658283895
     */
    MCAPI static int const MAX_STRUCTURE_SIZE;

};