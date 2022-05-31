// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorDamageSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorDamageByChildActorSource : public ActorDamageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGEBYCHILDACTORSOURCE
public:
    class ActorDamageByChildActorSource& operator=(class ActorDamageByChildActorSource const &) = delete;
    ActorDamageByChildActorSource(class ActorDamageByChildActorSource const &) = delete;
    ActorDamageByChildActorSource() = delete;
#endif

public:
    /*0*/ virtual ~ActorDamageByChildActorSource();
    /*1*/ virtual bool isChildEntitySource() const;
    /*2*/ virtual bool isChildEntitySource() const;
    /*3*/ virtual bool isBlockSource() const;
    /*8*/ virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /*9*/ virtual bool getIsCreative() const;
    /*10*/ virtual bool getIsWorldBuilder() const;
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual enum ActorCategory getEntityCategories() const;
    /*14*/ virtual bool getDamagingEntityIsCreative() const;
    /*15*/ virtual bool getDamagingEntityIsWorldBuilder() const;
    /*16*/ virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /*17*/ virtual enum ActorType getDamagingEntityType() const;
    /*18*/ virtual enum ActorCategory getDamagingEntityCategories() const;
    /*19*/ virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /*
    inline  ~ActorDamageByChildActorSource(){
         (ActorDamageByChildActorSource::*rv)();
        *((void**)&rv) = dlsym("??1ActorDamageByChildActorSource@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ActorDamageByChildActorSource(class Actor &, class Actor &, enum ActorDamageCause);

protected:

private:

};