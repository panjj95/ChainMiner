// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UriListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_URILISTENER
public:
    class UriListener& operator=(class UriListener const &) = delete;
    UriListener(class UriListener const &) = delete;
    UriListener() = delete;
#endif

public:
    /*0*/ virtual ~UriListener();
    /*
    inline  ~UriListener(){
         (UriListener::*rv)();
        *((void**)&rv) = dlsym("??1UriListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};