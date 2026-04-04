#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AA28
// Address: 0x25aa28 - 0x25adc0
void sub_0025AA28_0x25aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA28_0x25aa28");
#endif

    ctx->pc = 0x25aa28u;

    // 0x25aa28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25aa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25aa2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25aa30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25aa30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25aa38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25aa3c: 0xc096402  jal         func_259008
    ctx->pc = 0x25AA3Cu;
    SET_GPR_U32(ctx, 31, 0x25AA44u);
    ctx->pc = 0x25AA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA3Cu;
            // 0x25aa40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA44u; }
        if (ctx->pc != 0x25AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA44u; }
        if (ctx->pc != 0x25AA44u) { return; }
    }
    ctx->pc = 0x25AA44u;
    // 0x25aa44: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25aa48: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25aa4c: 0x246336d8  addiu       $v1, $v1, 0x36D8
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14040));
    // 0x25aa50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25aa50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25aa58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25aa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aa5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25aa5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA64u;
            // 0x25aa68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25AA6Cu;
    // 0x25aa6c: 0x0  nop
    ctx->pc = 0x25aa6cu;
    // NOP
    // 0x25aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25AA78u;
    // 0x25aa78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25aa7c: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x25aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x25aa80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x25aa84: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x25aa88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x25aa8c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25aa8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25aa94: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x25aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x25aa98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25aa9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25aa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x25aaa0: 0x8cb20030  lw          $s2, 0x30($a1)
    ctx->pc = 0x25aaa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x25aaa4: 0x96910000  lhu         $s1, 0x0($s4)
    ctx->pc = 0x25aaa4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25aaa8: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AAA8u;
    {
        const bool branch_taken_0x25aaa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AAA8u;
            // 0x25aaac: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaa8) {
            ctx->pc = 0x25AAC4u;
            goto label_25aac4;
        }
    }
    ctx->pc = 0x25AAB0u;
    // 0x25aab0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25aab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25aab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aab8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x25aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x25aabc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x25AABCu;
    {
        const bool branch_taken_0x25aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AABCu;
            // 0x25aac0: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aabc) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AAC4u;
label_25aac4:
    // 0x25aac4: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x25aac8: 0x1622004c  bne         $s1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x25AAC8u;
    {
        const bool branch_taken_0x25aac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AAC8u;
            // 0x25aacc: 0x240203fe  addiu       $v0, $zero, 0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aac8) {
            ctx->pc = 0x25ABFCu;
            goto label_25abfc;
        }
    }
    ctx->pc = 0x25AAD0u;
    // 0x25aad0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25aad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25aad8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x25aad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x25aadc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x25aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25aae0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25aae4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x25aae8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x25aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x25aaec: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x25aaf0: 0x8082009b  lb          $v0, 0x9B($a0)
    ctx->pc = 0x25aaf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x25aaf4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aaf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25aaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab00: 0x26051584  addiu       $a1, $s0, 0x1584
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5508));
    // 0x25ab04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ab08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ab0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ab10: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25AB10u;
    {
        const bool branch_taken_0x25ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25ab10) {
            ctx->pc = 0x25AB60u;
            goto label_25ab60;
        }
    }
    ctx->pc = 0x25AB18u;
    // 0x25ab18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab1c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AB1Cu;
    {
        const bool branch_taken_0x25ab1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB1Cu;
            // 0x25ab20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab1c) {
            ctx->pc = 0x25AB30u;
            goto label_25ab30;
        }
    }
    ctx->pc = 0x25AB24u;
    // 0x25ab24: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x25ab24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25ab28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB28u;
    {
        const bool branch_taken_0x25ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB28u;
            // 0x25ab2c: 0xae02022c  sw          $v0, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab28) {
            ctx->pc = 0x25AB44u;
            goto label_25ab44;
        }
    }
    ctx->pc = 0x25AB30u;
