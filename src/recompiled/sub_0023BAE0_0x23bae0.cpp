#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023BAE0
// Address: 0x23bae0 - 0x23c078
void sub_0023BAE0_0x23bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BAE0_0x23bae0");
#endif

    ctx->pc = 0x23bae0u;

    // 0x23bae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bae4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23baec: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x23baf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23baf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23baf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23baf8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bafc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb00: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BB00u;
    SET_GPR_U32(ctx, 31, 0x23BB08u);
    ctx->pc = 0x23BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB00u;
            // 0x23bb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB08u; }
        if (ctx->pc != 0x23BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB08u; }
        if (ctx->pc != 0x23BB08u) { return; }
    }
    ctx->pc = 0x23BB08u;
    // 0x23bb08: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BB08u;
    SET_GPR_U32(ctx, 31, 0x23BB10u);
    ctx->pc = 0x23BB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB08u;
            // 0x23bb0c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB10u; }
        if (ctx->pc != 0x23BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB10u; }
        if (ctx->pc != 0x23BB10u) { return; }
    }
    ctx->pc = 0x23BB10u;
    // 0x23bb10: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bb14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bb18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bb1c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bb1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bb20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BB20u;
    {
        const bool branch_taken_0x23bb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb20) {
            ctx->pc = 0x23BB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB20u;
            // 0x23bb24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BB28u;
            goto label_23bb28;
        }
    }
    ctx->pc = 0x23BB28u;
label_23bb28:
    // 0x23bb28: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bb2c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bb30: 0x2012  mflo        $a0
    ctx->pc = 0x23bb30u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bb34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bb38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bb3c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BB3Cu;
    SET_GPR_U32(ctx, 31, 0x23BB44u);
    ctx->pc = 0x23BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB3Cu;
            // 0x23bb40: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB44u; }
        if (ctx->pc != 0x23BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB44u; }
        if (ctx->pc != 0x23BB44u) { return; }
    }
    ctx->pc = 0x23BB44u;
    // 0x23bb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb48: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BB48u;
    SET_GPR_U32(ctx, 31, 0x23BB50u);
    ctx->pc = 0x23BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB48u;
            // 0x23bb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB50u; }
        if (ctx->pc != 0x23BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB50u; }
        if (ctx->pc != 0x23BB50u) { return; }
    }
    ctx->pc = 0x23BB50u;
    // 0x23bb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb58: 0x3e00008  jr          $ra
    ctx->pc = 0x23BB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB58u;
            // 0x23bb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BB60u;
    // 0x23bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bb64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bb68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bb6c: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x23bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x23bb70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bb78: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb80: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BB80u;
    SET_GPR_U32(ctx, 31, 0x23BB88u);
    ctx->pc = 0x23BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB80u;
            // 0x23bb84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB88u; }
        if (ctx->pc != 0x23BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB88u; }
        if (ctx->pc != 0x23BB88u) { return; }
    }
    ctx->pc = 0x23BB88u;
    // 0x23bb88: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BB88u;
    SET_GPR_U32(ctx, 31, 0x23BB90u);
    ctx->pc = 0x23BB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB88u;
            // 0x23bb8c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB90u; }
        if (ctx->pc != 0x23BB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB90u; }
        if (ctx->pc != 0x23BB90u) { return; }
    }
    ctx->pc = 0x23BB90u;
    // 0x23bb90: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bb94: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bb98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bb9c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bb9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bba0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BBA0u;
    {
        const bool branch_taken_0x23bba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bba0) {
            ctx->pc = 0x23BBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBA0u;
            // 0x23bba4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BBA8u;
            goto label_23bba8;
        }
    }
    ctx->pc = 0x23BBA8u;
