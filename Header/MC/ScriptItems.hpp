// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptItems {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMS
public:
    class ScriptItems& operator=(class ScriptItems const &) = delete;
    ScriptItems(class ScriptItems const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMS
#endif
    MCAPI ScriptItems();
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptItemType> get(class Scripting::WeakLifetimeScope &, std::string const &);
    MCAPI static void bind(class Scripting::ModuleBindingBuilder &, struct Scripting::Version);



};