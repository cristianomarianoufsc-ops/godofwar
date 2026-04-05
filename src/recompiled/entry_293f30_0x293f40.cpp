#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293f30
// Address: 0x293f30 - 0x293f40
void entry_293f30_0x293f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293f30_0x293f40");
#endif

    ctx->pc = 0x293f30u;

    // 0x293f30: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x293f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x293f34: 0xc  syscall     0
    ctx->pc = 0x293f34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f38: 0x3e00008  jr          $ra
    ctx->pc = 0x293F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F40u;
}
