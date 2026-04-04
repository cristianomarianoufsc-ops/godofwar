#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293840
// Address: 0x293840 - 0x293900
void entry_293840_0x293900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293840_0x293900");
#endif

    ctx->pc = 0x293840u;

    // 0x293840: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293844: 0xc  syscall     0
    ctx->pc = 0x293844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293848: 0x3e00008  jr          $ra
    ctx->pc = 0x293848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293850u;
    // 0x293850: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x293850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x293854: 0xc  syscall     0
    ctx->pc = 0x293854u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293858: 0x3e00008  jr          $ra
    ctx->pc = 0x293858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293860u;
    // 0x293860: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x293860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x293864: 0xc  syscall     0
    ctx->pc = 0x293864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293868: 0x3e00008  jr          $ra
    ctx->pc = 0x293868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293870u;
    // 0x293870: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x293870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293874: 0xc  syscall     0
    ctx->pc = 0x293874u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293878: 0x3e00008  jr          $ra
    ctx->pc = 0x293878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293880u;
    // 0x293880: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x293880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x293884: 0xc  syscall     0
    ctx->pc = 0x293884u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293888: 0x3e00008  jr          $ra
    ctx->pc = 0x293888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293890u;
    // 0x293890: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x293894: 0xc  syscall     0
    ctx->pc = 0x293894u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293898: 0x3e00008  jr          $ra
    ctx->pc = 0x293898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938A0u;
    // 0x2938a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2938a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2938a4: 0xc  syscall     0
    ctx->pc = 0x2938a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938B0u;
    // 0x2938b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2938b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2938b4: 0xc  syscall     0
    ctx->pc = 0x2938b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938C0u;
    // 0x2938c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2938c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2938c4: 0xc  syscall     0
    ctx->pc = 0x2938c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938D0u;
    // 0x2938d0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2938d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2938d4: 0xc  syscall     0
    ctx->pc = 0x2938d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938E0u;
    // 0x2938e0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2938e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2938e4: 0xc  syscall     0
    ctx->pc = 0x2938e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2938F0u;
    // 0x2938f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2938f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2938f4: 0xc  syscall     0
    ctx->pc = 0x2938f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2938f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2938F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293900u;
}
