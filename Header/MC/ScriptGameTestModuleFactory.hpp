// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptGameTestModuleFactory : public TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTMODULEFACTORY
public:
    class ScriptGameTestModuleFactory& operator=(class ScriptGameTestModuleFactory const &) = delete;
    ScriptGameTestModuleFactory(class ScriptGameTestModuleFactory const &) = delete;
    ScriptGameTestModuleFactory() = delete;
#endif


public:
    /*0*/ virtual ~ScriptGameTestModuleFactory();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTGAMETESTMODULEFACTORY
#endif
    MCAPI ScriptGameTestModuleFactory(class gametest::GameTestRegistry &);
    MCAPI static std::string getModuleUUIDAsString();

//private:
    MCAPI void _addVersions();
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, bool, std::vector<std::string> const &);


private:
    MCAPI static char const * ModuleName;
    MCAPI static class mce::UUID ModuleUUID;


};