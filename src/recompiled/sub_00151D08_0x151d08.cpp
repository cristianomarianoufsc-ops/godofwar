#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151D08
// Address: 0x151d08 - 0x151ff8
void sub_00151D08_0x151d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D08_0x151d08");
#endif

    ctx->pc = 0x151d08u;

    // 0x151d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151d0c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x151d10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151d14: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x151d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d28: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x151d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151d2c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x151d30: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151d34: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x151d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x151d38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x151d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x151d3c: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x151d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x151d40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x151d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x151d44: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x151d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x151d48: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x151d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x151d4c: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x151d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x151d50: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x151d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x151d54: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x151d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x151d58: 0xc08e222  jal         func_238888
    ctx->pc = 0x151D58u;
    SET_GPR_U32(ctx, 31, 0x151D60u);
    ctx->pc = 0x151D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D58u;
            // 0x151d5c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D60u; }
        if (ctx->pc != 0x151D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D60u; }
        if (ctx->pc != 0x151D60u) { return; }
    }
    ctx->pc = 0x151D60u;
    // 0x151d60: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x151d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x151d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d6c: 0xc08e222  jal         func_238888
    ctx->pc = 0x151D6Cu;
    SET_GPR_U32(ctx, 31, 0x151D74u);
    ctx->pc = 0x151D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151D6Cu;
            // 0x151d70: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D74u; }
        if (ctx->pc != 0x151D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151D74u; }
        if (ctx->pc != 0x151D74u) { return; }
    }
    ctx->pc = 0x151D74u;
    // 0x151d74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x151d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151d78: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x151d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x151d7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x151d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x151d80: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x151d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x151d84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151d88: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x151d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x151d8c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x151d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x151d90: 0x24a5bca8  addiu       $a1, $a1, -0x4358
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950056));
    // 0x151d94: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x151d94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151d98: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151d9c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151da0: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x151da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x151da4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x151da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x151da8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x151da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x151dac: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x151dacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x151db0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x151db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x151db4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x151db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x151db8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x151db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x151dbc: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x151dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x151dc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151dc4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x151DC4u;
    SET_GPR_U32(ctx, 31, 0x151DCCu);
    ctx->pc = 0x151DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DC4u;
            // 0x151dc8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DCCu; }
        if (ctx->pc != 0x151DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DCCu; }
        if (ctx->pc != 0x151DCCu) { return; }
    }
    ctx->pc = 0x151DCCu;
    // 0x151dcc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x151dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dd4: 0x24a522a0  addiu       $a1, $a1, 0x22A0
    ctx->pc = 0x151dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
    // 0x151dd8: 0xc05d4e0  jal         func_175380
    ctx->pc = 0x151DD8u;
    SET_GPR_U32(ctx, 31, 0x151DE0u);
    ctx->pc = 0x151DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151DD8u;
            // 0x151ddc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (runtime->hasFunction(0x175380u)) {
        auto targetFn = runtime->lookupFunction(0x175380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DE0u; }
        if (ctx->pc != 0x151DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175380_0x175380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151DE0u; }
        if (ctx->pc != 0x151DE0u) { return; }
    }
    ctx->pc = 0x151DE0u;
    // 0x151de0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x151de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x151de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151de8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151dec: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x151decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x151df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x151df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151df8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x151DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DFCu;
            // 0x151e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151E04u;
    // 0x151e04: 0x0  nop
    ctx->pc = 0x151e04u;
    // NOP
    // 0x151e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151e0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x151e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x151e10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151e14: 0x2442bca8  addiu       $v0, $v0, -0x4358
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950056));
    // 0x151e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151e24: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x151e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x151e28: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x151e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x151e2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151E2Cu;
    {
        const bool branch_taken_0x151e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E2Cu;
            // 0x151e30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e2c) {
            ctx->pc = 0x151E3Cu;
            goto label_151e3c;
        }
    }
    ctx->pc = 0x151E34u;
    // 0x151e34: 0xc05d4f4  jal         func_1753D0
    ctx->pc = 0x151E34u;
    SET_GPR_U32(ctx, 31, 0x151E3Cu);
    ctx->pc = 0x151E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E34u;
            // 0x151e38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1753D0u;
    if (runtime->hasFunction(0x1753D0u)) {
        auto targetFn = runtime->lookupFunction(0x1753D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E3Cu; }
        if (ctx->pc != 0x151E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001753D0_0x1753d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E3Cu; }
        if (ctx->pc != 0x151E3Cu) { return; }
    }
    ctx->pc = 0x151E3Cu;
label_151e3c:
    // 0x151e3c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x151e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e44: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x151e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x151e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e4c: 0xc08e218  jal         func_238860
    ctx->pc = 0x151E4Cu;
    SET_GPR_U32(ctx, 31, 0x151E54u);
    ctx->pc = 0x151E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E4Cu;
            // 0x151e50: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E54u; }
        if (ctx->pc != 0x151E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E54u; }
        if (ctx->pc != 0x151E54u) { return; }
    }
    ctx->pc = 0x151E54u;
    // 0x151e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151e60: 0x3e00008  jr          $ra
    ctx->pc = 0x151E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E60u;
            // 0x151e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151E68u;
    // 0x151e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151e6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e78: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x151e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x151e7c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x151e7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151e84: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x151e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x151e88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151E88u;
    {
        const bool branch_taken_0x151e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E88u;
            // 0x151e8c: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e88) {
            ctx->pc = 0x151E98u;
            goto label_151e98;
        }
    }
    ctx->pc = 0x151E90u;
    // 0x151e90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x151E90u;
    {
        const bool branch_taken_0x151e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E90u;
            // 0x151e94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e90) {
            ctx->pc = 0x151EFCu;
            goto label_151efc;
        }
    }
    ctx->pc = 0x151E98u;
