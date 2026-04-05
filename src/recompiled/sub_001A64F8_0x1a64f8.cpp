#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A64F8
// Address: 0x1a64f8 - 0x1a6578
void sub_001A64F8_0x1a64f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A64F8_0x1a64f8");
#endif

    ctx->pc = 0x1a64f8u;

    // 0x1a64f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a64fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a6500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6508: 0xc06cd42  jal         func_1B3508
    ctx->pc = 0x1A6508u;
    SET_GPR_U32(ctx, 31, 0x1A6510u);
    ctx->pc = 0x1A650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6508u;
            // 0x1a650c: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3508u;
    if (runtime->hasFunction(0x1B3508u)) {
        auto targetFn = runtime->lookupFunction(0x1B3508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6510u; }
        if (ctx->pc != 0x1A6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3508_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6510u; }
        if (ctx->pc != 0x1A6510u) { return; }
    }
    ctx->pc = 0x1A6510u;
    // 0x1a6510: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6510u;
    {
        const bool branch_taken_0x1a6510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6510) {
            ctx->pc = 0x1A6514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6510u;
            // 0x1a6514: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A656Cu;
            goto label_1a656c;
        }
    }
    ctx->pc = 0x1A6518u;
    // 0x1a6518: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a6518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a651c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6520: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1a6524: 0x0  nop
    ctx->pc = 0x1a6524u;
    // NOP
label_1a6528:
    // 0x1a6528: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a6528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a652c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a6530: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6534: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6534u;
    {
        const bool branch_taken_0x1a6534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6534) {
            ctx->pc = 0x1A6538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6534u;
            // 0x1a6538: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A656Cu;
            goto label_1a656c;
        }
    }
    ctx->pc = 0x1A653Cu;
    // 0x1a653c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a6540: 0x5482fff9  bnel        $a0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A6540u;
    {
        const bool branch_taken_0x1a6540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6540) {
            ctx->pc = 0x1A6544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6540u;
            // 0x1a6544: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6528u;
            runtime->cooperativeGuestYield();
            goto label_1a6528;
        }
    }
    ctx->pc = 0x1A6548u;
    // 0x1a6548: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a654c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A654Cu;
    {
        const bool branch_taken_0x1a654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A654Cu;
            // 0x1a6550: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a654c) {
            ctx->pc = 0x1A6568u;
            goto label_1a6568;
        }
    }
    ctx->pc = 0x1A6554u;
    // 0x1a6554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6558: 0x24a5d850  addiu       $a1, $a1, -0x27B0
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957136));
    // 0x1a655c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6560: 0xc04d290  jal         func_134A40
    ctx->pc = 0x1A6560u;
    SET_GPR_U32(ctx, 31, 0x1A6568u);
    ctx->pc = 0x1A6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6560u;
            // 0x1a6564: 0xac700008  sw          $s0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A40u;
    if (runtime->hasFunction(0x134A40u)) {
        auto targetFn = runtime->lookupFunction(0x134A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6568u; }
        if (ctx->pc != 0x1A6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a40_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6568u; }
        if (ctx->pc != 0x1A6568u) { return; }
    }
    ctx->pc = 0x1A6568u;
label_1a6568:
    // 0x1a6568: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a6568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a656c:
    // 0x1a656c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a656cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6570: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6570u;
            // 0x1a6574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6528u: goto label_1a6528;
            case 0x1A6568u: goto label_1a6568;
            case 0x1A656Cu: goto label_1a656c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6578u;
}
