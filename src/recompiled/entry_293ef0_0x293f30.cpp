#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293ef0
// Address: 0x293ef0 - 0x293f30
void entry_293ef0_0x293f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293ef0_0x293f30");
#endif

    ctx->pc = 0x293ef0u;

    // 0x293ef0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x293ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x293ef4: 0xc  syscall     0
    ctx->pc = 0x293ef4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x293EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F00u;
    // 0x293f00: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x293f04: 0xc  syscall     0
    ctx->pc = 0x293f04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f08: 0x3e00008  jr          $ra
    ctx->pc = 0x293F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F10u;
    // 0x293f10: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x293f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x293f14: 0xc  syscall     0
    ctx->pc = 0x293f14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f18: 0x3e00008  jr          $ra
    ctx->pc = 0x293F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F20u;
    // 0x293f20: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x293f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x293f24: 0xc  syscall     0
    ctx->pc = 0x293f24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f28: 0x3e00008  jr          $ra
    ctx->pc = 0x293F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293F30u;
}
