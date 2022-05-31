// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Option.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BoolOption : public Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOLOPTION
public:
    class BoolOption& operator=(class BoolOption const &) = delete;
    BoolOption(class BoolOption const &) = delete;
    BoolOption() = delete;
#endif

public:
    /*0*/ virtual ~BoolOption();
    /*1*/ virtual void save(std::vector<struct std::pair<std::string, std::string>> &);
    /*2*/ virtual void load(std::string const &);
    MCAPI BoolOption(enum OptionID, enum OptionOwnerType, enum OptionResetFlags, std::string const &, std::string const &, bool);
    MCAPI bool getValue() const;
    MCAPI void set(bool, bool);

protected:

private:

};