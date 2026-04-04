#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ed0
// Address: 0x293ed0 - 0x293ef0
void entry_293ed0_0x293ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ed0_0x293ef0");
#endif

    ctx->pc = 0x293ed0u;

    // 0x293ed0: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x293ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x293ed4: 0xc  syscall     0
    ctx->pc = 0x293ed4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x293ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293EE0u;
    // 0x293ee0: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x293ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x293ee4: 0xc  syscall     0
    ctx->pc = 0x293ee4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293EF0u;
}
