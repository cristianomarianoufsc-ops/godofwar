#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293b90
// Address: 0x293b90 - 0x293c00
void entry_293b90_0x293c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293b90_0x293c00");
#endif

    ctx->pc = 0x293b90u;

    // 0x293b90: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x293b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x293b94: 0xc  syscall     0
    ctx->pc = 0x293b94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293b98: 0x3e00008  jr          $ra
    ctx->pc = 0x293B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BA0u;
    // 0x293ba0: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x293ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x293ba4: 0xc  syscall     0
    ctx->pc = 0x293ba4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BB0u;
    // 0x293bb0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x293bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x293bb4: 0xc  syscall     0
    ctx->pc = 0x293bb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BC0u;
    // 0x293bc0: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x293bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x293bc4: 0xc  syscall     0
    ctx->pc = 0x293bc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BD0u;
    // 0x293bd0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x293bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x293bd4: 0xc  syscall     0
    ctx->pc = 0x293bd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BE0u;
    // 0x293be0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x293be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x293be4: 0xc  syscall     0
    ctx->pc = 0x293be4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293be8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BF0u;
    // 0x293bf0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x293bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x293bf4: 0xc  syscall     0
    ctx->pc = 0x293bf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293C00u;
}