label_23bba8:
    // 0x23bba8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bbac: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bbb0: 0x2012  mflo        $a0
    ctx->pc = 0x23bbb0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bbb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bbb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bbbc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BBBCu;
    SET_GPR_U32(ctx, 31, 0x23BBC4u);
    ctx->pc = 0x23BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBBCu;
            // 0x23bbc0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBC4u; }
        if (ctx->pc != 0x23BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBC4u; }
        if (ctx->pc != 0x23BBC4u) { return; }
    }
    ctx->pc = 0x23BBC4u;
    // 0x23bbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbc8: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BBC8u;
    SET_GPR_U32(ctx, 31, 0x23BBD0u);
    ctx->pc = 0x23BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBC8u;
            // 0x23bbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBD0u; }
        if (ctx->pc != 0x23BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBD0u; }
        if (ctx->pc != 0x23BBD0u) { return; }
    }
    ctx->pc = 0x23BBD0u;
    // 0x23bbd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBD8u;
            // 0x23bbdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BBE0u;
    // 0x23bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBE0u;
            // 0x23bbe4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BBE8u;
    // 0x23bbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bbec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bbf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bbf4: 0x2442f210  addiu       $v0, $v0, -0xDF0
    ctx->pc = 0x23bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
    // 0x23bbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bc00: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc08: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BC08u;
    SET_GPR_U32(ctx, 31, 0x23BC10u);
    ctx->pc = 0x23BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC08u;
            // 0x23bc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC10u; }
        if (ctx->pc != 0x23BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC10u; }
        if (ctx->pc != 0x23BC10u) { return; }
    }
    ctx->pc = 0x23BC10u;
    // 0x23bc10: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BC10u;
    SET_GPR_U32(ctx, 31, 0x23BC18u);
    ctx->pc = 0x23BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC10u;
            // 0x23bc14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC18u; }
        if (ctx->pc != 0x23BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC18u; }
        if (ctx->pc != 0x23BC18u) { return; }
    }
    ctx->pc = 0x23BC18u;
    // 0x23bc18: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bc1c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bc20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bc24: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bc24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bc28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BC28u;
    {
        const bool branch_taken_0x23bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc28) {
            ctx->pc = 0x23BC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC28u;
            // 0x23bc2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BC30u;
            goto label_23bc30;
        }
    }
    ctx->pc = 0x23BC30u;
label_23bc30:
    // 0x23bc30: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bc34: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bc38: 0x2012  mflo        $a0
    ctx->pc = 0x23bc38u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bc3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bc40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bc44: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BC44u;
    SET_GPR_U32(ctx, 31, 0x23BC4Cu);
    ctx->pc = 0x23BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC44u;
            // 0x23bc48: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC4Cu; }
        if (ctx->pc != 0x23BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC4Cu; }
        if (ctx->pc != 0x23BC4Cu) { return; }
    }
    ctx->pc = 0x23BC4Cu;
    // 0x23bc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc50: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BC50u;
    SET_GPR_U32(ctx, 31, 0x23BC58u);
    ctx->pc = 0x23BC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC50u;
            // 0x23bc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC58u; }
        if (ctx->pc != 0x23BC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC58u; }
        if (ctx->pc != 0x23BC58u) { return; }
    }
    ctx->pc = 0x23BC58u;
    // 0x23bc58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc60: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC60u;
            // 0x23bc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BC68u;
    // 0x23bc68: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC68u;
            // 0x23bc6c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BC70u;
    // 0x23bc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bc74: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bc78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bc7c: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x23bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x23bc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bc88: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc90: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BC90u;
    SET_GPR_U32(ctx, 31, 0x23BC98u);
    ctx->pc = 0x23BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC90u;
            // 0x23bc94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC98u; }
        if (ctx->pc != 0x23BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC98u; }
        if (ctx->pc != 0x23BC98u) { return; }
    }
    ctx->pc = 0x23BC98u;
    // 0x23bc98: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BC98u;
    SET_GPR_U32(ctx, 31, 0x23BCA0u);
    ctx->pc = 0x23BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC98u;
            // 0x23bc9c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCA0u; }
        if (ctx->pc != 0x23BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCA0u; }
        if (ctx->pc != 0x23BCA0u) { return; }
    }
    ctx->pc = 0x23BCA0u;
    // 0x23bca0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bca4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bcac: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bcacu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bcb0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BCB0u;
    {
        const bool branch_taken_0x23bcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bcb0) {
            ctx->pc = 0x23BCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCB0u;
            // 0x23bcb4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BCB8u;
            goto label_23bcb8;
        }
    }
    ctx->pc = 0x23BCB8u;
