#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001969D0
// Address: 0x1969d0 - 0x196ab0
void sub_001969D0_0x1969d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969D0_0x1969d0");
#endif

    ctx->pc = 0x1969d0u;

    // 0x1969d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1969d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1969d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1969d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1969d8: 0x8c42c94c  lw          $v0, -0x36B4($v0)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953292)));
    // 0x1969dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1969dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1969e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1969e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1969e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1969e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1969e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1969E8u;
    {
        const bool branch_taken_0x1969e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1969ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969E8u;
            // 0x1969ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969e8) {
            ctx->pc = 0x196A98u;
            goto label_196a98;
        }
    }
    ctx->pc = 0x1969F0u;
    // 0x1969f0: 0xc065abe  jal         func_196AF8
    ctx->pc = 0x1969F0u;
    SET_GPR_U32(ctx, 31, 0x1969F8u);
    ctx->pc = 0x1969F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969F0u;
            // 0x1969f4: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AF8u;
    if (runtime->hasFunction(0x196AF8u)) {
        auto targetFn = runtime->lookupFunction(0x196AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969F8u; }
        if (ctx->pc != 0x1969F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AF8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969F8u; }
        if (ctx->pc != 0x1969F8u) { return; }
    }
    ctx->pc = 0x1969F8u;
    // 0x1969f8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1969f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1969fc: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1969fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x196a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196a04: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x196a08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196a10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x196a14: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x196a18: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x196a1c: 0x40f809  jalr        $v0
    ctx->pc = 0x196A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A24u);
        ctx->pc = 0x196A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A1Cu;
            // 0x196a20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196A24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196A98u: goto label_196a98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196A24u; }
            if (ctx->pc != 0x196A24u) { return; }
        }
        }
    }
    ctx->pc = 0x196A24u;
    // 0x196a24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196a28: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x196a2c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x196a30: 0x2484c968  addiu       $a0, $a0, -0x3698
    ctx->pc = 0x196a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953320));
    // 0x196a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196a3c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x196a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196a40: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x196A40u;
    SET_GPR_U32(ctx, 31, 0x196A48u);
    ctx->pc = 0x196A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A40u;
            // 0x196a44: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A48u; }
        if (ctx->pc != 0x196A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A48u; }
        if (ctx->pc != 0x196A48u) { return; }
    }
    ctx->pc = 0x196A48u;
    // 0x196a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a4c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x196A4Cu;
    SET_GPR_U32(ctx, 31, 0x196A54u);
    ctx->pc = 0x196A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A4Cu;
            // 0x196a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A54u; }
        if (ctx->pc != 0x196A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A54u; }
        if (ctx->pc != 0x196A54u) { return; }
    }
    ctx->pc = 0x196A54u;
    // 0x196a54: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x196a54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x196a58: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x196a5c: 0xc04c992  jal         func_132648
    ctx->pc = 0x196A5Cu;
    SET_GPR_U32(ctx, 31, 0x196A64u);
    ctx->pc = 0x196A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A5Cu;
            // 0x196a60: 0x2484c950  addiu       $a0, $a0, -0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A64u; }
        if (ctx->pc != 0x196A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A64u; }
        if (ctx->pc != 0x196A64u) { return; }
    }
    ctx->pc = 0x196A64u;
    // 0x196a64: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x196a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x196a68: 0xac62c994  sw          $v0, -0x366C($v1)
    ctx->pc = 0x196a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953364), GPR_U32(ctx, 2));
    // 0x196a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a74: 0xc04c518  jal         func_131460
    ctx->pc = 0x196A74u;
    SET_GPR_U32(ctx, 31, 0x196A7Cu);
    ctx->pc = 0x196A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A74u;
            // 0x196a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A7Cu; }
        if (ctx->pc != 0x196A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A7Cu; }
        if (ctx->pc != 0x196A7Cu) { return; }
    }
    ctx->pc = 0x196A7Cu;
    // 0x196a7c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x196a80: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x196a84: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x196a88: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x196a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x196a8c: 0x40f809  jalr        $v0
    ctx->pc = 0x196A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A94u);
        ctx->pc = 0x196A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A8Cu;
            // 0x196a90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196A94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196A98u: goto label_196a98;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196A94u; }
            if (ctx->pc != 0x196A94u) { return; }
        }
        }
    }
    ctx->pc = 0x196A94u;
    // 0x196a94: 0x0  nop
    ctx->pc = 0x196a94u;
    // NOP
label_196a98:
    // 0x196a98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196a9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196aa0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x196aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x196AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196AA8u;
            // 0x196aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196A98u: goto label_196a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196AB0u;
}
