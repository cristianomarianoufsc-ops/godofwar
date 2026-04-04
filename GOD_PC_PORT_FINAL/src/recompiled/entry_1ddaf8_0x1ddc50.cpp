#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ddaf8
// Address: 0x1ddaf8 - 0x1ddc50
void entry_1ddaf8_0x1ddc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ddaf8_0x1ddc50");
#endif

    ctx->pc = 0x1ddaf8u;

    // 0x1ddaf8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ddaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ddafc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ddafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ddb00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddb04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ddb04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ddb08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddb0c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1ddb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddb10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ddb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ddb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddb18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1DDB18u;
    {
        const bool branch_taken_0x1ddb18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB18u;
            // 0x1ddb1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb18) {
            ctx->pc = 0x1DDB88u;
            goto label_1ddb88;
        }
    }
    ctx->pc = 0x1DDB20u;
    // 0x1ddb20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddb24: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ddb28: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDB28u;
    SET_GPR_U32(ctx, 31, 0x1DDB30u);
    ctx->pc = 0x1DDB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB28u;
            // 0x1ddb2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB30u; }
        if (ctx->pc != 0x1DDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB30u; }
        if (ctx->pc != 0x1DDB30u) { return; }
    }
    ctx->pc = 0x1DDB30u;
    // 0x1ddb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddb38: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ddb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ddb3c: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB44u);
    ctx->pc = 0x1DDB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB3Cu;
            // 0x1ddb40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB44u; }
        if (ctx->pc != 0x1DDB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB44u; }
        if (ctx->pc != 0x1DDB44u) { return; }
    }
    ctx->pc = 0x1DDB44u;
    // 0x1ddb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddb4c: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1ddb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ddb50: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDB50u;
    SET_GPR_U32(ctx, 31, 0x1DDB58u);
    ctx->pc = 0x1DDB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB50u;
            // 0x1ddb54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB58u; }
        if (ctx->pc != 0x1DDB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB58u; }
        if (ctx->pc != 0x1DDB58u) { return; }
    }
    ctx->pc = 0x1DDB58u;
    // 0x1ddb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddb60: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ddb64: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDB64u;
    SET_GPR_U32(ctx, 31, 0x1DDB6Cu);
    ctx->pc = 0x1DDB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB64u;
            // 0x1ddb68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB6Cu; }
        if (ctx->pc != 0x1DDB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB6Cu; }
        if (ctx->pc != 0x1DDB6Cu) { return; }
    }
    ctx->pc = 0x1DDB6Cu;
    // 0x1ddb6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddb74: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1ddb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ddb78: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDB78u;
    SET_GPR_U32(ctx, 31, 0x1DDB80u);
    ctx->pc = 0x1DDB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB78u;
            // 0x1ddb7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB80u; }
        if (ctx->pc != 0x1DDB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB80u; }
        if (ctx->pc != 0x1DDB80u) { return; }
    }
    ctx->pc = 0x1DDB80u;
    // 0x1ddb80: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1DDB80u;
    {
        const bool branch_taken_0x1ddb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB80u;
            // 0x1ddb84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb80) {
            ctx->pc = 0x1DDC3Cu;
            goto label_1ddc3c;
        }
    }
    ctx->pc = 0x1DDB88u;
label_1ddb88:
    // 0x1ddb88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ddb8c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ddb90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddb94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ddb98: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ddb9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDB9Cu;
    {
        const bool branch_taken_0x1ddb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB9Cu;
            // 0x1ddba0: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb9c) {
            ctx->pc = 0x1DDBB0u;
            goto label_1ddbb0;
        }
    }
    ctx->pc = 0x1DDBA4u;
    // 0x1ddba4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ddba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDBA8u;
    {
        const bool branch_taken_0x1ddba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBA8u;
            // 0x1ddbac: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddba8) {
            ctx->pc = 0x1DDBB4u;
            goto label_1ddbb4;
        }
    }
    ctx->pc = 0x1DDBB0u;
