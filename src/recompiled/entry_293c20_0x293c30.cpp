#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293c20
// Address: 0x293c20 - 0x293c30
void entry_293c20_0x293c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293c20_0x293c30");
#endif

    ctx->pc = 0x293c20u;

    // 0x293c20: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x293c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x293c24: 0xc  syscall     0
    ctx->pc = 0x293c24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c28: 0x3e00008  jr          $ra
    ctx->pc = 0x293C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C30u;
}
