// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
public:
    class DirectoryPackWithEncryptionAccessStrategy& operator=(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy() = delete;
#endif

public:
    /*0*/ virtual ~DirectoryPackWithEncryptionAccessStrategy();
    /*1*/ virtual unsigned __int64 getPackSize() const;
    /*2*/ virtual class ResourceLocation const & getPackLocation() const;
    /*3*/ virtual std::string const & getPackName() const;
    /*4*/ virtual bool isWritable() const;
    /*5*/ virtual void setIsTrusted(bool);
    /*6*/ virtual bool isTrusted() const;
    /*7*/ virtual bool hasAsset(class Core::Path const &, bool) const;
    /*8*/ virtual bool hasFolder(class Core::Path const &) const;
    /*9*/ virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /*10*/ virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /*11*/ virtual bool writeAsset(class Core::Path const &, std::string const &);
    /*12*/ virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /*14*/ virtual enum PackAccessStrategyType getStrategyType() const;
    /*16*/ virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /*17*/ virtual enum PackAccessAssetGenerationResult generateAssetSet();
    /*18*/ virtual bool canRecurse() const;
    /*19*/ virtual void unload();
    /*20*/ virtual bool hasUpgradeFiles() const;
    /*21*/ virtual class ContentIdentity readContentIdentity() const;
    MCAPI DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const &, class ResourceLocation const &, class IContentKeyProvider const &);

protected:

private:
    MCAPI bool _getUnencryptedAsset(class Core::Path const &, std::string &) const;
    MCAPI bool _hasUnencryptedAsset(class Core::Path const &) const;

};