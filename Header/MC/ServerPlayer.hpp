// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Player.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Player.hpp"

#undef BEFORE_EXTRA

class ServerPlayer : public Player {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYER
public:
    class ServerPlayer& operator=(class ServerPlayer const &) = delete;
    ServerPlayer(class ServerPlayer const &) = delete;
    ServerPlayer() = delete;
#endif


public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*12*/ virtual void _serverInitItemStackIds();
    /*14*/ virtual ~ServerPlayer();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual void __unk_vfn_110();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*152*/ virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /*162*/ virtual void setOffhandSlot(class ItemStack const &);
    /*167*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*182*/ virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*184*/ virtual void checkFallDamage(float, bool);
    /*186*/ virtual void handleFallDistanceOnServer(float, float, bool);
    /*195*/ virtual void __unk_vfn_195();
    /*213*/ virtual void onEffectAdded(class MobEffectInstance &);
    /*214*/ virtual void onEffectUpdated(class MobEffectInstance &);
    /*215*/ virtual void onEffectRemoved(class MobEffectInstance &);
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*267*/ virtual void __unk_vfn_267();
    /*275*/ virtual void __unk_vfn_275();
    /*284*/ virtual void __unk_vfn_284();
    /*285*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*299*/ virtual void aiStep();
    /*312*/ virtual void __unk_vfn_312();
    /*316*/ virtual void __unk_vfn_316();
    /*324*/ virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /*325*/ virtual void setDamagedArmor(enum ArmorSlot, class ItemStack const &);
    /*326*/ virtual void sendArmorDamage(class std::bitset<4>);
    /*327*/ virtual void sendArmor(class std::bitset<4>);
    /*337*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*338*/ virtual void sendInventory(bool);
    /*350*/ virtual void __unk_vfn_350();
    /*364*/ virtual void __unk_vfn_364();
    /*366*/ virtual void prepareRegion(class ChunkSource &);
    /*367*/ virtual void destroyRegion();
    /*368*/ virtual void suspendRegion();
    /*369*/ virtual void resendAllChunks();
    /*372*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*373*/ virtual void tickWorld(struct Tick const &);
    /*374*/ virtual void __unk_vfn_374();
    /*376*/ virtual void moveView();
    /*379*/ virtual void checkMovementStats(class Vec3 const &);
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void __unk_vfn_381();
    /*383*/ virtual void __unk_vfn_383();
    /*384*/ virtual void __unk_vfn_384();
    /*389*/ virtual void __unk_vfn_389();
    /*390*/ virtual void __unk_vfn_390();
    /*391*/ virtual void openTrading(struct ActorUniqueID const &, bool);
    /*393*/ virtual void __unk_vfn_393();
    /*394*/ virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /*395*/ virtual void openInventory();
    /*396*/ virtual void __unk_vfn_396();
    /*397*/ virtual void __unk_vfn_397();
    /*398*/ virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /*399*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /*400*/ virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /*402*/ virtual void stopSleepInBed(bool, bool);
    /*406*/ virtual void __unk_vfn_406();
    /*407*/ virtual void __unk_vfn_407();
    /*408*/ virtual bool isHostingPlayer() const;
    /*409*/ virtual bool isLoading() const;
    /*410*/ virtual bool isPlayerInitialized() const;
    /*411*/ virtual void __unk_vfn_411();
    /*414*/ virtual void setPlayerGameType(enum GameType);
    /*418*/ virtual void __unk_vfn_418();
    /*422*/ virtual void setContainerData(class IContainerManager &, int, int);
    /*423*/ virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /*425*/ virtual void refreshContainer(class IContainerManager &);
    /*428*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /*429*/ virtual bool isActorRelevant(class Actor const &);
    /*430*/ virtual bool isTeacher() const;
    /*431*/ virtual void onSuspension();
    /*432*/ virtual void onLinkedSlotsChanged();
    /*438*/ virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /*439*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /*440*/ virtual void sendNetworkPacket(class Packet &) const;
    /*441*/ virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /*442*/ virtual class MoveInputHandler * tryGetMoveInputHandler() const;
    /*443*/ virtual enum InputMode getInputMode() const;
    /*444*/ virtual enum ClientPlayMode getPlayMode() const;
    /*445*/ virtual void reportMovementTelemetry(enum MovementEventType);
    /*446*/ virtual void __unk_vfn_446();
    /*451*/ virtual int _getSpawnChunkLimit() const;
    /*452*/ virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    MCVAPI void openPortfolio();
#endif
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum GameType, class NetworkIdentifier const &, unsigned char, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    MCAPI void checkCheating(class Vec3 const &);
    MCAPI void disconnect();
    MCAPI void doDeleteContainerManager(bool);
    MCAPI void doInitialSpawn();
    MCAPI class ItemStackNetManagerServer & getItemStackNetManagerServer();
    MCAPI class ServerMoveInputHandler * getServerMoveInputHandler();
    MCAPI void handleActorPickRequestOnServer(class Actor &, bool, bool);
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const &, bool);
    MCAPI enum ContainerID openUnmanagedContainer();
    MCAPI void postLoad(bool);
    MCAPI void selectItem(class ItemStack const &);
    MCAPI void sendMobEffectPackets();
    MCAPI void setClientChunkRadius(unsigned int);
    MCAPI void setInputMode(enum InputMode const &);
    MCAPI void setLocalPlayerAsInitialized();
    MCAPI void setPlayMode(enum ClientPlayMode const &);
    MCAPI void setPlayerInput(float, float, bool, bool);
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const &);
    MCAPI void triggerRespawnFromCompletingTheEnd();
    MCAPI static class ServerPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    MCAPI void _logCDEvent(enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID);
    MCAPI enum ContainerID _nextContainerCounter();
    MCAPI void _removeNearbyEntities();
    MCAPI void _scanForNearbyActors();
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void _updateNearbyActors();


private:


};