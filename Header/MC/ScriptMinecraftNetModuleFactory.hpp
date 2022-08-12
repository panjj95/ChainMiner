// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptMinecraftNetModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTNETMODULEFACTORY
public:
    class ScriptMinecraftNetModuleFactory& operator=(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory() = delete;
#endif


public:
    /*0*/ virtual ~ScriptMinecraftNetModuleFactory();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMINECRAFTNETMODULEFACTORY
#endif
    MCAPI ScriptMinecraftNetModuleFactory(class Bedrock::NonOwnerPointer<class Scheduler>);
    MCAPI static std::string getModuleUUIDAsString();

//private:


private:
    MCAPI static char const * ModuleName;
    MCAPI static class mce::UUID const ModuleUUID;


};