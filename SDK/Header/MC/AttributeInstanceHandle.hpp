// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttributeInstanceHandle {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEHANDLE
public:
    class AttributeInstanceHandle& operator=(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle() = delete;
#endif

public:
    MCAPI class AttributeInstance const & getInstance() const;
    MCAPI class AttributeInstance * getMutableInstance() const;
    MCAPI void inheritFrom(class AttributeInstanceHandle const &, class BaseAttributeMap *);

protected:

private:

};