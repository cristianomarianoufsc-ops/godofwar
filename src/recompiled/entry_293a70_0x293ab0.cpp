#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293a70
// Address: 0x293a70 - 0x293ab0
void entry_293a70_0x293ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293a70_0x293ab0");
#endif

    ctx->pc = 0x293a70u;

    // 0x293a70: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x293a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x293a74: 0xc  syscall     0
    ctx->pc = 0x293a74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a78: 0x3e00008  jr          $ra
    ctx->pc = 0x293A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A80u;
    // 0x293a80: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x293a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x293a84: 0xc  syscall     0
    ctx->pc = 0x293a84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a88: 0x3e00008  jr          $ra
    ctx->pc = 0x293A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A90u;
    // 0x293a90: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x293a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x293a94: 0xc  syscall     0
    ctx->pc = 0x293a94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a98: 0x3e00008  jr          $ra
    ctx->pc = 0x293A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AA0u;
    // 0x293aa0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x293aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x293aa4: 0xc  syscall     0
    ctx->pc = 0x293aa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x293AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293AB0u;
}