label_25ab30:
    // 0x25ab30: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AB30u;
    {
        const bool branch_taken_0x25ab30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB30u;
            // 0x25ab34: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab30) {
            ctx->pc = 0x25AB40u;
            goto label_25ab40;
        }
    }
    ctx->pc = 0x25AB38u;
    // 0x25ab38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25AB38u;
    {
        const bool branch_taken_0x25ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB38u;
            // 0x25ab3c: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab38) {
            ctx->pc = 0x25AB44u;
            goto label_25ab44;
        }
    }
    ctx->pc = 0x25AB40u;
label_25ab40:
    // 0x25ab40: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x25ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
label_25ab44:
    // 0x25ab44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ab48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab50: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x25AB50u;
    SET_GPR_U32(ctx, 31, 0x25AB58u);
    ctx->pc = 0x25AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB50u;
            // 0x25ab54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB58u; }
        if (ctx->pc != 0x25AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB58u; }
        if (ctx->pc != 0x25AB58u) { return; }
    }
    ctx->pc = 0x25AB58u;
    // 0x25ab58: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25AB58u;
    {
        const bool branch_taken_0x25ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB58u;
            // 0x25ab5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab58) {
            ctx->pc = 0x25ABDCu;
            goto label_25abdc;
        }
    }
    ctx->pc = 0x25AB60u;
label_25ab60:
    // 0x25ab60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25AB60u;
    {
        const bool branch_taken_0x25ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB60u;
            // 0x25ab64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab60) {
            ctx->pc = 0x25ABD8u;
            goto label_25abd8;
        }
    }
    ctx->pc = 0x25AB68u;
    // 0x25ab68: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25AB68u;
    {
        const bool branch_taken_0x25ab68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB68u;
            // 0x25ab6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab68) {
            ctx->pc = 0x25AB90u;
            goto label_25ab90;
        }
    }
    ctx->pc = 0x25AB70u;
    // 0x25ab70: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25ab74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB74u;
    {
        const bool branch_taken_0x25ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB74u;
            // 0x25ab78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab74) {
            ctx->pc = 0x25AB90u;
            goto label_25ab90;
        }
    }
    ctx->pc = 0x25AB7Cu;
    // 0x25ab7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab80: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x25AB80u;
    SET_GPR_U32(ctx, 31, 0x25AB88u);
    ctx->pc = 0x25AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB80u;
            // 0x25ab84: 0xae02022c  sw          $v0, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB88u; }
        if (ctx->pc != 0x25AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB88u; }
        if (ctx->pc != 0x25AB88u) { return; }
    }
    ctx->pc = 0x25AB88u;
    // 0x25ab88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25AB88u;
    {
        const bool branch_taken_0x25ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB88u;
            // 0x25ab8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab88) {
            ctx->pc = 0x25ABDCu;
            goto label_25abdc;
        }
    }
    ctx->pc = 0x25AB90u;
label_25ab90:
    // 0x25ab90: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25AB90u;
    {
        const bool branch_taken_0x25ab90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB90u;
            // 0x25ab94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab90) {
            ctx->pc = 0x25ABB8u;
            goto label_25abb8;
        }
    }
    ctx->pc = 0x25AB98u;
    // 0x25ab98: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25ab9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB9Cu;
    {
        const bool branch_taken_0x25ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB9Cu;
            // 0x25aba0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab9c) {
            ctx->pc = 0x25ABB8u;
            goto label_25abb8;
        }
    }
    ctx->pc = 0x25ABA4u;
    // 0x25aba4: 0xae110230  sw          $s1, 0x230($s0)
    ctx->pc = 0x25aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 17));
    // 0x25aba8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x25ABA8u;
    SET_GPR_U32(ctx, 31, 0x25ABB0u);
    ctx->pc = 0x25ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABA8u;
            // 0x25abac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABB0u; }
        if (ctx->pc != 0x25ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABB0u; }
        if (ctx->pc != 0x25ABB0u) { return; }
    }
    ctx->pc = 0x25ABB0u;
    // 0x25abb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25ABB0u;
    {
        const bool branch_taken_0x25abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABB0u;
            // 0x25abb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abb0) {
            ctx->pc = 0x25ABDCu;
            goto label_25abdc;
        }
    }
    ctx->pc = 0x25ABB8u;
