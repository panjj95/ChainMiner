/**
 * @file  SetActorDataPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetActorDataPacket.
 *
 */
class SetActorDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORDATAPACKET
public:
    class SetActorDataPacket& operator=(class SetActorDataPacket const &) = delete;
    SetActorDataPacket(class SetActorDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   185014575
     */
    virtual ~SetActorDataPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SetActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1406957913
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SetActorDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1448105978
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SetActorDataPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1769105119
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SetActorDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -80950815
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SetActorDataPacket@@QEAA@XZ
     * @hash   -735614287
     */
    MCAPI SetActorDataPacket();
    /**
     * @symbol ??0SetActorDataPacket@@QEAA@VActorRuntimeID@@AEAVSynchedActorDataEntityWrapper@@PEAVPropertyComponent@@_K_N@Z
     * @hash   645774824
     */
    MCAPI SetActorDataPacket(class ActorRuntimeID, class SynchedActorDataEntityWrapper &, class PropertyComponent *, unsigned __int64, bool);

};