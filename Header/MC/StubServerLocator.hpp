// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StubServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STUBSERVERLOCATOR
public:
    class StubServerLocator& operator=(class StubServerLocator const &) = delete;
    StubServerLocator(class StubServerLocator const &) = delete;
#endif


public:
    /*0*/ virtual ~StubServerLocator();
    /*1*/ virtual void setGetHostGUIDFn(class std::function<struct RakNet::RakNetGUID (void)> const &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void startAnnouncingServer(std::string const &, std::string const &, enum GameType, int, int, bool);
    /*4*/ virtual void stopAnnouncingServer();
    /*5*/ virtual void startServerDiscovery(struct PortPair);
    /*6*/ virtual void stopServerDiscovery();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /*10*/ virtual void clearServerList();
    /*11*/ virtual void update();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual float getPingTimeForGUID(std::string const &);
    /*16*/ virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STUBSERVERLOCATOR
    MCVAPI void addCustomServer(class AsynchronousIPResolver const &, int);
    MCVAPI void addCustomServer(std::string const &, int);
    MCVAPI bool isIPv4Supported() const;
    MCVAPI bool isIPv6Supported() const;
#endif
    MCAPI StubServerLocator();



};