label_25abb8:
    // 0x25abb8: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25ABB8u;
    {
        const bool branch_taken_0x25abb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABB8u;
            // 0x25abbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abb8) {
            ctx->pc = 0x25ABDCu;
            goto label_25abdc;
        }
    }
    ctx->pc = 0x25ABC0u;
    // 0x25abc0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x25abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25abc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ABC4u;
    {
        const bool branch_taken_0x25abc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABC4u;
            // 0x25abc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abc4) {
            ctx->pc = 0x25ABD8u;
            goto label_25abd8;
        }
    }
    ctx->pc = 0x25ABCCu;
    // 0x25abcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25abd0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x25ABD0u;
    SET_GPR_U32(ctx, 31, 0x25ABD8u);
    ctx->pc = 0x25ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABD0u;
            // 0x25abd4: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABD8u; }
        if (ctx->pc != 0x25ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABD8u; }
        if (ctx->pc != 0x25ABD8u) { return; }
    }
    ctx->pc = 0x25ABD8u;
label_25abd8:
    // 0x25abd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25abdc:
    // 0x25abdc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ABDCu;
    {
        const bool branch_taken_0x25abdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25ABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABDCu;
            // 0x25abe0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abdc) {
            ctx->pc = 0x25ABECu;
            goto label_25abec;
        }
    }
    ctx->pc = 0x25ABE4u;
    // 0x25abe4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x25ABE4u;
    {
        const bool branch_taken_0x25abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABE4u;
            // 0x25abe8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abe4) {
            ctx->pc = 0x25AD94u;
            goto label_25ad94;
        }
    }
    ctx->pc = 0x25ABECu;
label_25abec:
    // 0x25abec: 0x56220069  bnel        $s1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x25ABECu;
    {
        const bool branch_taken_0x25abec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x25abec) {
            ctx->pc = 0x25ABF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABECu;
            // 0x25abf0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AD94u;
            goto label_25ad94;
        }
    }
    ctx->pc = 0x25ABF4u;
    // 0x25abf4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x25ABF4u;
    {
        const bool branch_taken_0x25abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABF4u;
            // 0x25abf8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abf4) {
            ctx->pc = 0x25AD94u;
            goto label_25ad94;
        }
    }
    ctx->pc = 0x25ABFCu;
label_25abfc:
    // 0x25abfc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25ABFCu;
    {
        const bool branch_taken_0x25abfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABFCu;
            // 0x25ac00: 0x24020403  addiu       $v0, $zero, 0x403 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abfc) {
            ctx->pc = 0x25AC24u;
            goto label_25ac24;
        }
    }
    ctx->pc = 0x25AC04u;
    // 0x25ac04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x25ac08: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x25ac0c: 0x8c44ca00  lw          $a0, -0x3600($v0)
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953472)));
    // 0x25ac10: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x25AC10u;
    SET_GPR_U32(ctx, 31, 0x25AC18u);
    ctx->pc = 0x25AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC10u;
            // 0x25ac14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC18u; }
        if (ctx->pc != 0x25AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC18u; }
        if (ctx->pc != 0x25AC18u) { return; }
    }
    ctx->pc = 0x25AC18u;
    // 0x25ac18: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x25ac1c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x25AC1Cu;
    {
        const bool branch_taken_0x25ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC1Cu;
            // 0x25ac20: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac1c) {
            ctx->pc = 0x25AD94u;
            goto label_25ad94;
        }
    }
    ctx->pc = 0x25AC24u;
