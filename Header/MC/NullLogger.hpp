// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NullLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLLOGGER
public:
    class NullLogger& operator=(class NullLogger const &) = delete;
    NullLogger(class NullLogger const &) = delete;
    NullLogger() = delete;
#endif


public:
    /*0*/ virtual ~NullLogger();
    /*1*/ virtual void Logv(char const *, char *);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLLOGGER
#endif
    MCAPI static class NullLogger instance;



};