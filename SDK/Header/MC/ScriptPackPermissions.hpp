// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptPackPermissions {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPACKPERMISSIONS
public:
    class ScriptPackPermissions& operator=(class ScriptPackPermissions const &) = delete;
    ScriptPackPermissions(class ScriptPackPermissions const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPACKPERMISSIONS
#endif
    MCAPI ScriptPackPermissions();
    MCAPI bool isModuleAllowed(std::string const &) const;
    MCAPI class ScriptPackPermissions & operator=(class ScriptPackPermissions &&);

//private:


private:
    MCAPI static std::string const sWildCardModuleName;


};