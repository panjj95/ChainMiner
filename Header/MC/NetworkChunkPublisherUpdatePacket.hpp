// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetworkChunkPublisherUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCHUNKPUBLISHERUPDATEPACKET
public:
    class NetworkChunkPublisherUpdatePacket& operator=(class NetworkChunkPublisherUpdatePacket const &) = delete;
    NetworkChunkPublisherUpdatePacket(class NetworkChunkPublisherUpdatePacket const &) = delete;
#endif


public:
    /*0*/ virtual ~NetworkChunkPublisherUpdatePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKCHUNKPUBLISHERUPDATEPACKET
#endif
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const &, unsigned int);
    MCAPI NetworkChunkPublisherUpdatePacket();



};