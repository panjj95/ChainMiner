/**
 * @file  CommandLexer.hpp
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
 * @brief MC class CommandLexer.
 *
 */
class CommandLexer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDLEXER
public:
    class CommandLexer& operator=(class CommandLexer const &) = delete;
    CommandLexer(class CommandLexer const &) = delete;
    CommandLexer() = delete;
#endif

public:
    /**
     * @symbol ??0CommandLexer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1340903404
     */
    MCAPI CommandLexer(std::string const &);
    /**
     * @symbol ?next@CommandLexer@@QEBAAEBUToken@1@XZ
     * @hash   1969052884
     */
    MCAPI struct CommandLexer::Token const & next() const;
    /**
     * @symbol ?step@CommandLexer@@QEAAXXZ
     * @hash   1304957125
     */
    MCAPI void step();
    /**
     * @symbol ?isDigit@CommandLexer@@SA_ND@Z
     * @hash   -1144158450
     */
    MCAPI static bool isDigit(char);
    /**
     * @symbol ?isFilePathCharacter@CommandLexer@@SA_ND@Z
     * @hash   -293725352
     */
    MCAPI static bool isFilePathCharacter(char);

};