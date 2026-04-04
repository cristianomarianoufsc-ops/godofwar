#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293a40
// Address: 0x293a40 - 0x293a70
void entry_293a40_0x293a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293a40_0x293a70");
#endif

    ctx->pc = 0x293a40u;

    // 0x293a40: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x293a44: 0xc  syscall     0
    ctx->pc = 0x293a44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a48: 0x3e00008  jr          $ra
    ctx->pc = 0x293A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A50u;
    // 0x293a50: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x293a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x293a54: 0xc  syscall     0
    ctx->pc = 0x293a54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a58: 0x3e00008  jr          $ra
    ctx->pc = 0x293A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A60u;
    // 0x293a60: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x293a64: 0xc  syscall     0
    ctx->pc = 0x293a64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293a68: 0x3e00008  jr          $ra
    ctx->pc = 0x293A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293A70u;
}
