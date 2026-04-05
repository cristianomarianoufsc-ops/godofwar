#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188408
// Address: 0x188408 - 0x188478
void sub_00188408_0x188408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188408_0x188408");
#endif

    ctx->pc = 0x188408u;

    // 0x188408: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18840c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188410: 0x8c434d08  lw          $v1, 0x4D08($v0)
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19720)));
    // 0x188414: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x188414u;
    {
        const bool branch_taken_0x188414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188414u;
            // 0x188418: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188414) {
            ctx->pc = 0x188460u;
            goto label_188460;
        }
    }
    ctx->pc = 0x18841Cu;
    // 0x18841c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188420: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188420u;
    {
        const bool branch_taken_0x188420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188420u;
            // 0x188424: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188420) {
            ctx->pc = 0x188468u;
            goto label_188468;
        }
    }
    ctx->pc = 0x188428u;
    // 0x188428: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18842c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188430: 0x8c434cf0  lw          $v1, 0x4CF0($v0)
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19696)));
    // 0x188434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188438: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18843c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188440: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x188440u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x188444: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x188444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x188448: 0x66280b  movn        $a1, $v1, $a2
    ctx->pc = 0x188448u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x18844c: 0x8c444cec  lw          $a0, 0x4CEC($v0)
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19692)));
    // 0x188450: 0x52a83  sra         $a1, $a1, 10
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 10));
    // 0x188454: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x188454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188458: 0xc09b232  jal         func_26C8C8
    ctx->pc = 0x188458u;
    SET_GPR_U32(ctx, 31, 0x188460u);
    ctx->pc = 0x18845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188458u;
            // 0x18845c: 0x52a80  sll         $a1, $a1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C8C8u;
    if (runtime->hasFunction(0x26C8C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188460u; }
        if (ctx->pc != 0x188460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C8C8_0x26c8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188460u; }
        if (ctx->pc != 0x188460u) { return; }
    }
    ctx->pc = 0x188460u;
label_188460:
    // 0x188460: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188468:
    // 0x188468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18846c: 0xac624cf4  sw          $v0, 0x4CF4($v1)
    ctx->pc = 0x18846cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19700), GPR_U32(ctx, 2));
    // 0x188470: 0x3e00008  jr          $ra
    ctx->pc = 0x188470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188470u;
            // 0x188474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188460u: goto label_188460;
            case 0x188468u: goto label_188468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188478u;
}