label_23bcb8:
    // 0x23bcb8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bcbc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bcc0: 0x2012  mflo        $a0
    ctx->pc = 0x23bcc0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bcc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bcc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bccc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BCCCu;
    SET_GPR_U32(ctx, 31, 0x23BCD4u);
    ctx->pc = 0x23BCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCCCu;
            // 0x23bcd0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCD4u; }
        if (ctx->pc != 0x23BCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCD4u; }
        if (ctx->pc != 0x23BCD4u) { return; }
    }
    ctx->pc = 0x23BCD4u;
    // 0x23bcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcd8: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BCD8u;
    SET_GPR_U32(ctx, 31, 0x23BCE0u);
    ctx->pc = 0x23BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCD8u;
            // 0x23bcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCE0u; }
        if (ctx->pc != 0x23BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCE0u; }
        if (ctx->pc != 0x23BCE0u) { return; }
    }
    ctx->pc = 0x23BCE0u;
    // 0x23bce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCE8u;
            // 0x23bcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BCF0u;
    // 0x23bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bcf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bcf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bcfc: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x23bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x23bd00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bd08: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd10: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BD10u;
    SET_GPR_U32(ctx, 31, 0x23BD18u);
    ctx->pc = 0x23BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD10u;
            // 0x23bd14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD18u; }
        if (ctx->pc != 0x23BD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD18u; }
        if (ctx->pc != 0x23BD18u) { return; }
    }
    ctx->pc = 0x23BD18u;
    // 0x23bd18: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BD18u;
    SET_GPR_U32(ctx, 31, 0x23BD20u);
    ctx->pc = 0x23BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD18u;
            // 0x23bd1c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD20u; }
        if (ctx->pc != 0x23BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD20u; }
        if (ctx->pc != 0x23BD20u) { return; }
    }
    ctx->pc = 0x23BD20u;
    // 0x23bd20: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bd24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bd28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bd2c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bd2cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bd30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BD30u;
    {
        const bool branch_taken_0x23bd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd30) {
            ctx->pc = 0x23BD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD30u;
            // 0x23bd34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BD38u;
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD38u;
label_23bd38:
    // 0x23bd38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bd3c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bd40: 0x2012  mflo        $a0
    ctx->pc = 0x23bd40u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bd44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bd48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bd4c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BD4Cu;
    SET_GPR_U32(ctx, 31, 0x23BD54u);
    ctx->pc = 0x23BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD4Cu;
            // 0x23bd50: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD54u; }
        if (ctx->pc != 0x23BD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD54u; }
        if (ctx->pc != 0x23BD54u) { return; }
    }
    ctx->pc = 0x23BD54u;
    // 0x23bd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd58: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BD58u;
    SET_GPR_U32(ctx, 31, 0x23BD60u);
    ctx->pc = 0x23BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD58u;
            // 0x23bd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD60u; }
        if (ctx->pc != 0x23BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD60u; }
        if (ctx->pc != 0x23BD60u) { return; }
    }
    ctx->pc = 0x23BD60u;
    // 0x23bd60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bd68: 0x3e00008  jr          $ra
    ctx->pc = 0x23BD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD68u;
            // 0x23bd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BD70u;
    // 0x23bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x23BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD70u;
            // 0x23bd74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BD78u;
    // 0x23bd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bd7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bd80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bd84: 0x2442ef70  addiu       $v0, $v0, -0x1090
    ctx->pc = 0x23bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x23bd88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bd90: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23bd94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd98: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BD98u;
    SET_GPR_U32(ctx, 31, 0x23BDA0u);
    ctx->pc = 0x23BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD98u;
            // 0x23bd9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDA0u; }
        if (ctx->pc != 0x23BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDA0u; }
        if (ctx->pc != 0x23BDA0u) { return; }
    }
    ctx->pc = 0x23BDA0u;
    // 0x23bda0: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BDA0u;
    SET_GPR_U32(ctx, 31, 0x23BDA8u);
    ctx->pc = 0x23BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDA0u;
            // 0x23bda4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDA8u; }
        if (ctx->pc != 0x23BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDA8u; }
        if (ctx->pc != 0x23BDA8u) { return; }
    }
    ctx->pc = 0x23BDA8u;
    // 0x23bda8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23bdac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23bdb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bdb4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23bdb4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23bdb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BDB8u;
    {
        const bool branch_taken_0x23bdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdb8) {
            ctx->pc = 0x23BDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDB8u;
            // 0x23bdbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BDC0u;
            goto label_23bdc0;
        }
    }
    ctx->pc = 0x23BDC0u;
