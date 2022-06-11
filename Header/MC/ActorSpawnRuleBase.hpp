// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorSpawnRuleBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSPAWNRULEBASE
public:
    class ActorSpawnRuleBase& operator=(class ActorSpawnRuleBase const &) = delete;
    ActorSpawnRuleBase(class ActorSpawnRuleBase const &) = delete;
    ActorSpawnRuleBase() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORSPAWNRULEBASE
#endif

//protected:
    MCAPI void _applySpawnCondition(class std::function<void (std::string const &, int, class BiomeFilterGroup &, class MobSpawnRules &)>, class Json::Value &, class MobSpawnRules const &, std::string const &);
    MCAPI void _getResources(class ResourcePackManager &, class MobSpawnRules const &, class std::function<void (std::string const &, int, class BiomeFilterGroup &, class MobSpawnRules &)>);
    MCAPI bool _readJsonHeader(std::string &&, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);


protected:


};