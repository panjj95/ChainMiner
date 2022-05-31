// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntitySet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSET
public:
    class EntitySet& operator=(class EntitySet const &) = delete;
#endif

public:
    MCAPI EntitySet(class EntitySet &&);
    MCAPI EntitySet(class EntitySet const &);
    MCAPI EntitySet();
    MCAPI bool add(class EntityContext const &);
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>> erase(class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>>);
    MCAPI class WeakEntityRef find(class EntityContext const &) const;
    MCAPI class EntitySet & operator=(class EntitySet &&);

protected:

private:

};