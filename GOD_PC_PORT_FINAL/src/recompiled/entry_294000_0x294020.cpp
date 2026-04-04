#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_294000
// Address: 0x294000 - 0x294020
void entry_294000_0x294020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_294000_0x294020");
#endif

    ctx->pc = 0x294000u;

    // 0x294000: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x294000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x294004: 0xc  syscall     0
    ctx->pc = 0x294004u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294008: 0x3e00008  jr          $ra
    ctx->pc = 0x294008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294010u;
    // 0x294010: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x294010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x294014: 0xc  syscall     0
    ctx->pc = 0x294014u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x294018: 0x3e00008  jr          $ra
    ctx->pc = 0x294018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294020u;
}
