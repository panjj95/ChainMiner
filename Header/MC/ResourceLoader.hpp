// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourceLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADER
public:
    class ResourceLoader& operator=(class ResourceLoader const &) = delete;
    ResourceLoader(class ResourceLoader const &) = delete;
    ResourceLoader() = delete;
#endif


public:
    /*0*/ virtual ~ResourceLoader();
    /*1*/ virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4() = 0;
    /*5*/ virtual void __unk_vfn_5() = 0;
    /*6*/ virtual void __unk_vfn_6() = 0;
    /*7*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /*8*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*9*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /*10*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /*11*/ virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADER
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &) const;
#endif



};