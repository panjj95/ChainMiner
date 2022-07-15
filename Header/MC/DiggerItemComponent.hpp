// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DiggerItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEMCOMPONENT
public:
    class DiggerItemComponent& operator=(class DiggerItemComponent const &) = delete;
    DiggerItemComponent(class DiggerItemComponent const &) = delete;
    DiggerItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~DiggerItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIGGERITEMCOMPONENT
#endif
    MCAPI bool canDestroySpecial(class Block const &) const;
    MCAPI float getDestroySpeed(class ItemStackBase const &, class Block const &);
    MCAPI bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();



};