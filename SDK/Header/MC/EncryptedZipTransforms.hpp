// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EncryptedZipTransforms {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDZIPTRANSFORMS
public:
    class EncryptedZipTransforms& operator=(class EncryptedZipTransforms const &) = delete;
    EncryptedZipTransforms(class EncryptedZipTransforms const &) = delete;
    EncryptedZipTransforms() = delete;
#endif

public:
    /*0*/ virtual ~EncryptedZipTransforms();
    /*1*/ virtual bool readTransform(std::vector<unsigned char> &) const;
    /*
    inline bool writeTransform(std::vector<unsigned char> & a0) const{
        bool (EncryptedZipTransforms::*rv)(std::vector<unsigned char> &) const;
        *((void**)&rv) = dlsym("?writeTransform@EncryptedZipTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z");
        return (this->*rv)(std::forward<std::vector<unsigned char> &>(a0));
    }
    */
    MCAPI EncryptedZipTransforms(class IContentKeyProvider const &);

protected:

private:

};