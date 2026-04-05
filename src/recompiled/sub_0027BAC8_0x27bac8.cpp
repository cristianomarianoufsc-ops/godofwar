#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027BAC8
// Address: 0x27bac8 - 0x27bb98
void sub_0027BAC8_0x27bac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BAC8_0x27bac8");
#endif

    ctx->pc = 0x27bac8u;

    // 0x27bac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27bac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27bacc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27bad0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27bad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27bad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27badc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27badcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bae0: 0xc09eee6  jal         func_27BB98
    ctx->pc = 0x27BAE0u;
    SET_GPR_U32(ctx, 31, 0x27BAE8u);
    ctx->pc = 0x27BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAE0u;
            // 0x27bae4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BB98u;
    if (runtime->hasFunction(0x27BB98u)) {
        auto targetFn = runtime->lookupFunction(0x27BB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAE8u; }
        if (ctx->pc != 0x27BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BB98_0x27bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BAE8u; }
        if (ctx->pc != 0x27BAE8u) { return; }
    }
    ctx->pc = 0x27BAE8u;
    // 0x27bae8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27baec: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27baf0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27baf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27baf4: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x27baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
    // 0x27baf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bafc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27bb00: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BB00u;
    {
        const bool branch_taken_0x27bb00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bb00) {
            ctx->pc = 0x27BB18u;
            goto label_27bb18;
        }
    }
    ctx->pc = 0x27BB08u;
    // 0x27bb08: 0xc09ef54  jal         func_27BD50
    ctx->pc = 0x27BB08u;
    SET_GPR_U32(ctx, 31, 0x27BB10u);
    ctx->pc = 0x27BB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB08u;
            // 0x27bb0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BD50u;
    if (runtime->hasFunction(0x27BD50u)) {
        auto targetFn = runtime->lookupFunction(0x27BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB10u; }
        if (ctx->pc != 0x27BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BD50_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB10u; }
        if (ctx->pc != 0x27BB10u) { return; }
    }
    ctx->pc = 0x27BB10u;
    // 0x27bb10: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27BB10u;
    {
        const bool branch_taken_0x27bb10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB10u;
            // 0x27bb14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb10) {
            ctx->pc = 0x27BB7Cu;
            goto label_27bb7c;
        }
    }
    ctx->pc = 0x27BB18u;
label_27bb18:
    // 0x27bb18: 0xc09ef84  jal         func_27BE10
    ctx->pc = 0x27BB18u;
    SET_GPR_U32(ctx, 31, 0x27BB20u);
    ctx->pc = 0x27BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB18u;
            // 0x27bb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BE10u;
    if (runtime->hasFunction(0x27BE10u)) {
        auto targetFn = runtime->lookupFunction(0x27BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB20u; }
        if (ctx->pc != 0x27BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27be10_0x27be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB20u; }
        if (ctx->pc != 0x27BB20u) { return; }
    }
    ctx->pc = 0x27BB20u;
    // 0x27bb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb24: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x27bb24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x27bb28: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BB28u;
    {
        const bool branch_taken_0x27bb28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB28u;
            // 0x27bb2c: 0x2602001c  addiu       $v0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb28) {
            ctx->pc = 0x27BB6Cu;
            goto label_27bb6c;
        }
    }
    ctx->pc = 0x27BB30u;
    // 0x27bb30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27BB30u;
    {
        const bool branch_taken_0x27bb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB30u;
            // 0x27bb34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb30) {
            ctx->pc = 0x27BB6Cu;
            goto label_27bb6c;
        }
    }
    ctx->pc = 0x27BB38u;
    // 0x27bb38: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x27bb38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27bb3c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x27bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x27bb40: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x27BB40u;
    SET_GPR_U32(ctx, 31, 0x27BB48u);
    ctx->pc = 0x27BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB40u;
            // 0x27bb44: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB48u; }
        if (ctx->pc != 0x27BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB48u; }
        if (ctx->pc != 0x27BB48u) { return; }
    }
    ctx->pc = 0x27BB48u;
    // 0x27bb48: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27bb4c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x27bb4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27bb50: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27bb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27bb54: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x27bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x27bb58: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x27bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x27bb5c: 0x24a5d01c  addiu       $a1, $a1, -0x2FE4
    ctx->pc = 0x27bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955036));
    // 0x27bb60: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x27bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x27bb64: 0xc09efb6  jal         func_27BED8
    ctx->pc = 0x27BB64u;
    SET_GPR_U32(ctx, 31, 0x27BB6Cu);
    ctx->pc = 0x27BB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB64u;
            // 0x27bb68: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BED8u;
    if (runtime->hasFunction(0x27BED8u)) {
        auto targetFn = runtime->lookupFunction(0x27BED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB6Cu; }
        if (ctx->pc != 0x27BB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bed8_0x27bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB6Cu; }
        if (ctx->pc != 0x27BB6Cu) { return; }
    }
    ctx->pc = 0x27BB6Cu;
label_27bb6c:
    // 0x27bb6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27bb70: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27BB70u;
    {
        const bool branch_taken_0x27bb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bb70) {
            ctx->pc = 0x27BB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB70u;
            // 0x27bb74: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BB7Cu;
            goto label_27bb7c;
        }
    }
    ctx->pc = 0x27BB78u;
    // 0x27bb78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27bb7c:
    // 0x27bb7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27bb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bb80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27bb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bb84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB8Cu;
            // 0x27bb90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BB18u: goto label_27bb18;
            case 0x27BB6Cu: goto label_27bb6c;
            case 0x27BB7Cu: goto label_27bb7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BB94u;
    // 0x27bb94: 0x0  nop
    ctx->pc = 0x27bb94u;
    // NOP
}
