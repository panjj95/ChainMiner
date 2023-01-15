/**
 * @file  ContainerScreenValidationActivate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidation.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidationActivate.
 *
 */
class ContainerScreenValidationActivate : public ContainerScreenValidation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONACTIVATE
public:
    class ContainerScreenValidationActivate& operator=(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1231062791
     */
    virtual ~ContainerScreenValidationActivate();
    /**
     * @vftbl  3
     * @symbol ?tryActivate@ContainerScreenValidationActivate@@EEAA?AUContainerValidationResult@@XZ
     * @hash   -1514712629
     */
    virtual struct ContainerValidationResult tryActivate();

};