// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FileChunkManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKMANAGER
public:
    class FileChunkManager& operator=(class FileChunkManager const &) = delete;
    FileChunkManager(class FileChunkManager const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILECHUNKMANAGER
#endif
    MCAPI FileChunkManager();
    MCAPI struct FileChunkInfo getChunkInfo(int) const;
    MCAPI std::vector<struct FileChunkInfo> const & getChunks() const;
    MCAPI int getTotalNumberOfChunks();
    MCAPI void reset();
    MCAPI void reset(unsigned __int64, unsigned int);
    MCAPI ~FileChunkManager();

//private:
    MCAPI void _generateChunkInfo();


private:


};