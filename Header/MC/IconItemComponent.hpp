// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IconItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONITEMCOMPONENT
public:
    class IconItemComponent& operator=(class IconItemComponent const &) = delete;
    IconItemComponent(class IconItemComponent const &) = delete;
    IconItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~IconItemComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
    /*
    inline bool isNetworkComponent() const{
        bool (IconItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@IconItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI IconItemComponent(class ComponentItem *);
    MCAPI void setOwnerIcon();
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();

protected:

private:

};