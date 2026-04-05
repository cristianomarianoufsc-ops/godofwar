#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293cc0
// Address: 0x293cc0 - 0x293cd0
void entry_293cc0_0x293cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293cc0_0x293cd0");
#endif

    ctx->pc = 0x293cc0u;

    // 0x293cc0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x293cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x293cc4: 0xc  syscall     0
    ctx->pc = 0x293cc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x293CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293CD0u;
}
