#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293f40
// Address: 0x293f40 - 0x293f60
void entry_293f40_0x293f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293f40_0x293f60");
#endif

    ctx->pc = 0x293f40u;

    // 0x293f40: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x293f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x293f44: 0xc  syscall     0
    ctx->pc = 0x293f44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f48: 0x3e00008  jr          $ra
    ctx->pc = 0x293F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F50u;
    // 0x293f50: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x293f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x293f54: 0xc  syscall     0
    ctx->pc = 0x293f54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f58: 0x3e00008  jr          $ra
    ctx->pc = 0x293F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F60u;
}