label_151e98:
    // 0x151e98: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x151e9c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x151ea0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x151ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x151ea4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x151EA4u;
    {
        const bool branch_taken_0x151ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EA4u;
            // 0x151ea8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ea4) {
            ctx->pc = 0x151EF8u;
            goto label_151ef8;
        }
    }
    ctx->pc = 0x151EACu;
    // 0x151eac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_151eb0:
    // 0x151eb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151eb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151eb8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x151eb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151ebc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x151ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x151ec0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x151ec4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x151ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151ed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151ed4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151ed8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x151edc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x151ee0: 0x40f809  jalr        $v0
    ctx->pc = 0x151EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151EE8u);
        ctx->pc = 0x151EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EE0u;
            // 0x151ee4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151EE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151EE8u; }
            if (ctx->pc != 0x151EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x151EE8u;
    // 0x151ee8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x151ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x151eec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151ef0: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x151EF0u;
    {
        const bool branch_taken_0x151ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EF0u;
            // 0x151ef4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ef0) {
            ctx->pc = 0x151EB0u;
            runtime->cooperativeGuestYield();
            goto label_151eb0;
        }
    }
    ctx->pc = 0x151EF8u;
label_151ef8:
    // 0x151ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151efc:
    // 0x151efc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151EFCu;
    {
        const bool branch_taken_0x151efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EFCu;
            // 0x151f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151efc) {
            ctx->pc = 0x151F08u;
            goto label_151f08;
        }
    }
    ctx->pc = 0x151F04u;
    // 0x151f04: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x151f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_151f08:
    // 0x151f08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151f0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x151f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151f14: 0x3e00008  jr          $ra
    ctx->pc = 0x151F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F14u;
            // 0x151f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x0  nop
    ctx->pc = 0x151f1cu;
    // NOP
    // 0x151f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151f24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f30: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x151f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x151f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151f38: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x151F38u;
    {
        const bool branch_taken_0x151f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F38u;
            // 0x151f3c: 0xaca20034  sw          $v0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f38) {
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151F40u;
    // 0x151f40: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x151f44: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x151f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x151f48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x151f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x151f4c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x151F4Cu;
    {
        const bool branch_taken_0x151f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F4Cu;
            // 0x151f50: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f4c) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151F54u;
    // 0x151f54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_151f58:
    // 0x151f58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x151f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f60: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x151f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151f64: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x151f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x151f68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x151F68u;
    {
        const bool branch_taken_0x151f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F68u;
            // 0x151f6c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f68) {
            ctx->pc = 0x151FA0u;
            goto label_151fa0;
        }
    }
    ctx->pc = 0x151F70u;
    // 0x151f70: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x151f70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151f74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x151f78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x151f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151f84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151f88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151f8c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x151f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x151f90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x151f94: 0x40f809  jalr        $v0
    ctx->pc = 0x151F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151F9Cu);
        ctx->pc = 0x151F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F94u;
            // 0x151f98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151F9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151F9Cu; }
            if (ctx->pc != 0x151F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x151F9Cu;
    // 0x151f9c: 0x0  nop
    ctx->pc = 0x151f9cu;
    // NOP
label_151fa0:
    // 0x151fa0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x151fa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151fa8: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151FA8u;
    {
        const bool branch_taken_0x151fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FA8u;
            // 0x151fac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fa8) {
            ctx->pc = 0x151F58u;
            runtime->cooperativeGuestYield();
            goto label_151f58;
        }
    }
    ctx->pc = 0x151FB0u;
label_151fb0:
    // 0x151fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151FB0u;
    {
        const bool branch_taken_0x151fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FB0u;
            // 0x151fb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fb0) {
            ctx->pc = 0x151FD4u;
            goto label_151fd4;
        }
    }
    ctx->pc = 0x151FB8u;
label_151fb8:
    // 0x151fb8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x151fb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151fbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x151fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x151fc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151FC0u;
    {
        const bool branch_taken_0x151fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FC0u;
            // 0x151fc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fc0) {
            ctx->pc = 0x151FD4u;
            goto label_151fd4;
        }
    }
    ctx->pc = 0x151FC8u;
    // 0x151fc8: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x151fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151fd0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x151fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_151fd4:
    // 0x151fd4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151FD4u;
    {
        const bool branch_taken_0x151fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FD4u;
            // 0x151fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fd4) {
            ctx->pc = 0x151FE0u;
            goto label_151fe0;
        }
    }
    ctx->pc = 0x151FDCu;
    // 0x151fdc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x151fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_151fe0:
    // 0x151fe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151fe4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x151fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151fec: 0x3e00008  jr          $ra
    ctx->pc = 0x151FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151FECu;
            // 0x151ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151E3Cu: goto label_151e3c;
            case 0x151E98u: goto label_151e98;
            case 0x151EB0u: goto label_151eb0;
            case 0x151EF8u: goto label_151ef8;
            case 0x151EFCu: goto label_151efc;
            case 0x151F08u: goto label_151f08;
            case 0x151F58u: goto label_151f58;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x151FB8u: goto label_151fb8;
            case 0x151FD4u: goto label_151fd4;
            case 0x151FE0u: goto label_151fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151FF4u;
    // 0x151ff4: 0x0  nop
    ctx->pc = 0x151ff4u;
    // NOP
}
