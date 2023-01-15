/**
 * @file  IdentityDictionary.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentityDictionary.
 *
 */
class IdentityDictionary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDICTIONARY
public:
    class IdentityDictionary& operator=(class IdentityDictionary const &) = delete;
    IdentityDictionary(class IdentityDictionary const &) = delete;
#endif

public:
    /**
     * @symbol ??0IdentityDictionary@@QEAA@XZ
     * @hash   -56976864
     */
    MCAPI IdentityDictionary();
    /**
     * @symbol ?clearIdentity@IdentityDictionary@@QEAA_NAEBUScoreboardId@@@Z
     * @hash   -11867023
     */
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    /**
     * @symbol ?convertFakeToReal@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
     * @hash   456701873
     */
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?getAllScoreboardIds@IdentityDictionary@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
     * @hash   1058486194
     */
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;
    /**
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUActorUniqueID@@@Z
     * @hash   1541811861
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct ActorUniqueID const &) const;
    /**
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   346904149
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1605599713
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUActorUniqueID@@@Z
     * @hash   -1059531273
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
     * @hash   -502513761
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   471925331
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @symbol ?shouldConvertFakePlayer@IdentityDictionary@@QEAA_NAEBUPlayerScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1182893642
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const &, std::string const &);
    /**
     * @symbol ??1IdentityDictionary@@QEAA@XZ
     * @hash   309544462
     */
    MCAPI ~IdentityDictionary();

};