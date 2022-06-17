// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VolumeDefinitionGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITIONGROUP
public:
    class VolumeDefinitionGroup& operator=(class VolumeDefinitionGroup const &) = delete;
    VolumeDefinitionGroup(class VolumeDefinitionGroup const &) = delete;
    VolumeDefinitionGroup() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEDEFINITIONGROUP
#endif
    MCAPI VolumeDefinitionGroup(class gsl::not_null<class Bedrock::NonOwnerPointer<class VolumeComponentFactory const>>);
    MCAPI void loadDefinitions(class ResourcePackManager const &, bool);
    MCAPI struct VolumeDefinition const * tryGetVolumeDefinition(std::string const &) const;
    MCAPI ~VolumeDefinitionGroup();
    MCAPI static void bindVolumeDefinitions();

//private:
    MCAPI bool _parseAndRegisterDefinition(std::string const &, class SemVersion const &, std::string const &);
    MCAPI bool _registerDefinition(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &, std::string const &);


private:


};