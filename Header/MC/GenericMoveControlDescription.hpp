// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GenericMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICMOVECONTROLDESCRIPTION
public:
    class GenericMoveControlDescription& operator=(class GenericMoveControlDescription const &) = delete;
    GenericMoveControlDescription(class GenericMoveControlDescription const &) = delete;
    GenericMoveControlDescription() = delete;
#endif

public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~GenericMoveControlDescription();
    /*
    inline  ~GenericMoveControlDescription(){
         (GenericMoveControlDescription::*rv)();
        *((void**)&rv) = dlsym("??1GenericMoveControlDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};