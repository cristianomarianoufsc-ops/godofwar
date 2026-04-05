#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293c00
// Address: 0x293c00 - 0x293c20
void entry_293c00_0x293c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293c00_0x293c20");
#endif

    ctx->pc = 0x293c00u;

    // 0x293c00: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x293c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x293c04: 0xc  syscall     0
    ctx->pc = 0x293c04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c08: 0x3e00008  jr          $ra
    ctx->pc = 0x293C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C10u;
    // 0x293c10: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x293c14: 0xc  syscall     0
    ctx->pc = 0x293c14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293c18: 0x3e00008  jr          $ra
    ctx->pc = 0x293C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C20u;
}
