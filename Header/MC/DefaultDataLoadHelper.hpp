// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefaultDataLoadHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTDATALOADHELPER
public:
    class DefaultDataLoadHelper& operator=(class DefaultDataLoadHelper const &) = delete;
    DefaultDataLoadHelper(class DefaultDataLoadHelper const &) = delete;
    DefaultDataLoadHelper() = delete;
#endif


public:
    /*0*/ virtual ~DefaultDataLoadHelper();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual enum DataLoadHelperType getType() const;
    /*16*/ virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFAULTDATALOADHELPER
    MCVAPI struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    MCVAPI enum Direction::Type loadDirection(enum Direction::Type);
    MCVAPI unsigned char loadFacingID(unsigned char);
    MCVAPI enum Mirror loadMirror(enum Mirror);
    MCVAPI struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    MCVAPI enum Rotation loadRotation(enum Rotation);
    MCVAPI float loadRotationDegreesX(float);
    MCVAPI float loadRotationDegreesY(float);
    MCVAPI float loadRotationRadiansX(float);
    MCVAPI float loadRotationRadiansY(float);
#endif



};