label_23bdc0:
    // 0x23bdc0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23bdc4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bdc8: 0x2012  mflo        $a0
    ctx->pc = 0x23bdc8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23bdcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23bdd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bdd4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BDD4u;
    SET_GPR_U32(ctx, 31, 0x23BDDCu);
    ctx->pc = 0x23BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDD4u;
            // 0x23bdd8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDDCu; }
        if (ctx->pc != 0x23BDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDDCu; }
        if (ctx->pc != 0x23BDDCu) { return; }
    }
    ctx->pc = 0x23BDDCu;
    // 0x23bddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bde0: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BDE0u;
    SET_GPR_U32(ctx, 31, 0x23BDE8u);
    ctx->pc = 0x23BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDE0u;
            // 0x23bde4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDE8u; }
        if (ctx->pc != 0x23BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDE8u; }
        if (ctx->pc != 0x23BDE8u) { return; }
    }
    ctx->pc = 0x23BDE8u;
    // 0x23bde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDF0u;
            // 0x23bdf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BDF8u;
    // 0x23bdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDF8u;
            // 0x23bdfc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BE00u;
    // 0x23be00: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE00u;
            // 0x23be04: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BE08u;
    // 0x23be08: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE08u;
            // 0x23be0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BE10u;
    // 0x23be10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23be14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23be18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23be1c: 0x2442ee20  addiu       $v0, $v0, -0x11E0
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962720));
    // 0x23be20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23be28: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23be28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23be2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be30: 0xc04198a  jal         func_106628
    ctx->pc = 0x23BE30u;
    SET_GPR_U32(ctx, 31, 0x23BE38u);
    ctx->pc = 0x23BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE30u;
            // 0x23be34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE38u; }
        if (ctx->pc != 0x23BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE38u; }
        if (ctx->pc != 0x23BE38u) { return; }
    }
    ctx->pc = 0x23BE38u;
    // 0x23be38: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BE38u;
    SET_GPR_U32(ctx, 31, 0x23BE40u);
    ctx->pc = 0x23BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE38u;
            // 0x23be3c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE40u; }
        if (ctx->pc != 0x23BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE40u; }
        if (ctx->pc != 0x23BE40u) { return; }
    }
    ctx->pc = 0x23BE40u;
    // 0x23be40: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23be44: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23be44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23be48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23be4c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23be4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23be50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BE50u;
    {
        const bool branch_taken_0x23be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be50) {
            ctx->pc = 0x23BE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE50u;
            // 0x23be54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BE58u;
            goto label_23be58;
        }
    }
    ctx->pc = 0x23BE58u;
label_23be58:
    // 0x23be58: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23be5c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23be60: 0x2012  mflo        $a0
    ctx->pc = 0x23be60u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23be64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23be68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23be6c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BE6Cu;
    SET_GPR_U32(ctx, 31, 0x23BE74u);
    ctx->pc = 0x23BE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE6Cu;
            // 0x23be70: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE74u; }
        if (ctx->pc != 0x23BE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE74u; }
        if (ctx->pc != 0x23BE74u) { return; }
    }
    ctx->pc = 0x23BE74u;
    // 0x23be74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be78: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23BE78u;
    SET_GPR_U32(ctx, 31, 0x23BE80u);
    ctx->pc = 0x23BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE78u;
            // 0x23be7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE80u; }
        if (ctx->pc != 0x23BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE80u; }
        if (ctx->pc != 0x23BE80u) { return; }
    }
    ctx->pc = 0x23BE80u;
    // 0x23be80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23be84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be88: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE88u;
            // 0x23be8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BE90u;
    // 0x23be90: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE90u;
            // 0x23be94: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BE98u;
    // 0x23be98: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE98u;
            // 0x23be9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BEA0u;
    // 0x23bea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23bea4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bea8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x23beac: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x23beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x23beb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x23beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x23beb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23beb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23beb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x23bebc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x23bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x23bec0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x23bec4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x23bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x23bec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23becc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x23beccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x23bed0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x23bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x23bed4: 0xc04060a  jal         func_101828
    ctx->pc = 0x23BED4u;
    SET_GPR_U32(ctx, 31, 0x23BEDCu);
    ctx->pc = 0x23BED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BED4u;
            // 0x23bed8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEDCu; }
        if (ctx->pc != 0x23BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEDCu; }
        if (ctx->pc != 0x23BEDCu) { return; }
    }
    ctx->pc = 0x23BEDCu;
    // 0x23bedc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23bedcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bee0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x23bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x23bee4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23bee8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23beec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23beecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bef0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23bef0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23bef4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BEF4u;
    {
        const bool branch_taken_0x23bef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bef4) {
            ctx->pc = 0x23BEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BEF4u;
            // 0x23bef8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BEFCu;
            goto label_23befc;
        }
    }
    ctx->pc = 0x23BEFCu;
