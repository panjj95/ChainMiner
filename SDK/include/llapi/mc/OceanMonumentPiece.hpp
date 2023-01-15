/**
 * @file  OceanMonumentPiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentPiece.
 *
 */
class OceanMonumentPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPIECE
public:
    class OceanMonumentPiece& operator=(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -255946157
     */
    virtual ~OceanMonumentPiece();
    /**
     * @vftbl  5
     * @symbol ?postProcessMobsAt@OceanMonumentPiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -2039883534
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  7
     * @symbol ?getWorldX@OceanMonumentPiece@@UEAAHHH@Z
     * @hash   10980623
     */
    virtual int getWorldX(int, int);
    /**
     * @vftbl  8
     * @symbol ?getWorldZ@OceanMonumentPiece@@UEAAHHH@Z
     * @hash   -1532558319
     */
    virtual int getWorldZ(int, int);
    /**
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@OceanMonumentPiece@@UEBAXAEAVLevelChunk@@@Z
     * @hash   47428374
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol ??0OceanMonumentPiece@@QEAA@AEAHAEAVBoundingBox@@@Z
     * @hash   265388512
     */
    MCAPI OceanMonumentPiece(int &, class BoundingBox &);

//protected:
    /**
     * @symbol ??0OceanMonumentPiece@@IEAA@HAEAHV?$shared_ptr@VRoomDefinition@@@std@@HHH@Z
     * @hash   -1579025704
     */
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    /**
     * @symbol ?chunkIntersects@OceanMonumentPiece@@IEAA_NAEBVBoundingBox@@HHHH@Z
     * @hash   1229269821
     */
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    /**
     * @symbol ?generateDefaultFloor@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HH_N@Z
     * @hash   -647916868
     */
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    /**
     * @symbol ?spawnElder@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
     * @hash   1770032136
     */
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);

protected:
    /**
     * @symbol ?mGridroomLeftWingConnectIndex@OceanMonumentPiece@@1HA
     * @hash   902448616
     */
    MCAPI static int mGridroomLeftWingConnectIndex;
    /**
     * @symbol ?mGridroomRightWingConnectIndex@OceanMonumentPiece@@1HA
     * @hash   -2017959547
     */
    MCAPI static int mGridroomRightWingConnectIndex;
    /**
     * @symbol ?mGridroomSourceIndex@OceanMonumentPiece@@1HA
     * @hash   -319881855
     */
    MCAPI static int mGridroomSourceIndex;
    /**
     * @symbol ?mGridroomTopConnectIndex@OceanMonumentPiece@@1HA
     * @hash   -1190484021
     */
    MCAPI static int mGridroomTopConnectIndex;
    /**
     * @symbol ?mLeftWingIndex@OceanMonumentPiece@@1HB
     * @hash   -1286576932
     */
    MCAPI static int const mLeftWingIndex;
    /**
     * @symbol ?mPenthouseIndex@OceanMonumentPiece@@1HB
     * @hash   371914955
     */
    MCAPI static int const mPenthouseIndex;
    /**
     * @symbol ?mRightWingIndex@OceanMonumentPiece@@1HB
     * @hash   -2072730363
     */
    MCAPI static int const mRightWingIndex;

};