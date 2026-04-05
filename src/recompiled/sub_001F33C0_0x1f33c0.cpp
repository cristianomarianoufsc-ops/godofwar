#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F33C0
// Address: 0x1f33c0 - 0x1f3488
void sub_001F33C0_0x1f33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F33C0_0x1f33c0");
#endif

    ctx->pc = 0x1f33c0u;

    // 0x1f33c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f33c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f33c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f33c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f33cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f33ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f33d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f33d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f33d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f33dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f33dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33e0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f33e4: 0x0  nop
    ctx->pc = 0x1f33e4u;
    // NOP
label_1f33e8:
    // 0x1f33e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f33ec: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f33ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f33f0: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f33f4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f33f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f33f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f33fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F33FCu;
    {
        const bool branch_taken_0x1f33fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33FCu;
            // 0x1f3400: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33fc) {
            ctx->pc = 0x1F3460u;
            goto label_1f3460;
        }
    }
    ctx->pc = 0x1F3404u;
    // 0x1f3404: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f3408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f340c: 0x8c43e2c4  lw          $v1, -0x1D3C($v0)
    ctx->pc = 0x1f340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959812)));
    // 0x1f3410: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3414: 0xc07cd2c  jal         func_1F34B0
    ctx->pc = 0x1F3414u;
    SET_GPR_U32(ctx, 31, 0x1F341Cu);
    ctx->pc = 0x1F3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3414u;
            // 0x1f3418: 0xac43e2c4  sw          $v1, -0x1D3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F34B0u;
    if (runtime->hasFunction(0x1F34B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F34B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F341Cu; }
        if (ctx->pc != 0x1F341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f34b0_0x1f34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F341Cu; }
        if (ctx->pc != 0x1F341Cu) { return; }
    }
    ctx->pc = 0x1F341Cu;
    // 0x1f341c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3420: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1f3424: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3424u;
    {
        const bool branch_taken_0x1f3424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3424u;
            // 0x1f3428: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3424) {
            ctx->pc = 0x1F3440u;
            goto label_1f3440;
        }
    }
    ctx->pc = 0x1F342Cu;
    // 0x1f342c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3430: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3430u;
    {
        const bool branch_taken_0x1f3430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f3430) {
            ctx->pc = 0x1F3434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3430u;
            // 0x1f3434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3444u;
            goto label_1f3444;
        }
    }
    ctx->pc = 0x1F3438u;
    // 0x1f3438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3438u;
    {
        const bool branch_taken_0x1f3438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3438u;
            // 0x1f343c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3438) {
            ctx->pc = 0x1F3444u;
            goto label_1f3444;
        }
    }
    ctx->pc = 0x1F3440u;
label_1f3440:
    // 0x1f3440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3444:
    // 0x1f3444: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f3444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f3448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f344c: 0xc07cd60  jal         func_1F3580
    ctx->pc = 0x1F344Cu;
    SET_GPR_U32(ctx, 31, 0x1F3454u);
    ctx->pc = 0x1F3450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F344Cu;
            // 0x1f3450: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3580u;
    if (runtime->hasFunction(0x1F3580u)) {
        auto targetFn = runtime->lookupFunction(0x1F3580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3454u; }
        if (ctx->pc != 0x1F3454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3580_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3454u; }
        if (ctx->pc != 0x1F3454u) { return; }
    }
    ctx->pc = 0x1F3454u;
    // 0x1f3454: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1f3454u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1f3458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3458u;
    {
        const bool branch_taken_0x1f3458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3458u;
            // 0x1f345c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3458) {
            ctx->pc = 0x1F3470u;
            goto label_1f3470;
        }
    }
    ctx->pc = 0x1F3460u;
label_1f3460:
    // 0x1f3460: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x1f3460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f3464: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1F3464u;
    {
        const bool branch_taken_0x1f3464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3464u;
            // 0x1f3468: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3464) {
            ctx->pc = 0x1F33E8u;
            runtime->cooperativeGuestYield();
            goto label_1f33e8;
        }
    }
    ctx->pc = 0x1F346Cu;
    // 0x1f346c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f346cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3470:
    // 0x1f3470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f3478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f347c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3480: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3480u;
            // 0x1f3484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F33E8u: goto label_1f33e8;
            case 0x1F3440u: goto label_1f3440;
            case 0x1F3444u: goto label_1f3444;
            case 0x1F3460u: goto label_1f3460;
            case 0x1F3470u: goto label_1f3470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3488u;
}
