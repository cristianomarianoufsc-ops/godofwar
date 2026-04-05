#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CEF8
// Address: 0x26cef8 - 0x26d170
void sub_0026CEF8_0x26cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CEF8_0x26cef8");
#endif

    ctx->pc = 0x26cef8u;

    // 0x26cef8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cefc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26cefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26cf00: 0x8c44a328  lw          $a0, -0x5CD8($v0)
    ctx->pc = 0x26cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943528)));
    // 0x26cf04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26cf08: 0xc09b934  jal         func_26E4D0
    ctx->pc = 0x26CF08u;
    SET_GPR_U32(ctx, 31, 0x26CF10u);
    ctx->pc = 0x26E4D0u;
    if (runtime->hasFunction(0x26E4D0u)) {
        auto targetFn = runtime->lookupFunction(0x26E4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF10u; }
        if (ctx->pc != 0x26CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E4D0_0x26e4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF10u; }
        if (ctx->pc != 0x26CF10u) { return; }
    }
    ctx->pc = 0x26CF10u;
    // 0x26cf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x26CF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF14u;
            // 0x26cf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CFE0u: goto label_26cfe0;
            case 0x26D028u: goto label_26d028;
            case 0x26D02Cu: goto label_26d02c;
            case 0x26D108u: goto label_26d108;
            case 0x26D150u: goto label_26d150;
            case 0x26D154u: goto label_26d154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CF1Cu;
    // 0x26cf1c: 0x0  nop
    ctx->pc = 0x26cf1cu;
    // NOP
    // 0x26cf20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26cf24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26cf28: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x26cf28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
    // 0x26cf2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26cf30: 0x8e62a464  lw          $v0, -0x5B9C($s3)
    ctx->pc = 0x26cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943844)));
    // 0x26cf34: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26cf38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26cf38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26cf40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cf44: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26cf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26cf4c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x26cf4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26cf50: 0xae62a464  sw          $v0, -0x5B9C($s3)
    ctx->pc = 0x26cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943844), GPR_U32(ctx, 2));
    // 0x26cf54: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x26CF54u;
    {
        const bool branch_taken_0x26cf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF54u;
            // 0x26cf58: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf54) {
            ctx->pc = 0x26D028u;
            goto label_26d028;
        }
    }
    ctx->pc = 0x26CF5Cu;
    // 0x26cf5c: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x26cf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x26cf60: 0x8e42a440  lw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26cf64: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x26CF64u;
    {
        const bool branch_taken_0x26cf64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF64u;
            // 0x26cf68: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf64) {
            ctx->pc = 0x26D02Cu;
            goto label_26d02c;
        }
    }
    ctx->pc = 0x26CF6Cu;
    // 0x26cf6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf70: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CF70u;
    SET_GPR_U32(ctx, 31, 0x26CF78u);
    ctx->pc = 0x26CF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF70u;
            // 0x26cf74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF78u; }
        if (ctx->pc != 0x26CF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF78u; }
        if (ctx->pc != 0x26CF78u) { return; }
    }
    ctx->pc = 0x26CF78u;
    // 0x26cf78: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26cf78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x26cf7c: 0x8e04a304  lw          $a0, -0x5CFC($s0)
    ctx->pc = 0x26cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26cf80: 0x3c110031  lui         $s1, 0x31
    ctx->pc = 0x26cf80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
    // 0x26cf84: 0xc09b9e6  jal         func_26E798
    ctx->pc = 0x26CF84u;
    SET_GPR_U32(ctx, 31, 0x26CF8Cu);
    ctx->pc = 0x26CF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF84u;
            // 0x26cf88: 0x2634a448  addiu       $s4, $s1, -0x5BB8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E798u;
    if (runtime->hasFunction(0x26E798u)) {
        auto targetFn = runtime->lookupFunction(0x26E798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF8Cu; }
        if (ctx->pc != 0x26CF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E798_0x26e798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF8Cu; }
        if (ctx->pc != 0x26CF8Cu) { return; }
    }
    ctx->pc = 0x26CF8Cu;
    // 0x26cf8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf90: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CF90u;
    SET_GPR_U32(ctx, 31, 0x26CF98u);
    ctx->pc = 0x26CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF90u;
            // 0x26cf94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF98u; }
        if (ctx->pc != 0x26CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF98u; }
        if (ctx->pc != 0x26CF98u) { return; }
    }
    ctx->pc = 0x26CF98u;
    // 0x26cf98: 0x8e02a304  lw          $v0, -0x5CFC($s0)
    ctx->pc = 0x26cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26cf9c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x26cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x26cfa0: 0x34630090  ori         $v1, $v1, 0x90
    ctx->pc = 0x26cfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)144);
    // 0x26cfa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfa8: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x26cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x26cfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfb0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x26cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x26cfb4: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CFB4u;
    SET_GPR_U32(ctx, 31, 0x26CFBCu);
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFBCu; }
        if (ctx->pc != 0x26CFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFBCu; }
        if (ctx->pc != 0x26CFBCu) { return; }
    }
    ctx->pc = 0x26CFBCu;
    // 0x26cfbc: 0x8e25a448  lw          $a1, -0x5BB8($s1)
    ctx->pc = 0x26cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943816)));
    // 0x26cfc0: 0xc09bb78  jal         func_26EDE0
    ctx->pc = 0x26CFC0u;
    SET_GPR_U32(ctx, 31, 0x26CFC8u);
    ctx->pc = 0x26CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CFC0u;
            // 0x26cfc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EDE0u;
    if (runtime->hasFunction(0x26EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC8u; }
        if (ctx->pc != 0x26CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ede0_0x26ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFC8u; }
        if (ctx->pc != 0x26CFC8u) { return; }
    }
    ctx->pc = 0x26CFC8u;
    // 0x26cfc8: 0x8e43a440  lw          $v1, -0x5BC0($s2)
    ctx->pc = 0x26cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26cfcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cfd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CFD0u;
    {
        const bool branch_taken_0x26cfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26cfd0) {
            ctx->pc = 0x26CFE0u;
            goto label_26cfe0;
        }
    }
    ctx->pc = 0x26CFD8u;
    // 0x26cfd8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26cfdc: 0xae22a448  sw          $v0, -0x5BB8($s1)
    ctx->pc = 0x26cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943816), GPR_U32(ctx, 2));
