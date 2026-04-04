#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1db3d0
// Address: 0x1db3d0 - 0x1db418
void entry_1db3d0_0x1db418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1db3d0_0x1db418");
#endif

    ctx->pc = 0x1db3d0u;

    // 0x1db3d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db3d4: 0x9442cc9c  lhu         $v0, -0x3364($v0)
    ctx->pc = 0x1db3d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1db3d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1db3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1db3dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1db3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1db3e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB3E0u;
    {
        const bool branch_taken_0x1db3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3E0u;
            // 0x1db3e4: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3e0) {
            ctx->pc = 0x1DB3F0u;
            goto label_1db3f0;
        }
    }
    ctx->pc = 0x1DB3E8u;
    // 0x1db3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3E8u;
            // 0x1db3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB3F0u: goto label_1db3f0;
            case 0x1DB404u: goto label_1db404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB3F0u;
label_1db3f0:
    // 0x1db3f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1db3f4: 0x8c422920  lw          $v0, 0x2920($v0)
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10528)));
    // 0x1db3f8: 0x8c632d08  lw          $v1, 0x2D08($v1)
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11528)));
    // 0x1db3fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB3FCu;
    {
        const bool branch_taken_0x1db3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db3fc) {
            ctx->pc = 0x1DB400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3FCu;
            // 0x1db400: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB404u;
            goto label_1db404;
        }
    }
    ctx->pc = 0x1DB404u;
label_1db404:
    // 0x1db404: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1db404u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1db408: 0x1010  mfhi        $v0
    ctx->pc = 0x1db408u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1db40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB40Cu;
            // 0x1db410: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB3F0u: goto label_1db3f0;
            case 0x1DB404u: goto label_1db404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB414u;
    // 0x1db414: 0x0  nop
    ctx->pc = 0x1db414u;
    // NOP
}
