// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    /*1*/ virtual void __unk_vfn_1();
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
    /*
    inline bool isIPv6Supported() const{
        bool (StubServerLocator::*rv)() const;
        *((void**)&rv) = dlsym("?isIPv6Supported@StubServerLocator@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isIPv4Supported() const{
        bool (StubServerLocator::*rv)() const;
        *((void**)&rv) = dlsym("?isIPv4Supported@StubServerLocator@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void setGetHostGUIDFn(class std::function<struct RakNet::RakNetGUID (void)> const & a0){
        void (StubServerLocator::*rv)(class std::function<struct RakNet::RakNetGUID (void)> const &);
        *((void**)&rv) = dlsym("?setGetHostGUIDFn@StubServerLocator@@UEAAXAEBV?$function@$$A6A?AURakNetGUID@RakNet@@XZ@std@@@Z");
        return (this->*rv)(std::forward<class std::function<struct RakNet::RakNetGUID (void)> const &>(a0));
    }
    inline  ~StubServerLocator(){
         (StubServerLocator::*rv)();
        *((void**)&rv) = dlsym("??1StubServerLocator@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void addCustomServer(class AsynchronousIPResolver const & a0, int a1){
        void (StubServerLocator::*rv)(class AsynchronousIPResolver const &, int);
        *((void**)&rv) = dlsym("?addCustomServer@StubServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z");
        return (this->*rv)(std::forward<class AsynchronousIPResolver const &>(a0), std::forward<int>(a1));
    }
    inline void addCustomServer(std::string const & a0, int a1){
        void (StubServerLocator::*rv)(std::string const &, int);
        *((void**)&rv) = dlsym("?addCustomServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<int>(a1));
    }
    */
    MCAPI StubServerLocator();

protected:

private:

};