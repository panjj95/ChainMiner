/**
 * @file  CommandBlockComponent.hpp
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
 * @brief MC class CommandBlockComponent.
 *
 */
class CommandBlockComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKCOMPONENT
public:
    class CommandBlockComponent& operator=(class CommandBlockComponent const &) = delete;
    CommandBlockComponent(class CommandBlockComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommandBlockComponent@@QEAA@XZ
     * @hash   -1768660841
     */
    MCAPI CommandBlockComponent();
    /**
     * @symbol ??0CommandBlockComponent@@QEAA@$$QEAV0@@Z
     * @hash   1316029663
     */
    MCAPI CommandBlockComponent(class CommandBlockComponent &&);
    /**
     * @symbol ?addAdditionalSaveData@CommandBlockComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1755935880
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?decrementTickCount@CommandBlockComponent@@QEAAHXZ
     * @hash   672491078
     */
    MCAPI int decrementTickCount();
    /**
     * @symbol ?getBaseCommandBlock@CommandBlockComponent@@QEAAAEAVBaseCommandBlock@@XZ
     * @hash   -1076250064
     */
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    /**
     * @symbol ?getCurrentTickCount@CommandBlockComponent@@QEBAHXZ
     * @hash   8853030
     */
    MCAPI int getCurrentTickCount() const;
    /**
     * @symbol ?getTicking@CommandBlockComponent@@QEBA_NXZ
     * @hash   1451298170
     */
    MCAPI bool getTicking() const;
    /**
     * @symbol ?initFromDefinition@CommandBlockComponent@@QEAAXAEAVActor@@@Z
     * @hash   1429352018
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?onCommandBlockUpdate@CommandBlockComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NV34@H2@Z
     * @hash   975240822
     */
    MCAPI void onCommandBlockUpdate(class Actor &, std::string const &, bool, std::string, int, bool);
    /**
     * @symbol ??4CommandBlockComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   306527162
     */
    MCAPI class CommandBlockComponent & operator=(class CommandBlockComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@CommandBlockComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1207381162
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?resetCurrentTick@CommandBlockComponent@@QEAAXXZ
     * @hash   -1331826223
     */
    MCAPI void resetCurrentTick();
    /**
     * @symbol ?setLastOutput@CommandBlockComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1985270511
     */
    MCAPI void setLastOutput(class Actor &, std::string const &);
    /**
     * @symbol ?setTicking@CommandBlockComponent@@QEAAX_N@Z
     * @hash   1809477970
     */
    MCAPI void setTicking(bool);

};