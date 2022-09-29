/**
 * @file  ServerMoveInputHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveInputHandler.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerMoveInputHandler.
 *
 */
class ServerMoveInputHandler : public MoveInputHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLER
public:
    class ServerMoveInputHandler& operator=(class ServerMoveInputHandler const &) = delete;
    ServerMoveInputHandler(class ServerMoveInputHandler const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerMoveInputHandler();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMOVEINPUTHANDLER
    /**
     * @hash   137988177
     * @symbol ?registerInputHandlers@ServerMoveInputHandler@@UEAAXAEAVInputHandler@@@Z
     */
    MCVAPI void registerInputHandlers(class InputHandler &);
#endif
    /**
     * @hash   -1905087920
     * @symbol ??0ServerMoveInputHandler@@QEAA@XZ
     */
    MCAPI ServerMoveInputHandler();
    /**
     * @hash   -1995425712
     * @symbol ?digestPlayerInputPacket@ServerMoveInputHandler@@QEAAXAEBVPlayerAuthInputPacket@@@Z
     */
    MCAPI void digestPlayerInputPacket(class PlayerAuthInputPacket const &);

};