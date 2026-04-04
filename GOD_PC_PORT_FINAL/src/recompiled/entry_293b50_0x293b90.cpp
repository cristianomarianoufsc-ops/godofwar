#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293b50
// Address: 0x293b50 - 0x293b90
void entry_293b50_0x293b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293b50_0x293b90");
#endif

    ctx->pc = 0x293b50u;

    // 0x293b50: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x293b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x293b54: 0xc  syscall     0
    ctx->pc = 0x293b54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b58: 0x3e00008  jr          $ra
    ctx->pc = 0x293B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B60u;
    // 0x293b60: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x293b64: 0xc  syscall     0
    ctx->pc = 0x293b64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b68: 0x3e00008  jr          $ra
    ctx->pc = 0x293B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B70u;
    // 0x293b70: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x293b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x293b74: 0xc  syscall     0
    ctx->pc = 0x293b74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b78: 0x3e00008  jr          $ra
    ctx->pc = 0x293B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B80u;
    // 0x293b80: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x293b84: 0xc  syscall     0
    ctx->pc = 0x293b84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b88: 0x3e00008  jr          $ra
    ctx->pc = 0x293B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293B90u;
}
