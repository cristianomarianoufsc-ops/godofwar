#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6E58
// Address: 0x1e6e58 - 0x1e6f98
void sub_001E6E58_0x1e6e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6E58_0x1e6e58");
#endif

    ctx->pc = 0x1e6e58u;

    // 0x1e6e58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e6e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e6e5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e6e60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e6e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e6e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e6e6c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E6E6Cu;
    {
        const bool branch_taken_0x1e6e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E6Cu;
            // 0x1e6e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e6c) {
            ctx->pc = 0x1E6EC4u;
            goto label_1e6ec4;
        }
    }
    ctx->pc = 0x1E6E74u;
    // 0x1e6e74: 0x9222035c  lbu         $v0, 0x35C($s1)
    ctx->pc = 0x1e6e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x1e6e78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6e7c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e6e80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e6e84: 0xa222035c  sb          $v0, 0x35C($s1)
    ctx->pc = 0x1e6e84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 860), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6e88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e6e8c: 0x84500082  lh          $s0, 0x82($v0)
    ctx->pc = 0x1e6e8cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 130)));
    // 0x1e6e90: 0x52040034  beql        $s0, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E6E90u;
    {
        const bool branch_taken_0x1e6e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e6e90) {
            ctx->pc = 0x1E6E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E90u;
            // 0x1e6e94: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F64u;
            goto label_1e6f64;
        }
    }
    ctx->pc = 0x1E6E98u;
    // 0x1e6e98: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1e6e9c: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E6E9Cu;
    {
        const bool branch_taken_0x1e6e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6e9c) {
            ctx->pc = 0x1E6EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E9Cu;
            // 0x1e6ea0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F64u;
            goto label_1e6f64;
        }
    }
    ctx->pc = 0x1E6EA4u;
    // 0x1e6ea4: 0xc07ffe8  jal         func_1FFFA0
    ctx->pc = 0x1E6EA4u;
    SET_GPR_U32(ctx, 31, 0x1E6EACu);
    ctx->pc = 0x1E6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EA4u;
            // 0x1e6ea8: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFFA0u;
    if (runtime->hasFunction(0x1FFFA0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EACu; }
        if (ctx->pc != 0x1E6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFFA0_0x1fffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EACu; }
        if (ctx->pc != 0x1E6EACu) { return; }
    }
    ctx->pc = 0x1E6EACu;
    // 0x1e6eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6eb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e6eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6eb4: 0xc080106  jal         func_200418
    ctx->pc = 0x1E6EB4u;
    SET_GPR_U32(ctx, 31, 0x1E6EBCu);
    ctx->pc = 0x1E6EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EB4u;
            // 0x1e6eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200418u;
    if (runtime->hasFunction(0x200418u)) {
        auto targetFn = runtime->lookupFunction(0x200418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EBCu; }
        if (ctx->pc != 0x1E6EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200418_0x200418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EBCu; }
        if (ctx->pc != 0x1E6EBCu) { return; }
    }
    ctx->pc = 0x1E6EBCu;
    // 0x1e6ebc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E6EBCu;
    {
        const bool branch_taken_0x1e6ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EBCu;
            // 0x1e6ec0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ebc) {
            ctx->pc = 0x1E6F60u;
            goto label_1e6f60;
        }
    }
    ctx->pc = 0x1E6EC4u;
