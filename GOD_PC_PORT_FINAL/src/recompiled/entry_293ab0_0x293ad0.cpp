#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ab0
// Address: 0x293ab0 - 0x293ad0
void entry_293ab0_0x293ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ab0_0x293ad0");
#endif

    ctx->pc = 0x293ab0u;

    // 0x293ab0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x293ab4: 0xc  syscall     0
    ctx->pc = 0x293ab4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AC0u;
    // 0x293ac0: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x293ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x293ac4: 0xc  syscall     0
    ctx->pc = 0x293ac4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AD0u;
}
