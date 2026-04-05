#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170A50
// Address: 0x170a50 - 0x170b60
void sub_00170A50_0x170a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A50_0x170a50");
#endif

    ctx->pc = 0x170a50u;

    // 0x170a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170a58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x170a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x170a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x170a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x170a64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x170a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x170a6c: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x170A6Cu;
    {
        const bool branch_taken_0x170a6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A6Cu;
            // 0x170a70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a6c) {
            ctx->pc = 0x170B3Cu;
            goto label_170b3c;
        }
    }
    ctx->pc = 0x170A74u;
    // 0x170a74: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x170a78: 0x8c51004c  lw          $s1, 0x4C($v0)
    ctx->pc = 0x170a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x170a7c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x170a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x170a80: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x170a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x170a84: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x170a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x170a88: 0x40f809  jalr        $v0
    ctx->pc = 0x170A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170A90u);
        ctx->pc = 0x170A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A88u;
            // 0x170a8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x170A90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170AF8u: goto label_170af8;
            case 0x170B14u: goto label_170b14;
            case 0x170B30u: goto label_170b30;
            case 0x170B3Cu: goto label_170b3c;
            case 0x170B44u: goto label_170b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170A90u; }
            if (ctx->pc != 0x170A90u) { return; }
        }
        }
    }
    ctx->pc = 0x170A90u;
    // 0x170a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a94: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x170A94u;
    {
        const bool branch_taken_0x170a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A94u;
            // 0x170a98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a94) {
            ctx->pc = 0x170B44u;
            goto label_170b44;
        }
    }
    ctx->pc = 0x170A9Cu;
    // 0x170a9c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x170aa0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x170aa4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x170aa8: 0x40f809  jalr        $v0
    ctx->pc = 0x170AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170AB0u);
        ctx->pc = 0x170AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170AA8u;
            // 0x170aac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x170AB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170AF8u: goto label_170af8;
            case 0x170B14u: goto label_170b14;
            case 0x170B30u: goto label_170b30;
            case 0x170B3Cu: goto label_170b3c;
            case 0x170B44u: goto label_170b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170AB0u; }
            if (ctx->pc != 0x170AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x170AB0u;
    // 0x170ab0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x170ab4: 0x26420074  addiu       $v0, $s2, 0x74
    ctx->pc = 0x170ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x170ab8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x170ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x170abc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x170abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x170ac0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x170ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x170ac4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x170ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x170ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x170acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ad0: 0xc05cde6  jal         func_173798
    ctx->pc = 0x170AD0u;
    SET_GPR_U32(ctx, 31, 0x170AD8u);
    ctx->pc = 0x170AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AD0u;
            // 0x170ad4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173798u;
    if (runtime->hasFunction(0x173798u)) {
        auto targetFn = runtime->lookupFunction(0x173798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AD8u; }
        if (ctx->pc != 0x170AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173798_0x173798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AD8u; }
        if (ctx->pc != 0x170AD8u) { return; }
    }
    ctx->pc = 0x170AD8u;
    // 0x170ad8: 0x964200c2  lhu         $v0, 0xC2($s2)
    ctx->pc = 0x170ad8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x170adc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x170adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x170ae0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x170AE0u;
    {
        const bool branch_taken_0x170ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ae0) {
            ctx->pc = 0x170AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170AE0u;
            // 0x170ae4: 0x964200c2  lhu         $v0, 0xC2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170AF8u;
            goto label_170af8;
        }
    }
    ctx->pc = 0x170AE8u;
    // 0x170ae8: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x170ae8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x170aec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x170aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x170af0: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x170af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170af4: 0x964200c2  lhu         $v0, 0xC2($s2)
    ctx->pc = 0x170af4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
label_170af8:
    // 0x170af8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x170af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x170afc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x170AFCu;
    {
        const bool branch_taken_0x170afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170afc) {
            ctx->pc = 0x170B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170AFCu;
            // 0x170b00: 0x964200c2  lhu         $v0, 0xC2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170B14u;
            goto label_170b14;
        }
    }
    ctx->pc = 0x170B04u;
    // 0x170b04: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x170b04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x170b08: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x170b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x170b0c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x170b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170b10: 0x964200c2  lhu         $v0, 0xC2($s2)
    ctx->pc = 0x170b10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
label_170b14:
    // 0x170b14: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x170b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x170b18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x170B18u;
    {
        const bool branch_taken_0x170b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170b18) {
            ctx->pc = 0x170B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170B18u;
            // 0x170b1c: 0x924200ce  lbu         $v0, 0xCE($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 206)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170B30u;
            goto label_170b30;
        }
    }
    ctx->pc = 0x170B20u;
    // 0x170b20: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x170b20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x170b24: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x170b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x170b28: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x170b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170b2c: 0x924200ce  lbu         $v0, 0xCE($s2)
    ctx->pc = 0x170b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 206)));
label_170b30:
    // 0x170b30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x170b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x170b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170B34u;
    {
        const bool branch_taken_0x170b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B34u;
            // 0x170b38: 0xa24200ce  sb          $v0, 0xCE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 206), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b34) {
            ctx->pc = 0x170B44u;
            goto label_170b44;
        }
    }
    ctx->pc = 0x170B3Cu;
label_170b3c:
    // 0x170b3c: 0xc05c272  jal         func_1709C8
    ctx->pc = 0x170B3Cu;
    SET_GPR_U32(ctx, 31, 0x170B44u);
    ctx->pc = 0x170B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B3Cu;
            // 0x170b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1709C8u;
    if (runtime->hasFunction(0x1709C8u)) {
        auto targetFn = runtime->lookupFunction(0x1709C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B44u; }
        if (ctx->pc != 0x170B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001709c8_0x1709c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B44u; }
        if (ctx->pc != 0x170B44u) { return; }
    }
    ctx->pc = 0x170B44u;
label_170b44:
    // 0x170b44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x170b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170b48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x170b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x170b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b58: 0x3e00008  jr          $ra
    ctx->pc = 0x170B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B58u;
            // 0x170b5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170AF8u: goto label_170af8;
            case 0x170B14u: goto label_170b14;
            case 0x170B30u: goto label_170b30;
            case 0x170B3Cu: goto label_170b3c;
            case 0x170B44u: goto label_170b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170B60u;
}
