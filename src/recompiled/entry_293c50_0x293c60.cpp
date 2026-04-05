#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293c50
// Address: 0x293c50 - 0x293c60
void entry_293c50_0x293c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293c50_0x293c60");
#endif

    ctx->pc = 0x293c50u;

    // 0x293c50: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x293c54: 0xc  syscall     0
    ctx->pc = 0x293c54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c58: 0x3e00008  jr          $ra
    ctx->pc = 0x293C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C60u;
}