label_1ddbb0:
    // 0x1ddbb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbb4:
    // 0x1ddbb4: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBB4u;
            // 0x1ddbb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC3Cu;
            goto label_1ddc3c;
        }
    }
    ctx->pc = 0x1DDBBCu;
    // 0x1ddbbc: 0xc054104  jal         func_150410
    ctx->pc = 0x1DDBBCu;
    SET_GPR_U32(ctx, 31, 0x1DDBC4u);
    ctx->pc = 0x1DDBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBBCu;
            // 0x1ddbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBC4u; }
        if (ctx->pc != 0x1DDBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBC4u; }
        if (ctx->pc != 0x1DDBC4u) { return; }
    }
    ctx->pc = 0x1DDBC4u;
    // 0x1ddbc4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1ddbc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ddbc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ddbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ddbcc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DDBCCu;
    {
        const bool branch_taken_0x1ddbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBCCu;
            // 0x1ddbd0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbcc) {
            ctx->pc = 0x1DDC3Cu;
            goto label_1ddc3c;
        }
    }
    ctx->pc = 0x1DDBD4u;
    // 0x1ddbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddbdc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ddbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ddbe0: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDBE0u;
    SET_GPR_U32(ctx, 31, 0x1DDBE8u);
    ctx->pc = 0x1DDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBE0u;
            // 0x1ddbe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBE8u; }
        if (ctx->pc != 0x1DDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBE8u; }
        if (ctx->pc != 0x1DDBE8u) { return; }
    }
    ctx->pc = 0x1DDBE8u;
    // 0x1ddbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddbf0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ddbf4: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDBF4u;
    SET_GPR_U32(ctx, 31, 0x1DDBFCu);
    ctx->pc = 0x1DDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBF4u;
            // 0x1ddbf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBFCu; }
        if (ctx->pc != 0x1DDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBFCu; }
        if (ctx->pc != 0x1DDBFCu) { return; }
    }
    ctx->pc = 0x1DDBFCu;
    // 0x1ddbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc04: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ddc08: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDC08u;
    SET_GPR_U32(ctx, 31, 0x1DDC10u);
    ctx->pc = 0x1DDC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC08u;
            // 0x1ddc0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC10u; }
        if (ctx->pc != 0x1DDC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC10u; }
        if (ctx->pc != 0x1DDC10u) { return; }
    }
    ctx->pc = 0x1DDC10u;
    // 0x1ddc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc18: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1ddc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ddc1c: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC24u);
    ctx->pc = 0x1DDC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC1Cu;
            // 0x1ddc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC24u; }
        if (ctx->pc != 0x1DDC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC24u; }
        if (ctx->pc != 0x1DDC24u) { return; }
    }
    ctx->pc = 0x1DDC24u;
    // 0x1ddc24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddc2c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ddc30: 0xc06c320  jal         func_1B0C80
    ctx->pc = 0x1DDC30u;
    SET_GPR_U32(ctx, 31, 0x1DDC38u);
    ctx->pc = 0x1DDC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC30u;
            // 0x1ddc34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C80u;
    if (runtime->hasFunction(0x1B0C80u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC38u; }
        if (ctx->pc != 0x1DDC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0C80_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC38u; }
        if (ctx->pc != 0x1DDC38u) { return; }
    }
    ctx->pc = 0x1DDC38u;
    // 0x1ddc38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ddc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ddc3c:
    // 0x1ddc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC44u;
            // 0x1ddc48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDB88u: goto label_1ddb88;
            case 0x1DDBB0u: goto label_1ddbb0;
            case 0x1DDBB4u: goto label_1ddbb4;
            case 0x1DDC3Cu: goto label_1ddc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDC4Cu;
    // 0x1ddc4c: 0x0  nop
    ctx->pc = 0x1ddc4cu;
    // NOP
}