label_26cfe0:
    // 0x26cfe0: 0x8e42a440  lw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26cfe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26cff0: 0xae42a440  sw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943808), GPR_U32(ctx, 2));
    // 0x26cff4: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26CFF4u;
    SET_GPR_U32(ctx, 31, 0x26CFFCu);
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFFCu; }
        if (ctx->pc != 0x26CFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CFFCu; }
        if (ctx->pc != 0x26CFFCu) { return; }
    }
    ctx->pc = 0x26CFFCu;
    // 0x26cffc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26d000: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d004: 0xc09bb78  jal         func_26EDE0
    ctx->pc = 0x26D004u;
    SET_GPR_U32(ctx, 31, 0x26D00Cu);
    ctx->pc = 0x26D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D004u;
            // 0x26d008: 0x24a5a340  addiu       $a1, $a1, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EDE0u;
    if (runtime->hasFunction(0x26EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D00Cu; }
        if (ctx->pc != 0x26D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ede0_0x26ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D00Cu; }
        if (ctx->pc != 0x26D00Cu) { return; }
    }
    ctx->pc = 0x26D00Cu;
    // 0x26d00c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26d010: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d014: 0x8c62a450  lw          $v0, -0x5BB0($v1)
    ctx->pc = 0x26d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943824)));
    // 0x26d018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d01c: 0xac62a450  sw          $v0, -0x5BB0($v1)
    ctx->pc = 0x26d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943824), GPR_U32(ctx, 2));
    // 0x26d020: 0xae64a464  sw          $a0, -0x5B9C($s3)
    ctx->pc = 0x26d020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943844), GPR_U32(ctx, 4));
    // 0x26d024: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26d024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d028:
    // 0x26d028: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26d028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d02c:
    // 0x26d02c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26d02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d030: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26d030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d034: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26d034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D03Cu;
            // 0x26d040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CFE0u: goto label_26cfe0;
            case 0x26D028u: goto label_26d028;
            case 0x26D02Cu: goto label_26d02c;
            case 0x26D108u: goto label_26d108;
            case 0x26D150u: goto label_26d150;
            case 0x26D154u: goto label_26d154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D044u;
    // 0x26d044: 0x0  nop
    ctx->pc = 0x26d044u;
    // NOP
    // 0x26d048: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26d04c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26d04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26d050: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x26d050u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
    // 0x26d054: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26d058: 0x8e62a464  lw          $v0, -0x5B9C($s3)
    ctx->pc = 0x26d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943844)));
    // 0x26d05c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26d060: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26d060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d064: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26d068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d06c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26d070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d074: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x26d074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26d078: 0xae62a464  sw          $v0, -0x5B9C($s3)
    ctx->pc = 0x26d078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943844), GPR_U32(ctx, 2));
    // 0x26d07c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x26D07Cu;
    {
        const bool branch_taken_0x26d07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D07Cu;
            // 0x26d080: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d07c) {
            ctx->pc = 0x26D150u;
            goto label_26d150;
        }
    }
    ctx->pc = 0x26D084u;
    // 0x26d084: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x26d084u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x26d088: 0x8e42a440  lw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26d08c: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x26D08Cu;
    {
        const bool branch_taken_0x26d08c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26D090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D08Cu;
            // 0x26d090: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d08c) {
            ctx->pc = 0x26D154u;
            goto label_26d154;
        }
    }
    ctx->pc = 0x26D094u;
    // 0x26d094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d098: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26D098u;
    SET_GPR_U32(ctx, 31, 0x26D0A0u);
    ctx->pc = 0x26D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D098u;
            // 0x26d09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0A0u; }
        if (ctx->pc != 0x26D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0A0u; }
        if (ctx->pc != 0x26D0A0u) { return; }
    }
    ctx->pc = 0x26D0A0u;
    // 0x26d0a0: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26d0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x26d0a4: 0x8e04a304  lw          $a0, -0x5CFC($s0)
    ctx->pc = 0x26d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26d0a8: 0x3c110031  lui         $s1, 0x31
    ctx->pc = 0x26d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
    // 0x26d0ac: 0xc09b9e6  jal         func_26E798
    ctx->pc = 0x26D0ACu;
    SET_GPR_U32(ctx, 31, 0x26D0B4u);
    ctx->pc = 0x26D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0ACu;
            // 0x26d0b0: 0x2634a448  addiu       $s4, $s1, -0x5BB8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E798u;
    if (runtime->hasFunction(0x26E798u)) {
        auto targetFn = runtime->lookupFunction(0x26E798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0B4u; }
        if (ctx->pc != 0x26D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026E798_0x26e798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0B4u; }
        if (ctx->pc != 0x26D0B4u) { return; }
    }
    ctx->pc = 0x26D0B4u;
    // 0x26d0b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0b8: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26D0B8u;
    SET_GPR_U32(ctx, 31, 0x26D0C0u);
    ctx->pc = 0x26D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0B8u;
            // 0x26d0bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C0u; }
        if (ctx->pc != 0x26D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0C0u; }
        if (ctx->pc != 0x26D0C0u) { return; }
    }
    ctx->pc = 0x26D0C0u;
    // 0x26d0c0: 0x8e02a304  lw          $v0, -0x5CFC($s0)
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943492)));
    // 0x26d0c4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x26d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x26d0c8: 0x34630090  ori         $v1, $v1, 0x90
    ctx->pc = 0x26d0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)144);
    // 0x26d0cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0d0: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x26d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x26d0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x26d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x26d0dc: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26D0DCu;
    SET_GPR_U32(ctx, 31, 0x26D0E4u);
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0E4u; }
        if (ctx->pc != 0x26D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0E4u; }
        if (ctx->pc != 0x26D0E4u) { return; }
    }
    ctx->pc = 0x26D0E4u;
    // 0x26d0e4: 0x8e25a448  lw          $a1, -0x5BB8($s1)
    ctx->pc = 0x26d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943816)));
    // 0x26d0e8: 0xc09bb78  jal         func_26EDE0
    ctx->pc = 0x26D0E8u;
    SET_GPR_U32(ctx, 31, 0x26D0F0u);
    ctx->pc = 0x26D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0E8u;
            // 0x26d0ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EDE0u;
    if (runtime->hasFunction(0x26EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F0u; }
        if (ctx->pc != 0x26D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ede0_0x26ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D0F0u; }
        if (ctx->pc != 0x26D0F0u) { return; }
    }
    ctx->pc = 0x26D0F0u;
    // 0x26d0f0: 0x8e43a440  lw          $v1, -0x5BC0($s2)
    ctx->pc = 0x26d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26d0f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d0f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D0F8u;
    {
        const bool branch_taken_0x26d0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d0f8) {
            ctx->pc = 0x26D108u;
            goto label_26d108;
        }
    }
    ctx->pc = 0x26D100u;
    // 0x26d100: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26d104: 0xae22a448  sw          $v0, -0x5BB8($s1)
    ctx->pc = 0x26d104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943816), GPR_U32(ctx, 2));
