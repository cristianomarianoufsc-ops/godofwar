#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023CC48
// Address: 0x23cc48 - 0x23cf08
void sub_0023CC48_0x23cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CC48_0x23cc48");
#endif

    ctx->pc = 0x23cc48u;

    // 0x23cc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cc4c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23cc50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23cc54: 0x24422c48  addiu       $v0, $v0, 0x2C48
    ctx->pc = 0x23cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11336));
    // 0x23cc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23cc5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cc64: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23cc68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23cc6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC6Cu;
    {
        const bool branch_taken_0x23cc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC6Cu;
            // 0x23cc70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc6c) {
            ctx->pc = 0x23CC7Cu;
            goto label_23cc7c;
        }
    }
    ctx->pc = 0x23CC74u;
    // 0x23cc74: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x23CC74u;
    SET_GPR_U32(ctx, 31, 0x23CC7Cu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC7Cu; }
        if (ctx->pc != 0x23CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC7Cu; }
        if (ctx->pc != 0x23CC7Cu) { return; }
    }
    ctx->pc = 0x23CC7Cu;
label_23cc7c:
    // 0x23cc7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23cc80: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23cc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23cc84: 0x24422c60  addiu       $v0, $v0, 0x2C60
    ctx->pc = 0x23cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11360));
    // 0x23cc88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC88u;
    {
        const bool branch_taken_0x23cc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC88u;
            // 0x23cc8c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc88) {
            ctx->pc = 0x23CC98u;
            goto label_23cc98;
        }
    }
    ctx->pc = 0x23CC90u;
    // 0x23cc90: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23CC90u;
    SET_GPR_U32(ctx, 31, 0x23CC98u);
    ctx->pc = 0x23CC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC90u;
            // 0x23cc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC98u; }
        if (ctx->pc != 0x23CC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC98u; }
        if (ctx->pc != 0x23CC98u) { return; }
    }
    ctx->pc = 0x23CC98u;
label_23cc98:
    // 0x23cc98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23cc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23cc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x23CCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCA4u;
            // 0x23cca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CCACu;
    // 0x23ccac: 0x0  nop
    ctx->pc = 0x23ccacu;
    // NOP
    // 0x23ccb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ccb4: 0x0  nop
    ctx->pc = 0x23ccb4u;
    // NOP
    // 0x23ccb8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x23ccb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23ccbc: 0x0  nop
    ctx->pc = 0x23ccbcu;
    // NOP
    // 0x23ccc0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x23ccc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x23ccc4: 0x0  nop
    ctx->pc = 0x23ccc4u;
    // NOP
    // 0x23ccc8: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x23ccc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23cccc: 0x0  nop
    ctx->pc = 0x23ccccu;
    // NOP
    // 0x23ccd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ccd4: 0x0  nop
    ctx->pc = 0x23ccd4u;
    // NOP
    // 0x23ccd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ccdc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23cce0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23cce4: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x23cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x23cce8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23ccec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23ccf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ccf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ccf8: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x23ccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x23ccfc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23cd00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23cd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd04: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x23cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x23cd08: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x23cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x23cd0c: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23CD0Cu;
    {
        const bool branch_taken_0x23cd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD0Cu;
            // 0x23cd10: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd0c) {
            ctx->pc = 0x23CD3Cu;
            goto label_23cd3c;
        }
    }
    ctx->pc = 0x23CD14u;
    // 0x23cd14: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23cd18:
    // 0x23cd18: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23cd1c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23cd20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cd24: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23CD24u;
    SET_GPR_U32(ctx, 31, 0x23CD2Cu);
    ctx->pc = 0x23CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD24u;
            // 0x23cd28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD2Cu; }
        if (ctx->pc != 0x23CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD2Cu; }
        if (ctx->pc != 0x23CD2Cu) { return; }
    }
    ctx->pc = 0x23CD2Cu;
    // 0x23cd2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23cd30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cd34: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23CD34u;
    {
        const bool branch_taken_0x23cd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD34u;
            // 0x23cd38: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd34) {
            ctx->pc = 0x23CD18u;
            runtime->cooperativeGuestYield();
            goto label_23cd18;
        }
    }
    ctx->pc = 0x23CD3Cu;
