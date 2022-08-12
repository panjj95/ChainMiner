// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#undef BEFORE_EXTRA

class WeakEntityRef {

#define AFTER_EXTRA
// Add Member There
    char filler[32];
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKENTITYREF
public:
    class WeakEntityRef& operator=(class WeakEntityRef const &) = delete;
    WeakEntityRef(class WeakEntityRef const &) = delete;
    WeakEntityRef() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAKENTITYREF
#endif
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>);
    MCAPI operator class WeakRefT<struct EntityRefTraits>() const;
    MCAPI class WeakEntityRef & operator=(class WeakEntityRef &&);
    MCAPI bool operator==(class WeakEntityRef) const;
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const;
    MCAPI ~WeakEntityRef();



};