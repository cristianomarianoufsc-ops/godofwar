#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293f90
// Address: 0x293f90 - 0x293fc0
void entry_293f90_0x293fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293f90_0x293fc0");
#endif

    ctx->pc = 0x293f90u;

    // 0x293f90: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x293f94: 0xc  syscall     0
    ctx->pc = 0x293f94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293f98: 0x3e00008  jr          $ra
    ctx->pc = 0x293F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FA0u;
    // 0x293fa0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x293fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x293fa4: 0xc  syscall     0
    ctx->pc = 0x293fa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x293FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FB0u;
    // 0x293fb0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x293fb4: 0xc  syscall     0
    ctx->pc = 0x293fb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x293FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293FC0u;
}
