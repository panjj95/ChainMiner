/**
 * @file  Common.hpp
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
 * @brief MC namespace Common.
 *
 */
namespace Common {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?getGameDevVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -540976911
     */
    MCAPI std::string getGameDevVersionString();
    /**
     * @symbol ?getGameSemVerString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   960909243
     */
    MCAPI std::string getGameSemVerString();
    /**
     * @symbol ?getGameVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   790865289
     */
    MCAPI std::string getGameVersionString();
    /**
     * @symbol ?getGameVersionStringNet@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -629688927
     */
    MCAPI std::string getGameVersionStringNet();
    /**
     * @symbol ?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1588369943
     */
    MCAPI std::string getServerVersionString();

};