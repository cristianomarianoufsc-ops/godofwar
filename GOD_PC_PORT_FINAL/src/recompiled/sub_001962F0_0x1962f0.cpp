#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001962F0
// Address: 0x1962f0 - 0x196398
void sub_001962F0_0x1962f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001962F0_0x1962f0");
#endif

    ctx->pc = 0x1962f0u;

    // 0x1962f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1962f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1962f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1962f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1962f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1962fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1962fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196300: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x196304: 0xc089960  jal         func_226580
    ctx->pc = 0x196304u;
    SET_GPR_U32(ctx, 31, 0x19630Cu);
    ctx->pc = 0x196308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196304u;
            // 0x196308: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19630Cu; }
        if (ctx->pc != 0x19630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19630Cu; }
        if (ctx->pc != 0x19630Cu) { return; }
    }
    ctx->pc = 0x19630Cu;
    // 0x19630c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x196310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196314: 0x8c64cd58  lw          $a0, -0x32A8($v1)
    ctx->pc = 0x196314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x196318: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x196318u;
    SET_GPR_U32(ctx, 31, 0x196320u);
    ctx->pc = 0x19631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196318u;
            // 0x19631c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196320u; }
        if (ctx->pc != 0x196320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196320u; }
        if (ctx->pc != 0x196320u) { return; }
    }
    ctx->pc = 0x196320u;
    // 0x196320: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x196324: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x196324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19632c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x196330: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x196330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x196334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196338: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x196338u;
    SET_GPR_U32(ctx, 31, 0x196340u);
    ctx->pc = 0x19633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196338u;
            // 0x19633c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196340u; }
        if (ctx->pc != 0x196340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196340u; }
        if (ctx->pc != 0x196340u) { return; }
    }
    ctx->pc = 0x196340u;
    // 0x196340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196344: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196348: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19634c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x196350: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x196350u;
    {
        const bool branch_taken_0x196350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196350u;
            // 0x196354: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196350) {
            ctx->pc = 0x196378u;
            goto label_196378;
        }
    }
    ctx->pc = 0x196358u;
    // 0x196358: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19635c: 0x94465048  lhu         $a2, 0x5048($v0)
    ctx->pc = 0x19635cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20552)));
    // 0x196360: 0xc04c518  jal         func_131460
    ctx->pc = 0x196360u;
    SET_GPR_U32(ctx, 31, 0x196368u);
    ctx->pc = 0x196364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196360u;
            // 0x196364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196368u; }
        if (ctx->pc != 0x196368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196368u; }
        if (ctx->pc != 0x196368u) { return; }
    }
    ctx->pc = 0x196368u;
    // 0x196368: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x196368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19636c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x19636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x196370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196370u;
    {
        const bool branch_taken_0x196370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196370u;
            // 0x196374: 0xac43e160  sw          $v1, -0x1EA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196370) {
            ctx->pc = 0x196380u;
            goto label_196380;
        }
    }
    ctx->pc = 0x196378u;
label_196378:
    // 0x196378: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x19637c: 0xac40e160  sw          $zero, -0x1EA0($v0)
    ctx->pc = 0x19637cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959456), GPR_U32(ctx, 0));
label_196380:
    // 0x196380: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x196380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19638c: 0x3e00008  jr          $ra
    ctx->pc = 0x19638Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19638Cu;
            // 0x196390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196378u: goto label_196378;
            case 0x196380u: goto label_196380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196394u;
    // 0x196394: 0x0  nop
    ctx->pc = 0x196394u;
    // NOP
}
