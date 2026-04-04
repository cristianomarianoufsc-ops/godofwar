#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B9F0
// Address: 0x27b9f0 - 0x27bac8
void sub_0027B9F0_0x27b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B9F0_0x27b9f0");
#endif

    ctx->pc = 0x27b9f0u;

    // 0x27b9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27b9f4: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x27b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27b9f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27b9fc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27ba00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ba08: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x27ba08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27ba0c: 0x2466d008  addiu       $a2, $v1, -0x2FF8
    ctx->pc = 0x27ba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955016));
    // 0x27ba10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ba14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27ba14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ba1c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x27ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27ba20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ba24: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27BA24u;
    {
        const bool branch_taken_0x27ba24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA24u;
            // 0x27ba28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba24) {
            ctx->pc = 0x27BAACu;
            goto label_27baac;
        }
    }
    ctx->pc = 0x27BA2Cu;
    // 0x27ba2c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x27ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x27ba30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27ba34: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BA34u;
    {
        const bool branch_taken_0x27ba34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba34) {
            ctx->pc = 0x27BA4Cu;
            goto label_27ba4c;
        }
    }
    ctx->pc = 0x27BA3Cu;
    // 0x27ba3c: 0xc09ef54  jal         func_27BD50
    ctx->pc = 0x27BA3Cu;
    SET_GPR_U32(ctx, 31, 0x27BA44u);
    ctx->pc = 0x27BA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA3Cu;
            // 0x27ba40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BD50u;
    if (runtime->hasFunction(0x27BD50u)) {
        auto targetFn = runtime->lookupFunction(0x27BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA44u; }
        if (ctx->pc != 0x27BA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027BD50_0x27bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA44u; }
        if (ctx->pc != 0x27BA44u) { return; }
    }
    ctx->pc = 0x27BA44u;
    // 0x27ba44: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27BA44u;
    {
        const bool branch_taken_0x27ba44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA44u;
            // 0x27ba48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba44) {
            ctx->pc = 0x27BAACu;
            goto label_27baac;
        }
    }
    ctx->pc = 0x27BA4Cu;
label_27ba4c:
    // 0x27ba4c: 0xc09ef6a  jal         func_27BDA8
    ctx->pc = 0x27BA4Cu;
    SET_GPR_U32(ctx, 31, 0x27BA54u);
    ctx->pc = 0x27BA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA4Cu;
            // 0x27ba50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BDA8u;
    if (runtime->hasFunction(0x27BDA8u)) {
        auto targetFn = runtime->lookupFunction(0x27BDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA54u; }
        if (ctx->pc != 0x27BA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bda8_0x27be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA54u; }
        if (ctx->pc != 0x27BA54u) { return; }
    }
    ctx->pc = 0x27BA54u;
    // 0x27ba54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ba54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba58: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x27ba58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27ba5c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BA5Cu;
    {
        const bool branch_taken_0x27ba5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba5c) {
            ctx->pc = 0x27BA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA5Cu;
            // 0x27ba60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BAA0u;
            goto label_27baa0;
        }
    }
    ctx->pc = 0x27BA64u;
    // 0x27ba64: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x27ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x27ba68: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x27BA68u;
    {
        const bool branch_taken_0x27ba68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba68) {
            ctx->pc = 0x27BA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA68u;
            // 0x27ba6c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BAA0u;
            goto label_27baa0;
        }
    }
    ctx->pc = 0x27BA70u;
    // 0x27ba70: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x27BA70u;
    SET_GPR_U32(ctx, 31, 0x27BA78u);
    ctx->pc = 0x27BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA70u;
            // 0x27ba74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA78u; }
        if (ctx->pc != 0x27BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA78u; }
        if (ctx->pc != 0x27BA78u) { return; }
    }
    ctx->pc = 0x27BA78u;
    // 0x27ba78: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27ba7c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x27ba7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27ba80: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27ba80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27ba84: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x27ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x27ba88: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x27ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x27ba8c: 0x24a5d01c  addiu       $a1, $a1, -0x2FE4
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955036));
    // 0x27ba90: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x27ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x27ba94: 0xc09efb6  jal         func_27BED8
    ctx->pc = 0x27BA94u;
    SET_GPR_U32(ctx, 31, 0x27BA9Cu);
    ctx->pc = 0x27BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA94u;
            // 0x27ba98: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27BED8u;
    if (runtime->hasFunction(0x27BED8u)) {
        auto targetFn = runtime->lookupFunction(0x27BED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA9Cu; }
        if (ctx->pc != 0x27BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27bed8_0x27bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA9Cu; }
        if (ctx->pc != 0x27BA9Cu) { return; }
    }
    ctx->pc = 0x27BA9Cu;
    // 0x27ba9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27baa0:
    // 0x27baa0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27BAA0u;
    {
        const bool branch_taken_0x27baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27baa0) {
            ctx->pc = 0x27BAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAA0u;
            // 0x27baa4: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BAACu;
            goto label_27baac;
        }
    }
    ctx->pc = 0x27BAA8u;
    // 0x27baa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27baac:
    // 0x27baac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27bab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27babc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BABCu;
            // 0x27bac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BA4Cu: goto label_27ba4c;
            case 0x27BAA0u: goto label_27baa0;
            case 0x27BAACu: goto label_27baac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BAC4u;
    // 0x27bac4: 0x0  nop
    ctx->pc = 0x27bac4u;
    // NOP
}