label_25ac24:
    // 0x25ac24: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AC24u;
    {
        const bool branch_taken_0x25ac24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC24u;
            // 0x25ac28: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac24) {
            ctx->pc = 0x25AC40u;
            goto label_25ac40;
        }
    }
    ctx->pc = 0x25AC2Cu;
    // 0x25ac2c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25ac30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ac30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac34: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x25ac34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25ac38: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x25AC38u;
    {
        const bool branch_taken_0x25ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC38u;
            // 0x25ac3c: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac38) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AC40u;
label_25ac40:
    // 0x25ac40: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AC40u;
    {
        const bool branch_taken_0x25ac40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC40u;
            // 0x25ac44: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac40) {
            ctx->pc = 0x25AC64u;
            goto label_25ac64;
        }
    }
    ctx->pc = 0x25AC48u;
    // 0x25ac48: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25ac4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x25ac50: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x25ac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x25ac54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ac54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac58: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x25ac58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25ac5c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25AC5Cu;
    {
        const bool branch_taken_0x25ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC5Cu;
            // 0x25ac60: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac5c) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AC64u;
label_25ac64:
    // 0x25ac64: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AC64u;
    {
        const bool branch_taken_0x25ac64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC64u;
            // 0x25ac68: 0x240203fb  addiu       $v0, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac64) {
            ctx->pc = 0x25AC80u;
            goto label_25ac80;
        }
    }
    ctx->pc = 0x25AC6Cu;
    // 0x25ac6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac70: 0xc072f14  jal         func_1CBC50
    ctx->pc = 0x25AC70u;
    SET_GPR_U32(ctx, 31, 0x25AC78u);
    ctx->pc = 0x25AC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC70u;
            // 0x25ac74: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC50u;
    if (runtime->hasFunction(0x1CBC50u)) {
        auto targetFn = runtime->lookupFunction(0x1CBC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC78u; }
        if (ctx->pc != 0x25AC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBC50_0x1cbc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC78u; }
        if (ctx->pc != 0x25AC78u) { return; }
    }
    ctx->pc = 0x25AC78u;
    // 0x25ac78: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x25AC78u;
    {
        const bool branch_taken_0x25ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC78u;
            // 0x25ac7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac78) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AC80u;
label_25ac80:
    // 0x25ac80: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x25AC80u;
    {
        const bool branch_taken_0x25ac80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC80u;
            // 0x25ac84: 0x2402040f  addiu       $v0, $zero, 0x40F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac80) {
            ctx->pc = 0x25AD4Cu;
            goto label_25ad4c;
        }
    }
    ctx->pc = 0x25AC88u;
    // 0x25ac88: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x25ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x25ac8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25ac8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25ac94: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x25ac94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x25ac98: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25ac9c: 0x40f809  jalr        $v0
    ctx->pc = 0x25AC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25ACA4u);
        ctx->pc = 0x25ACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC9Cu;
            // 0x25aca0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25ACA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25ACA4u; }
            if (ctx->pc != 0x25ACA4u) { return; }
        }
        }
    }
    ctx->pc = 0x25ACA4u;
    // 0x25aca4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x25aca8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25aca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25acac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25acb0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x25acb4: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x25acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x25acb8: 0x40f809  jalr        $v0
    ctx->pc = 0x25ACB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25ACC0u);
        ctx->pc = 0x25ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACB8u;
            // 0x25acbc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25ACC0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25ACC0u; }
            if (ctx->pc != 0x25ACC0u) { return; }
        }
        }
    }
    ctx->pc = 0x25ACC0u;
    // 0x25acc0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25ACC0u;
    {
        const bool branch_taken_0x25acc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25acc0) {
            ctx->pc = 0x25AD2Cu;
            goto label_25ad2c;
        }
    }
    ctx->pc = 0x25ACC8u;
    // 0x25acc8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x25acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x25accc: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x25ACCCu;
    SET_GPR_U32(ctx, 31, 0x25ACD4u);
    ctx->pc = 0x25ACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACCCu;
            // 0x25acd0: 0x8c440320  lw          $a0, 0x320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACD4u; }
        if (ctx->pc != 0x25ACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACD4u; }
        if (ctx->pc != 0x25ACD4u) { return; }
    }
    ctx->pc = 0x25ACD4u;
    // 0x25acd4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x25acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x25acd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25acdc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x25ACDCu;
    {
        const bool branch_taken_0x25acdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25acdc) {
            ctx->pc = 0x25ACE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACDCu;
            // 0x25ace0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AD2Cu;
            goto label_25ad2c;
        }
    }
    ctx->pc = 0x25ACE4u;
    // 0x25ace4: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x25ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x25ace8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25ACE8u;
    {
        const bool branch_taken_0x25ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACE8u;
            // 0x25acec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ace8) {
            ctx->pc = 0x25AD10u;
            goto label_25ad10;
        }
    }
    ctx->pc = 0x25ACF0u;
    // 0x25acf0: 0xc090d58  jal         func_243560
    ctx->pc = 0x25ACF0u;
    SET_GPR_U32(ctx, 31, 0x25ACF8u);
    ctx->pc = 0x25ACF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACF0u;
            // 0x25acf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACF8u; }
        if (ctx->pc != 0x25ACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACF8u; }
        if (ctx->pc != 0x25ACF8u) { return; }
    }
    ctx->pc = 0x25ACF8u;
    // 0x25acf8: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x25acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25acfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25acfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ad00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ad04: 0x0  nop
    ctx->pc = 0x25ad04u;
    // NOP
    // 0x25ad08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25AD08u;
    {
        const bool branch_taken_0x25ad08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ad08) {
            ctx->pc = 0x25AD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD08u;
            // 0x25ad0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AD10u;
            goto label_25ad10;
        }
    }
    ctx->pc = 0x25AD10u;
