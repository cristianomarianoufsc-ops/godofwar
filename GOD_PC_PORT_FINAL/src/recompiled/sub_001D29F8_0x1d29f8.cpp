#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D29F8
// Address: 0x1d29f8 - 0x1d2ad8
void sub_001D29F8_0x1d29f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D29F8_0x1d29f8");
#endif

    ctx->pc = 0x1d29f8u;

    // 0x1d29f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d29f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d29fc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1d2a00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d2a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d2a04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d2a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2a08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d2a0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d2a1c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d2a20: 0x94e35ee0  lhu         $v1, 0x5EE0($a3)
    ctx->pc = 0x1d2a20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24288)));
    // 0x1d2a24: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x1d2a24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d2a28: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2A28u;
    {
        const bool branch_taken_0x1d2a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A28u;
            // 0x1d2a2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a28) {
            ctx->pc = 0x1D2A64u;
            goto label_1d2a64;
        }
    }
    ctx->pc = 0x1D2A30u;
    // 0x1d2a30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d2a34: 0x0  nop
    ctx->pc = 0x1d2a34u;
    // NOP
label_1d2a38:
    // 0x1d2a38: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d2a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d2a3c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x1d2a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d2a40: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2A40u;
    {
        const bool branch_taken_0x1d2a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A40u;
            // 0x1d2a44: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a40) {
            ctx->pc = 0x1D2AB8u;
            goto label_1d2ab8;
        }
    }
    ctx->pc = 0x1D2A48u;
    // 0x1d2a48: 0x24e35ee0  addiu       $v1, $a3, 0x5EE0
    ctx->pc = 0x1d2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24288));
    // 0x1d2a4c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1d2a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d2a50: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1d2a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2a58: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1d2a58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2a5c: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D2A5Cu;
    {
        const bool branch_taken_0x1d2a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D2A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A5Cu;
            // 0x1d2a60: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a5c) {
            ctx->pc = 0x1D2A38u;
            runtime->cooperativeGuestYield();
            goto label_1d2a38;
        }
    }
    ctx->pc = 0x1D2A64u;
label_1d2a64:
    // 0x1d2a64: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x1d2a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d2a68: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D2A68u;
    {
        const bool branch_taken_0x1d2a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a68) {
            ctx->pc = 0x1D2A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A68u;
            // 0x1d2a6c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2ABCu;
            goto label_1d2abc;
        }
    }
    ctx->pc = 0x1D2A70u;
    // 0x1d2a70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2a78: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1d2a7c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d2a80: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2A88u);
        ctx->pc = 0x1D2A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A80u;
            // 0x1d2a84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2A88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2A64u: goto label_1d2a64;
            case 0x1D2AB8u: goto label_1d2ab8;
            case 0x1D2ABCu: goto label_1d2abc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A88u; }
            if (ctx->pc != 0x1D2A88u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2A88u;
    // 0x1d2a88: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2a8c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1d2a90: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1d2a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d2a94: 0x24e75ee0  addiu       $a3, $a3, 0x5EE0
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24288));
    // 0x1d2a98: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1d2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d2a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d2a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2aa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d2aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2aa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d2aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1d2aa8: 0xc074fe8  jal         func_1D3FA0
    ctx->pc = 0x1D2AA8u;
    SET_GPR_U32(ctx, 31, 0x1D2AB0u);
    ctx->pc = 0x1D2AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AA8u;
            // 0x1d2aac: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3FA0u;
    if (runtime->hasFunction(0x1D3FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AB0u; }
        if (ctx->pc != 0x1D2AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3FA0_0x1d3fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AB0u; }
        if (ctx->pc != 0x1D2AB0u) { return; }
    }
    ctx->pc = 0x1D2AB0u;
    // 0x1d2ab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2AB0u;
    {
        const bool branch_taken_0x1d2ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AB0u;
            // 0x1d2ab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ab0) {
            ctx->pc = 0x1D2ABCu;
            goto label_1d2abc;
        }
    }
    ctx->pc = 0x1D2AB8u;
label_1d2ab8:
    // 0x1d2ab8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d2abc:
    // 0x1d2abc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d2abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2ac0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d2ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2ac8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d2ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AD0u;
            // 0x1d2ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2A64u: goto label_1d2a64;
            case 0x1D2AB8u: goto label_1d2ab8;
            case 0x1D2ABCu: goto label_1d2abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2AD8u;
}
