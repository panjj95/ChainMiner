/**
 * @file  SkeletonPassengerRotationSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SkeletonPassengerRotationSystem.
 *
 */
class SkeletonPassengerRotationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONPASSENGERROTATIONSYSTEM
public:
    class SkeletonPassengerRotationSystem& operator=(class SkeletonPassengerRotationSystem const &) = delete;
    SkeletonPassengerRotationSystem(class SkeletonPassengerRotationSystem const &) = delete;
    SkeletonPassengerRotationSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSkeletonPassengerRotationSystem@SkeletonPassengerRotationSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -982169352
     */
    MCAPI static struct TickingSystemWithInfo createSkeletonPassengerRotationSystem();

};