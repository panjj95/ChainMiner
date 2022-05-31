// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "ItemStackNetManagerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackNetManagerServer : public ItemStackNetManagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSERVER
public:
    class ItemStackNetManagerServer& operator=(class ItemStackNetManagerServer const &) = delete;
    ItemStackNetManagerServer(class ItemStackNetManagerServer const &) = delete;
    ItemStackNetManagerServer() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackNetManagerServer();
    /*2*/ virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const;
    /*3*/ virtual bool retainSetItemStackNetIdVariant() const;
    /*4*/ virtual bool allowInventoryTransactionManager() const;
    /*6*/ virtual void onContainerScreenOpen(class ContainerScreenContext const &);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void _initScreen(class ItemStackNetManagerScreen &);
    MCAPI ItemStackNetManagerServer(class ServerPlayer &, bool);
    MCAPI void _handleLegacyTransactionRequest(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &, std::vector<struct std::pair<enum ContainerEnumName, class std::vector<unsigned char, class std::allocator<unsigned char>>>> const &);
    MCAPI class gsl::final_action<class std::function<void (void)>> _retainSetItemStackNetIdVariantScope();
    MCAPI void handleRequest(std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    MCAPI void handleRequestBatch(class ItemStackRequestBatch const &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    MCAPI bool itemMatches(struct ItemStackRequestSlotInfo const &, class ItemStack const &);
    MCAPI void normalTick();
    MCAPI void startCrafting(bool, class BlockPos const &);
    MCAPI class CallbackToken tryCloseContainerScreen(class std::function<void (void)>);

protected:

private:
    MCAPI void _filterStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, std::vector<std::string> const &);
    MCAPI void _handleRequestData(std::vector<struct ItemStackResponseInfo> &, class ItemStackRequestData const *);
    MCAPI void _processQueue();
    MCAPI void _queueRequest(std::unique_ptr<class ItemStackRequestData>);
    MCAPI bool _tryFilterText(class ItemStackRequestData const *);

};