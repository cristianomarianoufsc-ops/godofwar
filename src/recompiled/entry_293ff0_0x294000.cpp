#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ff0
// Address: 0x293ff0 - 0x294000
void entry_293ff0_0x294000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ff0_0x294000");
#endif

    ctx->pc = 0x293ff0u;

    // 0x293ff0: 0x2403ff89  addiu       $v1, $zero, -0x77
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967177));
    // 0x293ff4: 0xc  syscall     0
    ctx->pc = 0x293ff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x293FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294000u;
}