label_23cd3c:
    // 0x23cd3c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23cd40: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x23cd44: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23cd48: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x23cd4c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23cd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd54: 0xc08e218  jal         func_238860
    ctx->pc = 0x23CD54u;
    SET_GPR_U32(ctx, 31, 0x23CD5Cu);
    ctx->pc = 0x23CD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD54u;
            // 0x23cd58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD5Cu; }
        if (ctx->pc != 0x23CD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD5Cu; }
        if (ctx->pc != 0x23CD5Cu) { return; }
    }
    ctx->pc = 0x23CD5Cu;
    // 0x23cd5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23cd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cd60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23cd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cd64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23cd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cd68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD6Cu;
            // 0x23cd70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CD74u;
    // 0x23cd74: 0x0  nop
    ctx->pc = 0x23cd74u;
    // NOP
    // 0x23cd78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cd7c: 0x0  nop
    ctx->pc = 0x23cd7cu;
    // NOP
    // 0x23cd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cd84: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23cd88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23cd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cd90: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23CD90u;
    SET_GPR_U32(ctx, 31, 0x23CD98u);
    ctx->pc = 0x23CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD90u;
            // 0x23cd94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD98u; }
        if (ctx->pc != 0x23CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD98u; }
        if (ctx->pc != 0x23CD98u) { return; }
    }
    ctx->pc = 0x23CD98u;
    // 0x23cd98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd9c: 0xc047176  jal         func_11C5D8
    ctx->pc = 0x23CD9Cu;
    SET_GPR_U32(ctx, 31, 0x23CDA4u);
    ctx->pc = 0x23CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD9Cu;
            // 0x23cda0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C5D8u;
    if (runtime->hasFunction(0x11C5D8u)) {
        auto targetFn = runtime->lookupFunction(0x11C5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CDA4u; }
        if (ctx->pc != 0x23CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11c5d8_0x11c738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CDA4u; }
        if (ctx->pc != 0x23CDA4u) { return; }
    }
    ctx->pc = 0x23CDA4u;
    // 0x23cda4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23cda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x23CDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDACu;
            // 0x23cdb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CDB4u;
    // 0x23cdb4: 0x0  nop
    ctx->pc = 0x23cdb4u;
    // NOP
    // 0x23cdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23cdbc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23cdbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CDC0u;
    {
        const bool branch_taken_0x23cdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDC0u;
            // 0x23cdc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdc0) {
            ctx->pc = 0x23CDE0u;
            goto label_23cde0;
        }
    }
    ctx->pc = 0x23CDC8u;
    // 0x23cdc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23cdcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cdd0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23cdd4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23cdd8: 0x40f809  jalr        $v0
    ctx->pc = 0x23CDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CDE0u);
        ctx->pc = 0x23CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDD8u;
            // 0x23cddc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CDE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CDE0u; }
            if (ctx->pc != 0x23CDE0u) { return; }
        }
        }
    }
    ctx->pc = 0x23CDE0u;
label_23cde0:
    // 0x23cde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cde4: 0x3e00008  jr          $ra
    ctx->pc = 0x23CDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDE4u;
            // 0x23cde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CDECu;
    // 0x23cdec: 0x0  nop
    ctx->pc = 0x23cdecu;
    // NOP
    // 0x23cdf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23cdf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23cdf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23cdfc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x23cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23ce00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ce04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23ce08: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x23ce08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23ce0c: 0x8c6800d0  lw          $t0, 0xD0($v1)
    ctx->pc = 0x23ce0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x23ce10: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ce14: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x23ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23ce18: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x23ce18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x23ce1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23ce20: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x23ce24: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x23ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x23ce28: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x23ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x23ce2c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x23ce30: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23ce34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23ce38: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23CE38u;
    SET_GPR_U32(ctx, 31, 0x23CE40u);
    ctx->pc = 0x23CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE38u;
            // 0x23ce3c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE40u; }
        if (ctx->pc != 0x23CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE40u; }
        if (ctx->pc != 0x23CE40u) { return; }
    }
    ctx->pc = 0x23CE40u;
    // 0x23ce40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce48: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23ce4c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23ce50: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x23ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x23ce54: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23ce58: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23ce58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23ce5c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23ce60: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23ce60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x23ce64: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23ce68: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23ce68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ce6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce70: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23ce74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce78: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23ce7c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23ce7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ce80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23ce84: 0xc08e222  jal         func_238888
    ctx->pc = 0x23CE84u;
    SET_GPR_U32(ctx, 31, 0x23CE8Cu);
    ctx->pc = 0x23CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE84u;
            // 0x23ce88: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE8Cu; }
        if (ctx->pc != 0x23CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE8Cu; }
        if (ctx->pc != 0x23CE8Cu) { return; }
    }
    ctx->pc = 0x23CE8Cu;
    // 0x23ce8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23ce90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23ce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce98: 0xc08e222  jal         func_238888
    ctx->pc = 0x23CE98u;
    SET_GPR_U32(ctx, 31, 0x23CEA0u);
    ctx->pc = 0x23CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE98u;
            // 0x23ce9c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEA0u; }
        if (ctx->pc != 0x23CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEA0u; }
        if (ctx->pc != 0x23CEA0u) { return; }
    }
    ctx->pc = 0x23CEA0u;
    // 0x23cea0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23cea4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23cea8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x23cea8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23ceac: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23ceb0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23ceb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ceb4: 0x2484e610  addiu       $a0, $a0, -0x19F0
    ctx->pc = 0x23ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x23ceb8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23ceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cebc: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x23cebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23cec0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23cec4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23cec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23cec8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x23cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x23cecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ceccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ced0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x23ced4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x23ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x23ced8: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x23ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x23cedc: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x23cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23cee0: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23cee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x23cee4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x23cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x23cee8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x23ceec: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23cef0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23cef4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23cef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cefc: 0x3e00008  jr          $ra
    ctx->pc = 0x23CEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEFCu;
            // 0x23cf00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CC7Cu: goto label_23cc7c;
            case 0x23CC98u: goto label_23cc98;
            case 0x23CD18u: goto label_23cd18;
            case 0x23CD3Cu: goto label_23cd3c;
            case 0x23CDE0u: goto label_23cde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CF04u;
    // 0x23cf04: 0x0  nop
    ctx->pc = 0x23cf04u;
    // NOP
}
