// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptIntBlockProperty {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINTBLOCKPROPERTY
public:
    class ScriptIntBlockProperty& operator=(class ScriptIntBlockProperty const &) = delete;
    ScriptIntBlockProperty(class ScriptIntBlockProperty const &) = delete;
    ScriptIntBlockProperty() = delete;
#endif

public:
    /*0*/ virtual ~ScriptIntBlockProperty();
    /*
    inline  ~ScriptIntBlockProperty(){
         (ScriptIntBlockProperty::*rv)();
        *((void**)&rv) = dlsym("??1ScriptIntBlockProperty@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptIntBlockProperty(class ScriptIntBlockProperty &&);
    MCAPI ScriptIntBlockProperty(std::string, class ItemState const &, std::vector<int>, class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation>);
    MCAPI class Scripting::Result<int> getState() const;
    MCAPI class ScriptIntBlockProperty & operator=(class ScriptIntBlockProperty &&);
    MCAPI class Scripting::Result<void> setState(int);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptIntBlockProperty> bind(struct Scripting::Version);

protected:

private:

};