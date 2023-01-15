/**
 * @file  AirBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AirBlock.
 *
 */
class AirBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRBLOCK
public:
    class AirBlock& operator=(class AirBlock const &) = delete;
    AirBlock(class AirBlock const &) = delete;
    AirBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2025598253
     */
    virtual ~AirBlock();
    /**
     * @vftbl  5
     * @symbol ?getCollisionShape@AirBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   1867335321
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  6
     * @symbol ?isObstructingChests@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -831440867
     */
    virtual bool isObstructingChests(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  9
     * @symbol ?addAABBs@AirBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   284563939
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@AirBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   148627731
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  11
     * @symbol ?addCollisionShapes@AirBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   1881187322
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  69
     * @symbol ?checkIsPathable@AirBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   77910151
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  89
     * @symbol ?mayPick@AirBlock@@UEBA_NXZ
     * @hash   178533211
     */
    virtual bool mayPick() const;
    /**
     * @vftbl  90
     * @symbol ?mayPick@AirBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     * @hash   18622500
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @vftbl  91
     * @symbol ?mayPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   1439379422
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   912489469
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  94
     * @symbol ?tryToPlace@AirBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
     * @hash   -1068781852
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @vftbl  97
     * @symbol ?destroy@AirBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     * @hash   -2043774006
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @vftbl  98
     * @symbol ?playerWillDestroy@AirBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1506408935
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@AirBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   -1983296981
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  142
     * @symbol ?getVisualShapeInWorld@AirBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   484380373
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@AirBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   696070445
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  151
     * @symbol ?animateTick@AirBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   680426216
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@AirBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1082168553
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AIRBLOCK
    /**
     * @symbol ?canBeSilkTouched@AirBlock@@MEBA_NXZ
     * @hash   1924634436
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?canHaveExtraData@AirBlock@@UEBA_NXZ
     * @hash   1229267031
     */
    MCVAPI bool canHaveExtraData() const;
#endif
    /**
     * @symbol ??0AirBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   -1289266710
     */
    MCAPI AirBlock(std::string const &, int, class Material const &);

};