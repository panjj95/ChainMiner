// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FoodItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENTLEGACY
public:
    class FoodItemComponentLegacy& operator=(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy() = delete;
#endif


public:
    /*0*/ virtual ~FoodItemComponentLegacy();
    /*1*/ virtual int getNutrition() const;
    /*2*/ virtual float getSaturationModifier() const;
    /*3*/ virtual bool canAlwaysEat() const;
    /*4*/ virtual class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    /*5*/ virtual bool use(class ItemStack &, class Player &);
    /*6*/ virtual class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENTLEGACY
#endif
    MCAPI FoodItemComponentLegacy(class Item &);
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const &);

//private:
    MCAPI void _applyEatEffects(class ItemStack const &, class Actor &, class Level &);
    MCAPI void _loadEffects(class Json::Value &);
    MCAPI void _loadRemoveEffects(class Json::Value &);


private:


};