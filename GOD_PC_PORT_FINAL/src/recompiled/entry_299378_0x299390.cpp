#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299378
// Address: 0x299378 - 0x299390
void entry_299378_0x299390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299378_0x299390");
#endif

    ctx->pc = 0x299378u;

    // 0x299378: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x29937c: 0xc  syscall     0
    ctx->pc = 0x29937cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x299380: 0x3e00008  jr          $ra
    ctx->pc = 0x299380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299388u;
    // 0x299388: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29938c: 0x0  nop
    ctx->pc = 0x29938cu;
    // NOP
}