label_25ad10:
    // 0x25ad10: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD10u;
    {
        const bool branch_taken_0x25ad10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD10u;
            // 0x25ad14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad10) {
            ctx->pc = 0x25AD2Cu;
            goto label_25ad2c;
        }
    }
    ctx->pc = 0x25AD18u;
    // 0x25ad18: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x25ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x25ad1c: 0xc0824ba  jal         func_2092E8
    ctx->pc = 0x25AD1Cu;
    SET_GPR_U32(ctx, 31, 0x25AD24u);
    ctx->pc = 0x25AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD1Cu;
            // 0x25ad20: 0x24a539f8  addiu       $a1, $a1, 0x39F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2092E8u;
    if (runtime->hasFunction(0x2092E8u)) {
        auto targetFn = runtime->lookupFunction(0x2092E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD24u; }
        if (ctx->pc != 0x25AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002092E8_0x2092e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD24u; }
        if (ctx->pc != 0x25AD24u) { return; }
    }
    ctx->pc = 0x25AD24u;
    // 0x25ad24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25AD24u;
    {
        const bool branch_taken_0x25ad24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad24) {
            ctx->pc = 0x25AD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD24u;
            // 0x25ad28: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25AD2Cu;
            goto label_25ad2c;
        }
    }
    ctx->pc = 0x25AD2Cu;