label_1e6ec4:
    // 0x1e6ec4: 0x9222035c  lbu         $v0, 0x35C($s1)
    ctx->pc = 0x1e6ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x1e6ec8: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x1e6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1e6ecc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1e6eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1e6ed0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6ED0u;
    {
        const bool branch_taken_0x1e6ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6ED0u;
            // 0x1e6ed4: 0xa222035c  sb          $v0, 0x35C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 860), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ed0) {
            ctx->pc = 0x1E6EF4u;
            goto label_1e6ef4;
        }
    }
    ctx->pc = 0x1E6ED8u;
    // 0x1e6ed8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1e6edc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6ee0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e6ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e6ee4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e6ee8: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6EF0u);
        ctx->pc = 0x1E6EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EE8u;
            // 0x1e6eec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6EF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F8Cu: goto label_1e6f8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EF0u; }
            if (ctx->pc != 0x1E6EF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6EF0u;
    // 0x1e6ef0: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x1e6ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_1e6ef4:
    // 0x1e6ef4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6ef8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e6ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e6efc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e6f00: 0x40f809  jalr        $v0
    ctx->pc = 0x1E6F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6F08u);
        ctx->pc = 0x1E6F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F00u;
            // 0x1e6f04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6F08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F8Cu: goto label_1e6f8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F08u; }
            if (ctx->pc != 0x1E6F08u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6F08u;
    // 0x1e6f08: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1e6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e6f0c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F14u);
    ctx->pc = 0x1E6F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F0Cu;
            // 0x1e6f10: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F14u; }
        if (ctx->pc != 0x1E6F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F14u; }
        if (ctx->pc != 0x1E6F14u) { return; }
    }
    ctx->pc = 0x1E6F14u;
    // 0x1e6f14: 0x844301b0  lh          $v1, 0x1B0($v0)
    ctx->pc = 0x1e6f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1e6f18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6f1c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E6F1Cu;
    {
        const bool branch_taken_0x1e6f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F1Cu;
            // 0x1e6f20: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f1c) {
            ctx->pc = 0x1E6F64u;
            goto label_1e6f64;
        }
    }
    ctx->pc = 0x1E6F24u;
    // 0x1e6f24: 0x52400010  beql        $s2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6F24u;
    {
        const bool branch_taken_0x1e6f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f24) {
            ctx->pc = 0x1E6F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F24u;
            // 0x1e6f28: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F68u;
            goto label_1e6f68;
        }
    }
    ctx->pc = 0x1E6F2Cu;
    // 0x1e6f2c: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1e6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e6f30: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6F30u;
    SET_GPR_U32(ctx, 31, 0x1E6F38u);
    ctx->pc = 0x1E6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F30u;
            // 0x1e6f34: 0x8e500058  lw          $s0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F38u; }
        if (ctx->pc != 0x1E6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F38u; }
        if (ctx->pc != 0x1E6F38u) { return; }
    }
    ctx->pc = 0x1E6F38u;
    // 0x1e6f38: 0x844201b0  lh          $v0, 0x1B0($v0)
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1e6f3c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6F3Cu;
    {
        const bool branch_taken_0x1e6f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F3Cu;
            // 0x1e6f40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f3c) {
            ctx->pc = 0x1E6F64u;
            goto label_1e6f64;
        }
    }
    ctx->pc = 0x1E6F44u;
    // 0x1e6f44: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1E6F44u;
    SET_GPR_U32(ctx, 31, 0x1E6F4Cu);
    ctx->pc = 0x1E6F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F44u;
            // 0x1e6f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F4Cu; }
        if (ctx->pc != 0x1E6F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F4Cu; }
        if (ctx->pc != 0x1E6F4Cu) { return; }
    }
    ctx->pc = 0x1E6F4Cu;
    // 0x1e6f4c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1E6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F54u);
    ctx->pc = 0x1E6F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F4Cu;
            // 0x1e6f50: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F54u; }
        if (ctx->pc != 0x1E6F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F54u; }
        if (ctx->pc != 0x1E6F54u) { return; }
    }
    ctx->pc = 0x1E6F54u;
    // 0x1e6f54: 0x844501b0  lh          $a1, 0x1B0($v0)
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1e6f58: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1E6F58u;
    SET_GPR_U32(ctx, 31, 0x1E6F60u);
    ctx->pc = 0x1E6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F58u;
            // 0x1e6f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F60u; }
        if (ctx->pc != 0x1E6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F60u; }
        if (ctx->pc != 0x1E6F60u) { return; }
    }
    ctx->pc = 0x1E6F60u;
label_1e6f60:
    // 0x1e6f60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e6f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6f64:
    // 0x1e6f64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e6f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6f68:
    // 0x1e6f68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e6f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F70u;
            // 0x1e6f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F8Cu: goto label_1e6f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6F78u;
    // 0x1e6f78: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6F78u;
    {
        const bool branch_taken_0x1e6f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F78u;
            // 0x1e6f7c: 0x9082035c  lbu         $v0, 0x35C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f78) {
            ctx->pc = 0x1E6F8Cu;
            goto label_1e6f8c;
        }
    }
    ctx->pc = 0x1E6F80u;
    // 0x1e6f80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e6f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F84u;
            // 0x1e6f88: 0xa082035c  sb          $v0, 0x35C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F8Cu: goto label_1e6f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6F8Cu;
label_1e6f8c:
    // 0x1e6f8c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x1e6f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x1e6f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F90u;
            // 0x1e6f94: 0xa082035c  sb          $v0, 0x35C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F8Cu: goto label_1e6f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6F98u;
}
