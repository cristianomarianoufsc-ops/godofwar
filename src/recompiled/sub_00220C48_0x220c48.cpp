#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220C48
// Address: 0x220c48 - 0x220d50
void sub_00220C48_0x220c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220C48_0x220c48");
#endif

    ctx->pc = 0x220c48u;

    // 0x220c48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x220c4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x220c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x220c50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x220c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x220c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x220c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x220c5c: 0x70068ca9  por         $s1, $zero, $a2
    ctx->pc = 0x220c5cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x220c60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x220c64: 0x700594a9  por         $s2, $zero, $a1
    ctx->pc = 0x220c64u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x220c68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x220c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x220c6c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x220c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c70: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x220c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x220c74: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x220c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c78: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x220c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x220c7c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x220c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220c84: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x220c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x220c88: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x220C88u;
    {
        const bool branch_taken_0x220c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C88u;
            // 0x220c8c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c88) {
            ctx->pc = 0x220D24u;
            goto label_220d24;
        }
    }
    ctx->pc = 0x220C90u;
    // 0x220c90: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x220c90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220c94: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x220c98: 0x2475e848  addiu       $s5, $v1, -0x17B8
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x220c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220ca0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x220ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x220ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220ca8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220cac: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x220cb0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x220cb4: 0x40f809  jalr        $v0
    ctx->pc = 0x220CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220CBCu);
        ctx->pc = 0x220CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220CB4u;
            // 0x220cb8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220CBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220D10u: goto label_220d10;
            case 0x220D24u: goto label_220d24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220CBCu; }
            if (ctx->pc != 0x220CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x220CBCu;
    // 0x220cbc: 0xc088308  jal         func_220C20
    ctx->pc = 0x220CBCu;
    SET_GPR_U32(ctx, 31, 0x220CC4u);
    ctx->pc = 0x220CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CBCu;
            // 0x220cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C20u;
    if (runtime->hasFunction(0x220C20u)) {
        auto targetFn = runtime->lookupFunction(0x220C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CC4u; }
        if (ctx->pc != 0x220CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C20_0x220c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CC4u; }
        if (ctx->pc != 0x220CC4u) { return; }
    }
    ctx->pc = 0x220CC4u;
    // 0x220cc4: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x220CC4u;
    SET_GPR_U32(ctx, 31, 0x220CCCu);
    ctx->pc = 0x220CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CC4u;
            // 0x220cc8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CCCu; }
        if (ctx->pc != 0x220CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CCCu; }
        if (ctx->pc != 0x220CCCu) { return; }
    }
    ctx->pc = 0x220CCCu;
    // 0x220ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cd0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x220CD0u;
    {
        const bool branch_taken_0x220cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x220cd0) {
            ctx->pc = 0x220CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220CD0u;
            // 0x220cd4: 0x8ea3006c  lw          $v1, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220D10u;
            goto label_220d10;
        }
    }
    ctx->pc = 0x220CD8u;
    // 0x220cd8: 0xc089990  jal         func_226640
    ctx->pc = 0x220CD8u;
    SET_GPR_U32(ctx, 31, 0x220CE0u);
    ctx->pc = 0x220CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CD8u;
            // 0x220cdc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CE0u; }
        if (ctx->pc != 0x220CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CE0u; }
        if (ctx->pc != 0x220CE0u) { return; }
    }
    ctx->pc = 0x220CE0u;
    // 0x220ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x220ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ce4: 0x701234a9  por         $a2, $zero, $s2
    ctx->pc = 0x220ce4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x220ce8: 0x70113ca9  por         $a3, $zero, $s1
    ctx->pc = 0x220ce8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x220cec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x220cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cf0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x220cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cf4: 0xc089e64  jal         func_227990
    ctx->pc = 0x220CF4u;
    SET_GPR_U32(ctx, 31, 0x220CFCu);
    ctx->pc = 0x220CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CF4u;
            // 0x220cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227990u;
    if (runtime->hasFunction(0x227990u)) {
        auto targetFn = runtime->lookupFunction(0x227990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CFCu; }
        if (ctx->pc != 0x220CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227990_0x227990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CFCu; }
        if (ctx->pc != 0x220CFCu) { return; }
    }
    ctx->pc = 0x220CFCu;
    // 0x220cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x220cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d00: 0xc089c6e  jal         func_2271B8
    ctx->pc = 0x220D00u;
    SET_GPR_U32(ctx, 31, 0x220D08u);
    ctx->pc = 0x220D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D00u;
            // 0x220d04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2271B8u;
    if (runtime->hasFunction(0x2271B8u)) {
        auto targetFn = runtime->lookupFunction(0x2271B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D08u; }
        if (ctx->pc != 0x220D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2271b8_0x227218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D08u; }
        if (ctx->pc != 0x220D08u) { return; }
    }
    ctx->pc = 0x220D08u;
    // 0x220d08: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x220d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x220d0c: 0x0  nop
    ctx->pc = 0x220d0cu;
    // NOP
label_220d10:
    // 0x220d10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220d14: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x220d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x220d18: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x220d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x220d1c: 0x40f809  jalr        $v0
    ctx->pc = 0x220D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220D24u);
        ctx->pc = 0x220D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D1Cu;
            // 0x220d20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220D24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220D10u: goto label_220d10;
            case 0x220D24u: goto label_220d24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220D24u; }
            if (ctx->pc != 0x220D24u) { return; }
        }
        }
    }
    ctx->pc = 0x220D24u;
label_220d24:
    // 0x220d24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x220d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220d28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x220d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220d2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x220d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220d30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220d34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x220d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220d38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x220d38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220d40: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x220d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220d44: 0x3e00008  jr          $ra
    ctx->pc = 0x220D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D44u;
            // 0x220d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220D10u: goto label_220d10;
            case 0x220D24u: goto label_220d24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220D4Cu;
    // 0x220d4c: 0x0  nop
    ctx->pc = 0x220d4cu;
    // NOP
}
