#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6180
// Address: 0x1a6180 - 0x1a6228
void sub_001A6180_0x1a6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6180_0x1a6180");
#endif

    ctx->pc = 0x1a6180u;

    // 0x1a6180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6184: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a6184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a6188: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a6188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a618c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a618cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6190: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6194: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6194u;
            // 0x1a6198: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61FCu;
            goto label_1a61fc;
        }
    }
    ctx->pc = 0x1A619Cu;
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a61a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a61a8: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A61A8u;
    {
        const bool branch_taken_0x1a61a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61A8u;
            // 0x1a61ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a8) {
            ctx->pc = 0x1A61FCu;
            goto label_1a61fc;
        }
    }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a61b4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a61b8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a61bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a61c0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A61C0u;
    {
        const bool branch_taken_0x1a61c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A61C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61C0u;
            // 0x1a61c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c0) {
            ctx->pc = 0x1A61E8u;
            goto label_1a61e8;
        }
    }
    ctx->pc = 0x1A61C8u;
label_1a61c8:
    // 0x1a61c8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1a61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a61cc: 0xc0696c4  jal         func_1A5B10
    ctx->pc = 0x1A61CCu;
    SET_GPR_U32(ctx, 31, 0x1A61D4u);
    ctx->pc = 0x1A61D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61CCu;
            // 0x1a61d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B10u;
    if (runtime->hasFunction(0x1A5B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61D4u; }
        if (ctx->pc != 0x1A61D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B10_0x1a5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61D4u; }
        if (ctx->pc != 0x1A61D4u) { return; }
    }
    ctx->pc = 0x1A61D4u;
    // 0x1a61d4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a61d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a61dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a61e0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A61E0u;
    {
        const bool branch_taken_0x1a61e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A61E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61E0u;
            // 0x1a61e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e0) {
            ctx->pc = 0x1A61C8u;
            runtime->cooperativeGuestYield();
            goto label_1a61c8;
        }
    }
    ctx->pc = 0x1A61E8u;
label_1a61e8:
    // 0x1a61e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a61ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a61f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a61f4: 0x1443ffee  bne         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A61F4u;
    {
        const bool branch_taken_0x1a61f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A61F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61F4u;
            // 0x1a61f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61f4) {
            ctx->pc = 0x1A61B0u;
            runtime->cooperativeGuestYield();
            goto label_1a61b0;
        }
    }
    ctx->pc = 0x1A61FCu;
label_1a61fc:
    // 0x1a61fc: 0xc06cd28  jal         func_1B34A0
    ctx->pc = 0x1A61FCu;
    SET_GPR_U32(ctx, 31, 0x1A6204u);
    ctx->pc = 0x1A6200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61FCu;
            // 0x1a6200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34A0u;
    if (runtime->hasFunction(0x1B34A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6204u; }
        if (ctx->pc != 0x1A6204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b34a0_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6204u; }
        if (ctx->pc != 0x1A6204u) { return; }
    }
    ctx->pc = 0x1A6204u;
    // 0x1a6204: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6208: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A6208u;
    {
        const bool branch_taken_0x1a6208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6208u;
            // 0x1a620c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6208) {
            ctx->pc = 0x1A61A0u;
            runtime->cooperativeGuestYield();
            goto label_1a61a0;
        }
    }
    ctx->pc = 0x1A6210u;
    // 0x1a6210: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a6210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6214: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a6214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a621c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A621Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A621Cu;
            // 0x1a6220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A61A0u: goto label_1a61a0;
            case 0x1A61B0u: goto label_1a61b0;
            case 0x1A61C8u: goto label_1a61c8;
            case 0x1A61E8u: goto label_1a61e8;
            case 0x1A61FCu: goto label_1a61fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6224u;
    // 0x1a6224: 0x0  nop
    ctx->pc = 0x1a6224u;
    // NOP
}