label_23befc:
    // 0x23befc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x23befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x23bf00: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x23bf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x23bf04: 0x1012  mflo        $v0
    ctx->pc = 0x23bf04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23bf08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bf0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23bf10: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BF10u;
    SET_GPR_U32(ctx, 31, 0x23BF18u);
    ctx->pc = 0x23BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF10u;
            // 0x23bf14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF18u; }
        if (ctx->pc != 0x23BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF18u; }
        if (ctx->pc != 0x23BF18u) { return; }
    }
    ctx->pc = 0x23BF18u;
    // 0x23bf18: 0x8e130068  lw          $s3, 0x68($s0)
    ctx->pc = 0x23bf18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x23bf1c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23bf20: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF20u;
            // 0x23bf24: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF80u;
            goto label_23bf80;
        }
    }
    ctx->pc = 0x23BF28u;
    // 0x23bf28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23bf28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf2c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23bf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23bf34: 0x0  nop
    ctx->pc = 0x23bf34u;
    // NOP
label_23bf38:
    // 0x23bf38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23bf3c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23bf40: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23bf40u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23bf44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BF44u;
    {
        const bool branch_taken_0x23bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf44) {
            ctx->pc = 0x23BF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF44u;
            // 0x23bf48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BF4Cu;
            goto label_23bf4c;
        }
    }
    ctx->pc = 0x23BF4Cu;
label_23bf4c:
    // 0x23bf4c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x23bf50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x23bf54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23bf58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23bf5c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x23bf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x23bf60: 0x1812  mflo        $v1
    ctx->pc = 0x23bf60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23bf64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23bf68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bf6c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BF6Cu;
    SET_GPR_U32(ctx, 31, 0x23BF74u);
    ctx->pc = 0x23BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF6Cu;
            // 0x23bf70: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF74u; }
        if (ctx->pc != 0x23BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BF74u; }
        if (ctx->pc != 0x23BF74u) { return; }
    }
    ctx->pc = 0x23BF74u;
    // 0x23bf74: 0x2b3102b  sltu        $v0, $s5, $s3
    ctx->pc = 0x23bf74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x23bf78: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23BF78u;
    {
        const bool branch_taken_0x23bf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bf78) {
            ctx->pc = 0x23BF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF78u;
            // 0x23bf7c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BF38u;
            runtime->cooperativeGuestYield();
            goto label_23bf38;
        }
    }
    ctx->pc = 0x23BF80u;
label_23bf80:
    // 0x23bf80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x23bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23bf84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23bf88: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23bf88u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23bf8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23BF8Cu;
    {
        const bool branch_taken_0x23bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf8c) {
            ctx->pc = 0x23BF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF8Cu;
            // 0x23bf90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BF94u;
            goto label_23bf94;
        }
    }
    ctx->pc = 0x23BF94u;
