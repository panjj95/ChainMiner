// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VolumeComponentFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMECOMPONENTFACTORY
public:
    class VolumeComponentFactory& operator=(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMECOMPONENTFACTORY
#endif
    MCAPI void registerVolumeComponentDefinitions(bool);



};