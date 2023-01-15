/**
 * @file  PauseManager.hpp
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
 * @brief MC class PauseManager.
 *
 */
class PauseManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAUSEMANAGER
public:
    class PauseManager& operator=(class PauseManager const &) = delete;
    PauseManager(class PauseManager const &) = delete;
    PauseManager() = delete;
#endif

public:
    /**
     * @symbol ?DEFAULT_SIMULATION_TYPE@PauseManager@@2W4SimulationType@@B
     * @hash   -1536003887
     */
    MCAPI static enum class SimulationType const DEFAULT_SIMULATION_TYPE;
    /**
     * @symbol ?getSimulationType@PauseManager@@SA?AW4SimulationType@@V?$StackRefResultT@U?$SharePtrRefTraits@$$CBVPauseManager@@@@@@@Z
     * @hash   -434990241
     */
    MCAPI static enum class SimulationType getSimulationType(class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>>);

};