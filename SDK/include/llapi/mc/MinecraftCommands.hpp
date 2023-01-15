/**
 * @file  MinecraftCommands.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandContext.hpp"
#include "MCRESULT.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftCommands.
 *
 */
class MinecraftCommands {

#define AFTER_EXTRA
// Add Member There
public:
    [[deprecated]]
    static MCRESULT _runcmd(void* origin, const std::string& cmd) {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            CommandContext context = CommandContext(cmd, std::unique_ptr<CommandOrigin>((CommandOrigin*)origin));
            return Global<MinecraftCommands>->executeCommand(context, false);
        }
        catch (...)
        {
        }
        return {0};
    }
    static MCRESULT _runcmd(std::unique_ptr<CommandOrigin> origin, const std::string& cmd)
    {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            CommandContext context = CommandContext(cmd, std::move(origin));
            return Global<MinecraftCommands>->executeCommand(context, false);
        }
        catch (...)
        {
        }
        return {0};
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTCOMMANDS
public:
    class MinecraftCommands& operator=(class MinecraftCommands const &) = delete;
    MinecraftCommands(class MinecraftCommands const &) = delete;
    MinecraftCommands() = delete;
#endif

public:
    /**
     * @symbol ??0MinecraftCommands@@QEAA@AEAVMinecraft@@@Z
     * @hash   856032526
     */
    MCAPI MinecraftCommands(class Minecraft &);
    /**
     * @symbol ?compileCommand@MinecraftCommands@@QEAAPEAVCommand@@AEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   -1985313780
     */
    MCAPI class Command * compileCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion, class std::function<void (std::string const &)>);
    /**
     * @symbol ?enqueueDeferredCommand@MinecraftCommands@@QEAAXV?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@std@@_N1V?$function@$$A6AXUMCRESULT@@@Z@3@@Z
     * @hash   -1277220069
     */
    MCAPI void enqueueDeferredCommand(std::unique_ptr<class CommandContext>, bool, bool, class std::function<void (struct MCRESULT)>);
    /**
     * @symbol ?enqueueDeferredCommandBlockCommand@MinecraftCommands@@QEAAXVBlockPos@@AEAVBlockSource@@@Z
     * @hash   -639938651
     */
    MCAPI void enqueueDeferredCommandBlockCommand(class BlockPos, class BlockSource &);
    /**
     * @symbol ?enqueueDeferredScriptCommand@MinecraftCommands@@QEAA_NV?$unique_ptr@VDeferredScriptCommand@@U?$default_delete@VDeferredScriptCommand@@@std@@@std@@@Z
     * @hash   -621061855
     */
    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand>);
    /**
     * @symbol ?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@AEAVCommandContext@@_N@Z
     * @hash   298560890
     */
    MCAPI struct MCRESULT executeCommand(class CommandContext &, bool) const;
    /**
     * @symbol ?getRegistry@MinecraftCommands@@QEAAAEAVCommandRegistry@@XZ
     * @hash   395205998
     */
    MCAPI class CommandRegistry & getRegistry();
    /**
     * @symbol ?handleOutput@MinecraftCommands@@QEBAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
     * @hash   1839315733
     */
    MCAPI void handleOutput(class CommandOrigin const &, class CommandOutput const &) const;
    /**
     * @symbol ?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z
     * @hash   1843992814
     */
    MCAPI void initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const &, class ActorFactory const &, class Experiments const &, class BaseGameVersion const &);
    /**
     * @symbol ?initCoreEnumsServer@MinecraftCommands@@QEAAXAEBVActorDefinitionGroup@@@Z
     * @hash   897705174
     */
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const &);
    /**
     * @symbol ?requestCommandExecution@MinecraftCommands@@QEAA?AUMCRESULT@@AEAVCommandContext@@_N@Z
     * @hash   1970388666
     */
    MCAPI struct MCRESULT requestCommandExecution(class CommandContext &, bool);
    /**
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEAVCommand@@AEAVCommandOrigin@@@Z
     * @hash   1022025343
     */
    MCAPI void runCommand(class Command &, class CommandOrigin &);
    /**
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
     * @hash   -259980676
     */
    MCAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @symbol ?runOrDeferCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
     * @hash   2086667422
     */
    MCAPI void runOrDeferCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @symbol ?runOrDeferCommand@MinecraftCommands@@QEAAXV?$not_null@PEAVCommand@@@gsl@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
     * @hash   359668497
     */
    MCAPI void runOrDeferCommand(class gsl::not_null<class Command *>, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @symbol ?setRegistryNetworkUpdateCallback@MinecraftCommands@@QEBAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
     * @hash   1725237249
     */
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void (class Packet const &)>) const;
    /**
     * @symbol ?shouldDeferCommand@MinecraftCommands@@QEBA_NW4CurrentCmdVersion@@@Z
     * @hash   -26916699
     */
    MCAPI bool shouldDeferCommand(enum class CurrentCmdVersion) const;
    /**
     * @symbol ?tick@MinecraftCommands@@QEAAXXZ
     * @hash   2115606973
     */
    MCAPI void tick();
    /**
     * @symbol ?getOutputType@MinecraftCommands@@SA?AW4CommandOutputType@@AEBVCommandOrigin@@@Z
     * @hash   -1310912393
     */
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const &);
    /**
     * @symbol ?initBlockEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     * @hash   -319090823
     */
    MCAPI static void initBlockEnum(class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @symbol ?initEntityEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVActorFactory@@AEBVExperiments@@@Z
     * @hash   -1972785828
     */
    MCAPI static void initEntityEnum(class CommandRegistry &, class ActorFactory const &, class Experiments const &);
    /**
     * @symbol ?initItemEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     * @hash   191728752
     */
    MCAPI static void initItemEnum(class ItemRegistryRef, class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @symbol ?initItemTagEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1072161862
     */
    MCAPI static void initItemTagEnum(class CommandRegistry &);
    /**
     * @symbol ?initStructureFeatureEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1489748844
     */
    MCAPI static void initStructureFeatureEnum(class CommandRegistry &);
    /**
     * @symbol ?registerSharedClientServerEnums@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   40347250
     */
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry &);

};