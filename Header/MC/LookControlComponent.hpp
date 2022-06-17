// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LookControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROLCOMPONENT
public:
    class LookControlComponent& operator=(class LookControlComponent const &) = delete;
    LookControlComponent(class LookControlComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKCONTROLCOMPONENT
#endif
    MCAPI LookControlComponent();
    MCAPI bool getHasWantedPosition() const;
    MCAPI bool getHasWantedRotation() const;
    MCAPI class Vec3 getWantedPosition() const;
    MCAPI class Vec3 getWantedRotation() const;
    MCAPI float getXMax() const;
    MCAPI float getYMax() const;
    MCAPI void initialize(class Mob &);
    MCAPI class LookControlComponent & operator=(class LookControlComponent &&);
    MCAPI void setHasWantedPosition(bool);
    MCAPI void setHasWantedRotation(bool);
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    MCAPI void setLookAtPosition(class Vec3 const &, float, float);
    MCAPI void setLookAtPosition(class Actor const *, float, float);
    MCAPI void setLookAtRotation(class Vec3 const &, float, float);
    MCAPI void setYMax(float);
    MCAPI void update(class Mob &);



};