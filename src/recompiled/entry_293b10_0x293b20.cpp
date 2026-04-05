#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293b10
// Address: 0x293b10 - 0x293b20
void entry_293b10_0x293b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293b10_0x293b20");
#endif

    ctx->pc = 0x293b10u;

    // 0x293b10: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x293b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x293b14: 0xc  syscall     0
    ctx->pc = 0x293b14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b18: 0x3e00008  jr          $ra
    ctx->pc = 0x293B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B20u;
}
