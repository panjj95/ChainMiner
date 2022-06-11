// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VolumeAreaCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEAREACOMMAND
public:
    class VolumeAreaCommand& operator=(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand(class VolumeAreaCommand const &) = delete;
    VolumeAreaCommand() = delete;
#endif


public:
    /*0*/ virtual ~VolumeAreaCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEAREACOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    MCAPI void _list(class CommandOutput &, class Level const &, class Dimension const &, class VolumeEntityManagerServer const &) const;
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Dimension const &, class VolumeEntityManagerServer &, class PacketSender &) const;


private:


};