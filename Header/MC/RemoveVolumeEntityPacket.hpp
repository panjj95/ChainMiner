// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RemoveVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEVOLUMEENTITYPACKET
public:
    class RemoveVolumeEntityPacket& operator=(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket() = delete;
#endif


public:
    /*0*/ virtual ~RemoveVolumeEntityPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEVOLUMEENTITYPACKET
#endif
    MCAPI RemoveVolumeEntityPacket(class EntityContext &);



};