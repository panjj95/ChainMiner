// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventorySource.hpp"
#include "NetworkItemStackDescriptor.hpp"
#include "ItemStack.hpp"

#undef BEFORE_EXTRA

class InventoryAction {

#define AFTER_EXTRA
// Add Member There
public:
    InventorySource source;                    // 0
    uint32_t slot;                             // 12
    NetworkItemStackDescriptor fromDescriptor; // 16
    NetworkItemStackDescriptor toDescriptor;   // 168
    ItemStack fromItem;                        // 320
    ItemStack toItem;                          // 480

private:
    inline void test()
    {
        static_assert(offsetof(InventoryAction, slot) == 12);
        static_assert(offsetof(InventoryAction, fromDescriptor) == 16);
        static_assert(offsetof(InventoryAction, toDescriptor) == 168);
        static_assert(offsetof(InventoryAction, fromItem) == 320);
        static_assert(offsetof(InventoryAction, toItem) == 480);
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYACTION
public:
    class InventoryAction& operator=(class InventoryAction const &) = delete;
    InventoryAction() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYACTION
#endif
    MCAPI InventoryAction(class InventoryAction const &);
    MCAPI void postLoadItems(class BlockPalette &, bool);
    MCAPI ~InventoryAction();



};