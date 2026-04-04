#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F34F8
// Address: 0x1f34f8 - 0x1f3578
void sub_001F34F8_0x1f34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F34F8_0x1f34f8");
#endif

    ctx->pc = 0x1f34f8u;

    // 0x1f34f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f34f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f34fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f34fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f3508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f350c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F350Cu;
    {
        const bool branch_taken_0x1f350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F350Cu;
            // 0x1f3510: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f350c) {
            ctx->pc = 0x1F3550u;
            goto label_1f3550;
        }
    }
    ctx->pc = 0x1F3514u;
    // 0x1f3514: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1f3514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3518: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f3518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f351c: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1f351cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1f3520: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1f3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1f3524: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1f3524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f3528: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f352c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f3530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3534: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3534u;
    {
        const bool branch_taken_0x1f3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F3538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3534u;
            // 0x1f3538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3534) {
            ctx->pc = 0x1F3540u;
            goto label_1f3540;
        }
    }
    ctx->pc = 0x1F353Cu;
    // 0x1f353c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f353cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f3540:
    // 0x1f3540: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3540u;
    {
        const bool branch_taken_0x1f3540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3540) {
            ctx->pc = 0x1F3544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3540u;
            // 0x1f3544: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3554u;
            goto label_1f3554;
        }
    }
    ctx->pc = 0x1F3548u;
    // 0x1f3548: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F3548u;
    SET_GPR_U32(ctx, 31, 0x1F3550u);
    ctx->pc = 0x1F354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3548u;
            // 0x1f354c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (runtime->hasFunction(0x1F3488u)) {
        auto targetFn = runtime->lookupFunction(0x1F3488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3550u; }
        if (ctx->pc != 0x1F3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3488_0x1f34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3550u; }
        if (ctx->pc != 0x1F3550u) { return; }
    }
    ctx->pc = 0x1F3550u;
label_1f3550:
    // 0x1f3550: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3554:
    // 0x1f3554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3554u;
    {
        const bool branch_taken_0x1f3554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3554u;
            // 0x1f3558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3554) {
            ctx->pc = 0x1F3564u;
            goto label_1f3564;
        }
    }
    ctx->pc = 0x1F355Cu;
    // 0x1f355c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3560: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1f3560u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f3564:
    // 0x1f3564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3568: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f356c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f356cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3570: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3570u;
            // 0x1f3574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3540u: goto label_1f3540;
            case 0x1F3550u: goto label_1f3550;
            case 0x1F3554u: goto label_1f3554;
            case 0x1F3564u: goto label_1f3564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3578u;
}
