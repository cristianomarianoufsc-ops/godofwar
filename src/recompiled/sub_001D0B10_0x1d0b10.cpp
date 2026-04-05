#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0B10
// Address: 0x1d0b10 - 0x1d0bb0
void sub_001D0B10_0x1d0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0B10_0x1d0b10");
#endif

    ctx->pc = 0x1d0b10u;

    // 0x1d0b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d0b18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d0b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d0b24: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D0B24u;
    {
        const bool branch_taken_0x1d0b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B24u;
            // 0x1d0b28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b24) {
            ctx->pc = 0x1D0B88u;
            goto label_1d0b88;
        }
    }
    ctx->pc = 0x1D0B2Cu;
    // 0x1d0b2c: 0x8e320030  lw          $s2, 0x30($s1)
    ctx->pc = 0x1d0b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1d0b30: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D0B30u;
    {
        const bool branch_taken_0x1d0b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B30u;
            // 0x1d0b34: 0x96220072  lhu         $v0, 0x72($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b30) {
            ctx->pc = 0x1D0B8Cu;
            goto label_1d0b8c;
        }
    }
    ctx->pc = 0x1D0B38u;
    // 0x1d0b38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0b3c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1d0b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1d0b40: 0xa6220072  sh          $v0, 0x72($s1)
    ctx->pc = 0x1d0b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d0b44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0b48: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d0b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0b4c: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1d0b50: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d0b54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d0b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d0b58: 0x40f809  jalr        $v0
    ctx->pc = 0x1D0B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0B60u);
        ctx->pc = 0x1D0B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B58u;
            // 0x1d0b5c: 0x78b00050  lq          $s0, 0x50($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0B60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B9Cu: goto label_1d0b9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B60u; }
            if (ctx->pc != 0x1D0B60u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0B60u;
    // 0x1d0b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b64: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1d0b64u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1d0b68: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1D0B68u;
    SET_GPR_U32(ctx, 31, 0x1D0B70u);
    ctx->pc = 0x1D0B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B68u;
            // 0x1d0b6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B70u; }
        if (ctx->pc != 0x1D0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B70u; }
        if (ctx->pc != 0x1D0B70u) { return; }
    }
    ctx->pc = 0x1D0B70u;
    // 0x1d0b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b78: 0xc072c62  jal         func_1CB188
    ctx->pc = 0x1D0B78u;
    SET_GPR_U32(ctx, 31, 0x1D0B80u);
    ctx->pc = 0x1D0B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B78u;
            // 0x1d0b7c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB188u;
    if (runtime->hasFunction(0x1CB188u)) {
        auto targetFn = runtime->lookupFunction(0x1CB188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B80u; }
        if (ctx->pc != 0x1D0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB188_0x1cb188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0B80u; }
        if (ctx->pc != 0x1D0B80u) { return; }
    }
    ctx->pc = 0x1D0B80u;
    // 0x1d0b80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0B80u;
    {
        const bool branch_taken_0x1d0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B80u;
            // 0x1d0b84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b80) {
            ctx->pc = 0x1D0B9Cu;
            goto label_1d0b9c;
        }
    }
    ctx->pc = 0x1D0B88u;
label_1d0b88:
    // 0x1d0b88: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d0b88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
label_1d0b8c:
    // 0x1d0b8c: 0x3043ffbf  andi        $v1, $v0, 0xFFBF
    ctx->pc = 0x1d0b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x1d0b90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0b94: 0xa6220072  sh          $v0, 0x72($s1)
    ctx->pc = 0x1d0b94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d0b98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d0b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0b9c:
    // 0x1d0b9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d0b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0ba0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d0ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BA8u;
            // 0x1d0bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0B88u: goto label_1d0b88;
            case 0x1D0B8Cu: goto label_1d0b8c;
            case 0x1D0B9Cu: goto label_1d0b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0BB0u;
}
