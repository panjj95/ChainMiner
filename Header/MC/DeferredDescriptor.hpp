// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"
#include "ItemTagDescriptor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DeferredDescriptor : public ItemTagDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDDESCRIPTOR
public:
    class DeferredDescriptor& operator=(class DeferredDescriptor const &) = delete;
    DeferredDescriptor(class DeferredDescriptor const &) = delete;
    DeferredDescriptor() = delete;
#endif


public:
    /*0*/ virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /*2*/ virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /*3*/ virtual std::string const & getFullName() const;
    /*6*/ virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /*7*/ virtual class std::optional<class CompoundTag> save() const;
    /*9*/ virtual enum ItemDescriptor::InternalType getType() const;
    /*10*/ virtual bool shouldResolve() const;
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFERREDDESCRIPTOR
#endif

//private:
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item> &&) const;
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromItem(class WeakPtr<class Item> &&, short) const;


private:


};