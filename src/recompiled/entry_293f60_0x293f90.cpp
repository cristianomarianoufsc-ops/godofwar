#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293f60
// Address: 0x293f60 - 0x293f90
void entry_293f60_0x293f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293f60_0x293f90");
#endif

    ctx->pc = 0x293f60u;

    // 0x293f60: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x293f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x293f64: 0xc  syscall     0
    ctx->pc = 0x293f64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f68: 0x3e00008  jr          $ra
    ctx->pc = 0x293F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F70u;
    // 0x293f70: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x293f74: 0xc  syscall     0
    ctx->pc = 0x293f74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f78: 0x3e00008  jr          $ra
    ctx->pc = 0x293F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F80u;
    // 0x293f80: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x293f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x293f84: 0xc  syscall     0
    ctx->pc = 0x293f84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f88: 0x3e00008  jr          $ra
    ctx->pc = 0x293F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F90u;
}
