// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BastionStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONSTART
public:
    class BastionStart& operator=(class BastionStart const &) = delete;
    BastionStart(class BastionStart const &) = delete;
    BastionStart() = delete;
#endif

public:
    /*0*/ virtual ~BastionStart();
    /*2*/ virtual bool isValid() const;

protected:

private:

};