label_23bf94:
    // 0x23bf94: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x23bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x23bf98: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x23bf98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x23bf9c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x23bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x23bfa0: 0x1812  mflo        $v1
    ctx->pc = 0x23bfa0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23bfa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23bfa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23bfac: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BFACu;
    SET_GPR_U32(ctx, 31, 0x23BFB4u);
    ctx->pc = 0x23BFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFACu;
            // 0x23bfb0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFB4u; }
        if (ctx->pc != 0x23BFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFB4u; }
        if (ctx->pc != 0x23BFB4u) { return; }
    }
    ctx->pc = 0x23BFB4u;
    // 0x23bfb4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bfb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bfbc: 0x2442fa28  addiu       $v0, $v0, -0x5D8
    ctx->pc = 0x23bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965800));
    // 0x23bfc0: 0xc045d1c  jal         func_117470
    ctx->pc = 0x23BFC0u;
    SET_GPR_U32(ctx, 31, 0x23BFC8u);
    ctx->pc = 0x23BFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFC0u;
            // 0x23bfc4: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117470u;
    if (runtime->hasFunction(0x117470u)) {
        auto targetFn = runtime->lookupFunction(0x117470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFC8u; }
        if (ctx->pc != 0x23BFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117470_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFC8u; }
        if (ctx->pc != 0x23BFC8u) { return; }
    }
    ctx->pc = 0x23BFC8u;
    // 0x23bfc8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x23bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x23bfcc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x23bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x23bfd0: 0x1051000c  beq         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x23BFD0u;
    {
        const bool branch_taken_0x23bfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x23BFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFD0u;
            // 0x23bfd4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfd0) {
            ctx->pc = 0x23C004u;
            goto label_23c004;
        }
    }
    ctx->pc = 0x23BFD8u;
    // 0x23bfd8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23bfdc: 0x0  nop
    ctx->pc = 0x23bfdcu;
    // NOP
label_23bfe0:
    // 0x23bfe0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bfe4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23bfe8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23bfec: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23BFECu;
    SET_GPR_U32(ctx, 31, 0x23BFF4u);
    ctx->pc = 0x23BFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFECu;
            // 0x23bff0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFF4u; }
        if (ctx->pc != 0x23BFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFF4u; }
        if (ctx->pc != 0x23BFF4u) { return; }
    }
    ctx->pc = 0x23BFF4u;
    // 0x23bff4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23bff8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bffc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23BFFCu;
    {
        const bool branch_taken_0x23bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFFCu;
            // 0x23c000: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bffc) {
            ctx->pc = 0x23BFE0u;
            runtime->cooperativeGuestYield();
            goto label_23bfe0;
        }
    }
    ctx->pc = 0x23C004u;
label_23c004:
    // 0x23c004: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x23c004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x23c008: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x23c008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
    // 0x23c00c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23c00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23c010: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23c010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c014: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x23c014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c018: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23c018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c01c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23c01cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c020: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x23c020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c028: 0x3e00008  jr          $ra
    ctx->pc = 0x23C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C028u;
            // 0x23c02c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C030u;
    // 0x23c030: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x23c034: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23C034u;
    {
        const bool branch_taken_0x23c034 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x23C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C034u;
            // 0x23c038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c034) {
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C03Cu;
    // 0x23c03c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c040: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x23c040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c044: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x23C044u;
    {
        const bool branch_taken_0x23c044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c044) {
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C04Cu;
    // 0x23c04c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23c050: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C050u;
    {
        const bool branch_taken_0x23c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c050) {
            ctx->pc = 0x23C054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C050u;
            // 0x23c054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C058u;
    // 0x23c058: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x23c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c05c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x23c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c060: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23c060u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c064: 0x0  nop
    ctx->pc = 0x23c064u;
    // NOP
    // 0x23c068: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23C068u;
    {
        const bool branch_taken_0x23c068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c068) {
            ctx->pc = 0x23C06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C068u;
            // 0x23c06c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C070u;
label_23c070:
    // 0x23c070: 0x3e00008  jr          $ra
    ctx->pc = 0x23C070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C070u;
            // 0x23c074: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BB28u: goto label_23bb28;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BE58u: goto label_23be58;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF38u: goto label_23bf38;
            case 0x23BF4Cu: goto label_23bf4c;
            case 0x23BF80u: goto label_23bf80;
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFE0u: goto label_23bfe0;
            case 0x23C004u: goto label_23c004;
            case 0x23C070u: goto label_23c070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C078u;
}