label_26d108:
    // 0x26d108: 0x8e42a440  lw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943808)));
    // 0x26d10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d118: 0xae42a440  sw          $v0, -0x5BC0($s2)
    ctx->pc = 0x26d118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943808), GPR_U32(ctx, 2));
    // 0x26d11c: 0xc09e6b6  jal         func_279AD8
    ctx->pc = 0x26D11Cu;
    SET_GPR_U32(ctx, 31, 0x26D124u);
    ctx->pc = 0x279AD8u;
    if (runtime->hasFunction(0x279AD8u)) {
        auto targetFn = runtime->lookupFunction(0x279AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D124u; }
        if (ctx->pc != 0x26D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279AD8_0x279ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D124u; }
        if (ctx->pc != 0x26D124u) { return; }
    }
    ctx->pc = 0x26D124u;
    // 0x26d124: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26d124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26d128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d12c: 0xc09bb78  jal         func_26EDE0
    ctx->pc = 0x26D12Cu;
    SET_GPR_U32(ctx, 31, 0x26D134u);
    ctx->pc = 0x26D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D12Cu;
            // 0x26d130: 0x24a5a340  addiu       $a1, $a1, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EDE0u;
    if (runtime->hasFunction(0x26EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D134u; }
        if (ctx->pc != 0x26D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ede0_0x26ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D134u; }
        if (ctx->pc != 0x26D134u) { return; }
    }
    ctx->pc = 0x26D134u;
    // 0x26d134: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26d138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d13c: 0x8c62a450  lw          $v0, -0x5BB0($v1)
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943824)));
    // 0x26d140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d144: 0xac62a450  sw          $v0, -0x5BB0($v1)
    ctx->pc = 0x26d144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943824), GPR_U32(ctx, 2));
    // 0x26d148: 0xae64a464  sw          $a0, -0x5B9C($s3)
    ctx->pc = 0x26d148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943844), GPR_U32(ctx, 4));
    // 0x26d14c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26d14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d150:
    // 0x26d150: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26d150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d154:
    // 0x26d154: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26d154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d158: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26d158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d15c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26d15cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d164: 0x3e00008  jr          $ra
    ctx->pc = 0x26D164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D164u;
            // 0x26d168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CFE0u: goto label_26cfe0;
            case 0x26D028u: goto label_26d028;
            case 0x26D02Cu: goto label_26d02c;
            case 0x26D108u: goto label_26d108;
            case 0x26D150u: goto label_26d150;
            case 0x26D154u: goto label_26d154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D16Cu;
    // 0x26d16c: 0x0  nop
    ctx->pc = 0x26d16cu;
    // NOP
}