label_25ad2c:
    // 0x25ad2c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD2Cu;
    {
        const bool branch_taken_0x25ad2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD2Cu;
            // 0x25ad30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad2c) {
            ctx->pc = 0x25AD48u;
            goto label_25ad48;
        }
    }
    ctx->pc = 0x25AD34u;
    // 0x25ad34: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x25ad34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x25ad38: 0xc074a5c  jal         func_1D2970
    ctx->pc = 0x25AD38u;
    SET_GPR_U32(ctx, 31, 0x25AD40u);
    ctx->pc = 0x25AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD38u;
            // 0x25ad3c: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2970u;
    if (runtime->hasFunction(0x1D2970u)) {
        auto targetFn = runtime->lookupFunction(0x1D2970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD40u; }
        if (ctx->pc != 0x25AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2970_0x1d2970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD40u; }
        if (ctx->pc != 0x25AD40u) { return; }
    }
    ctx->pc = 0x25AD40u;
    // 0x25ad40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25AD40u;
    {
        const bool branch_taken_0x25ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD40u;
            // 0x25ad44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad40) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD48u;
label_25ad48:
    // 0x25ad48: 0x2402040f  addiu       $v0, $zero, 0x40F
    ctx->pc = 0x25ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
label_25ad4c:
    // 0x25ad4c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD4Cu;
    {
        const bool branch_taken_0x25ad4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD4Cu;
            // 0x25ad50: 0x2402040e  addiu       $v0, $zero, 0x40E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad4c) {
            ctx->pc = 0x25AD68u;
            goto label_25ad68;
        }
    }
    ctx->pc = 0x25AD54u;
    // 0x25ad54: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x25ad58: 0xc072f14  jal         func_1CBC50
    ctx->pc = 0x25AD58u;
    SET_GPR_U32(ctx, 31, 0x25AD60u);
    ctx->pc = 0x25AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD58u;
            // 0x25ad5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC50u;
    if (runtime->hasFunction(0x1CBC50u)) {
        auto targetFn = runtime->lookupFunction(0x1CBC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD60u; }
        if (ctx->pc != 0x25AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBC50_0x1cbc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD60u; }
        if (ctx->pc != 0x25AD60u) { return; }
    }
    ctx->pc = 0x25AD60u;
    // 0x25ad60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25AD60u;
    {
        const bool branch_taken_0x25ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD60u;
            // 0x25ad64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad60) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD68u;
label_25ad68:
    // 0x25ad68: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AD68u;
    {
        const bool branch_taken_0x25ad68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD68u;
            // 0x25ad6c: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad68) {
            ctx->pc = 0x25AD80u;
            goto label_25ad80;
        }
    }
    ctx->pc = 0x25AD70u;
    // 0x25ad70: 0xc072eea  jal         func_1CBBA8
    ctx->pc = 0x25AD70u;
    SET_GPR_U32(ctx, 31, 0x25AD78u);
    ctx->pc = 0x25AD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD70u;
            // 0x25ad74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBA8u;
    if (runtime->hasFunction(0x1CBBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD78u; }
        if (ctx->pc != 0x25AD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBBA8_0x1cbba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD78u; }
        if (ctx->pc != 0x25AD78u) { return; }
    }
    ctx->pc = 0x25AD78u;
    // 0x25ad78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25AD78u;
    {
        const bool branch_taken_0x25ad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD78u;
            // 0x25ad7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad78) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD80u;
label_25ad80:
    // 0x25ad80: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AD80u;
    {
        const bool branch_taken_0x25ad80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD80u;
            // 0x25ad84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad80) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD88u;
    // 0x25ad88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad8c: 0xc074944  jal         func_1D2510
    ctx->pc = 0x25AD8Cu;
    SET_GPR_U32(ctx, 31, 0x25AD94u);
    ctx->pc = 0x25AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD8Cu;
            // 0x25ad90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD94u; }
        if (ctx->pc != 0x25AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD94u; }
        if (ctx->pc != 0x25AD94u) { return; }
    }
    ctx->pc = 0x25AD94u;
label_25ad94:
    // 0x25ad94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ad98:
    // 0x25ad98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25ad98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ad9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25ad9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ada0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25ada0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ada4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25ada4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ada8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25ada8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25adac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25adacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25adb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25adb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADB4u;
            // 0x25adb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AAC4u: goto label_25aac4;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB44u: goto label_25ab44;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABB8u: goto label_25abb8;
            case 0x25ABD8u: goto label_25abd8;
            case 0x25ABDCu: goto label_25abdc;
            case 0x25ABECu: goto label_25abec;
            case 0x25ABFCu: goto label_25abfc;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC64u: goto label_25ac64;
            case 0x25AC80u: goto label_25ac80;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD2Cu: goto label_25ad2c;
            case 0x25AD48u: goto label_25ad48;
            case 0x25AD4Cu: goto label_25ad4c;
            case 0x25AD68u: goto label_25ad68;
            case 0x25AD80u: goto label_25ad80;
            case 0x25AD94u: goto label_25ad94;
            case 0x25AD98u: goto label_25ad98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25ADBCu;
    // 0x25adbc: 0x0  nop
    ctx->pc = 0x25adbcu;
    // NOP
}
