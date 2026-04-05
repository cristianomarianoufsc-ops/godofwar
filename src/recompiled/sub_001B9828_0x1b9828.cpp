#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9828
// Address: 0x1b9828 - 0x1b9908
void sub_001B9828_0x1b9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9828_0x1b9828");
#endif

    ctx->pc = 0x1b9828u;

    // 0x1b9828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b982c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b9830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9838: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B9838u;
    {
        const bool branch_taken_0x1b9838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9838u;
            // 0x1b983c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9838) {
            ctx->pc = 0x1B9864u;
            goto label_1b9864;
        }
    }
    ctx->pc = 0x1B9840u;
    // 0x1b9840: 0x8e021530  lw          $v0, 0x1530($s0)
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
    // 0x1b9844: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B9844u;
    {
        const bool branch_taken_0x1b9844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9844) {
            ctx->pc = 0x1B9848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9844u;
            // 0x1b9848: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B98FCu;
            goto label_1b98fc;
        }
    }
    ctx->pc = 0x1B984Cu;
    // 0x1b984c: 0x8e021528  lw          $v0, 0x1528($s0)
    ctx->pc = 0x1b984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5416)));
    // 0x1b9850: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B9850u;
    {
        const bool branch_taken_0x1b9850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9850) {
            ctx->pc = 0x1B9854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9850u;
            // 0x1b9854: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B98FCu;
            goto label_1b98fc;
        }
    }
    ctx->pc = 0x1B9858u;
    // 0x1b9858: 0x8e02152c  lw          $v0, 0x152C($s0)
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5420)));
    // 0x1b985c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B985Cu;
    {
        const bool branch_taken_0x1b985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b985c) {
            ctx->pc = 0x1B9860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B985Cu;
            // 0x1b9860: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B98FCu;
            goto label_1b98fc;
        }
    }
    ctx->pc = 0x1B9864u;
label_1b9864:
    // 0x1b9864: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1b9868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b986c: 0x8d22cbb4  lw          $v0, -0x344C($t1)
    ctx->pc = 0x1b986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294953908)));
    // 0x1b9870: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9870u;
    {
        const bool branch_taken_0x1b9870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9870u;
            // 0x1b9874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9870) {
            ctx->pc = 0x1B9888u;
            goto label_1b9888;
        }
    }
    ctx->pc = 0x1B9878u;
    // 0x1b9878: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9878u;
    {
        const bool branch_taken_0x1b9878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9878) {
            ctx->pc = 0x1B9888u;
            goto label_1b9888;
        }
    }
    ctx->pc = 0x1B9880u;
    // 0x1b9880: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B9880u;
    {
        const bool branch_taken_0x1b9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9880u;
            // 0x1b9884: 0xad25cbb4  sw          $a1, -0x344C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294953908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9880) {
            ctx->pc = 0x1B98F8u;
            goto label_1b98f8;
        }
    }
    ctx->pc = 0x1B9888u;
label_1b9888:
    // 0x1b9888: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9888u;
    {
        const bool branch_taken_0x1b9888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9888u;
            // 0x1b988c: 0xad25cbb4  sw          $a1, -0x344C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294953908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9888) {
            ctx->pc = 0x1B98A8u;
            goto label_1b98a8;
        }
    }
    ctx->pc = 0x1B9890u;
    // 0x1b9890: 0x8e0215a4  lw          $v0, 0x15A4($s0)
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5540)));
    // 0x1b9894: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9894u;
    {
        const bool branch_taken_0x1b9894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B9898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9894u;
            // 0x1b9898: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9894) {
            ctx->pc = 0x1B98ACu;
            goto label_1b98ac;
        }
    }
    ctx->pc = 0x1B989Cu;
    // 0x1b989c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1b989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b98a0: 0x50460016  beql        $v0, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B98A0u;
    {
        const bool branch_taken_0x1b98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b98a0) {
            ctx->pc = 0x1B98A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98A0u;
            // 0x1b98a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B98FCu;
            goto label_1b98fc;
        }
    }
    ctx->pc = 0x1B98A8u;
label_1b98a8:
    // 0x1b98a8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_1b98ac:
    // 0x1b98ac: 0xae050220  sw          $a1, 0x220($s0)
    ctx->pc = 0x1b98acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 5));
    // 0x1b98b0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1b98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1b98b4: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x1b98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x1b98b8: 0xae07004c  sw          $a3, 0x4C($s0)
    ctx->pc = 0x1b98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 7));
    // 0x1b98bc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1b98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1b98c0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B98C0u;
    {
        const bool branch_taken_0x1b98c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C0u;
            // 0x1b98c4: 0xae0515a4  sw          $a1, 0x15A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98c0) {
            ctx->pc = 0x1B98F0u;
            goto label_1b98f0;
        }
    }
    ctx->pc = 0x1B98C8u;
    // 0x1b98c8: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B98C8u;
    SET_GPR_U32(ctx, 31, 0x1B98D0u);
    ctx->pc = 0x1B98CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C8u;
            // 0x1b98cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D0u; }
        if (ctx->pc != 0x1B98D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D0u; }
        if (ctx->pc != 0x1B98D0u) { return; }
    }
    ctx->pc = 0x1B98D0u;
    // 0x1b98d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B98D0u;
    {
        const bool branch_taken_0x1b98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98D0u;
            // 0x1b98d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98d0) {
            ctx->pc = 0x1B98F0u;
            goto label_1b98f0;
        }
    }
    ctx->pc = 0x1B98D8u;
    // 0x1b98d8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b98dc: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b98e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b98e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b98e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b98ec: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1b98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1b98f0:
    // 0x1b98f0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B98F0u;
    SET_GPR_U32(ctx, 31, 0x1B98F8u);
    ctx->pc = 0x1B98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98F0u;
            // 0x1b98f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98F8u; }
        if (ctx->pc != 0x1B98F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98F8u; }
        if (ctx->pc != 0x1B98F8u) { return; }
    }
    ctx->pc = 0x1B98F8u;
label_1b98f8:
    // 0x1b98f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b98f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b98fc:
    // 0x1b98fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b98fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9900: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9900u;
            // 0x1b9904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9864u: goto label_1b9864;
            case 0x1B9888u: goto label_1b9888;
            case 0x1B98A8u: goto label_1b98a8;
            case 0x1B98ACu: goto label_1b98ac;
            case 0x1B98F0u: goto label_1b98f0;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B98FCu: goto label_1b98fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9908u;
}
