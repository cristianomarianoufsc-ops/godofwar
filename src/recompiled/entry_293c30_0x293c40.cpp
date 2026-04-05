#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293c30
// Address: 0x293c30 - 0x293c40
void entry_293c30_0x293c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293c30_0x293c40");
#endif

    ctx->pc = 0x293c30u;

    // 0x293c30: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x293c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x293c34: 0xc  syscall     0
    ctx->pc = 0x293c34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c38: 0x3e00008  jr          $ra
    ctx->pc = 0x293C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C40u;
}
