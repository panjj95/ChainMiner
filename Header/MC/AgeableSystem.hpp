// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgeableSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLESYSTEM
public:
    class AgeableSystem& operator=(class AgeableSystem const &) = delete;
    AgeableSystem(class AgeableSystem const &) = delete;
    AgeableSystem() = delete;
#endif


public:
    /*0*/ virtual ~AgeableSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGEABLESYSTEM
#endif



};