/**
 * @file  SpawnGroupData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnGroupData.
 *
 */
class SpawnGroupData {

#define AFTER_EXTRA
// Add Member There
public:
std::string mIdentifier;
std::vector<class MobSpawnRules> mSpawnRules;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPDATA
public:
    class SpawnGroupData& operator=(class SpawnGroupData const &) = delete;
    SpawnGroupData(class SpawnGroupData const &) = delete;
    SpawnGroupData() = delete;
#endif

public:
    /**
     * @hash   732484850
     * @symbol  ??0SpawnGroupData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVMobSpawnRules\@\@\@Z
     */
    MCAPI SpawnGroupData(std::string const &, class MobSpawnRules &);
    /**
     * @hash   1110908926
     * @symbol  ?addSpawnRules\@SpawnGroupData\@\@QEAAXAEAVMobSpawnRules\@\@\@Z
     */
    MCAPI void addSpawnRules(class MobSpawnRules &);
    /**
     * @hash   1180143036
     * @symbol  ?getIdentifier\@SpawnGroupData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @hash   -711324996
     * @symbol  ?getSpawnRules\@SpawnGroupData\@\@QEBAAEBV?$vector\@VMobSpawnRules\@\@V?$allocator\@VMobSpawnRules\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnRules> const & getSpawnRules() const;

};