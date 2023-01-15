/**
 * @file  BlockUnitCubeDescription.hpp
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
 * @brief MC structure BlockUnitCubeDescription.
 *
 */
struct BlockUnitCubeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBEDESCRIPTION
public:
    struct BlockUnitCubeDescription& operator=(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1923766560
     */
    virtual ~BlockUnitCubeDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockUnitCubeDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2002595437
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockUnitCubeDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1204413327
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol ?initializeFromNetwork@BlockUnitCubeDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -597433931
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockUnitCubeDescription@@UEBA_NXZ
     * @hash   986099979
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockUnitCubeDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   943701677
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @symbol ?NameID@BlockUnitCubeDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   493638027
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockUnitCubeDescription@@SAXXZ
     * @hash   -885246973
     */
    MCAPI static void bindType();

};