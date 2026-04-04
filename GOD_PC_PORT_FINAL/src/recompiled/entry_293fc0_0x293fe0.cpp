#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293fc0
// Address: 0x293fc0 - 0x293fe0
void entry_293fc0_0x293fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293fc0_0x293fe0");
#endif

    ctx->pc = 0x293fc0u;

    // 0x293fc0: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x293fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x293fc4: 0xc  syscall     0
    ctx->pc = 0x293fc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x293FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FD0u;
    // 0x293fd0: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x293fd4: 0xc  syscall     0
    ctx->pc = 0x293fd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x293FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FE0u;
}
