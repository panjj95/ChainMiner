// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Shulker : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Shulker();
    /*19*/ virtual void setPos(class Vec3 const &);
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*57*/ virtual bool isInWall() const;
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual bool canAttack(class Actor *, bool) const;
    /*130*/ virtual bool shouldRender() const;
    /*133*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*141*/ virtual float getPickRadius();
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*262*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
    /*280*/ virtual void _onSizeUpdated();
    /*281*/ virtual void __unk_vfn_281();
    /*294*/ virtual void travel(float, float, float);
    /*297*/ virtual void aiStep();
    /*302*/ virtual bool checkSpawnRules(bool);
    /*310*/ virtual void __unk_vfn_310();
    /*311*/ virtual float getMaxHeadXRot();
    /*314*/ virtual void __unk_vfn_314();
    /*319*/ virtual int getArmorValue() const;
    /*348*/ virtual void __unk_vfn_348();
    /*353*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool isLeashableType();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    MCAPI static void setShulkerAttachPos(class SynchedActorData &, class BlockPos const &);

//protected:
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    MCAPI static void _setPeekAmount(class SynchedActorData &, int);

//private:
    MCAPI void _calculateBB();
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    MCAPI void _peekAmountTick();
    MCAPI void _setAttachFace(unsigned char);
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    MCAPI void _trySpawnShulker();
    MCAPI bool _tryTeleportSomewhere();


protected:

private:


};