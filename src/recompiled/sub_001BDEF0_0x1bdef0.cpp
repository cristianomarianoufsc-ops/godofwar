#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDEF0
// Address: 0x1bdef0 - 0x1bdff8
void sub_001BDEF0_0x1bdef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDEF0_0x1bdef0");
#endif

    ctx->pc = 0x1bdef0u;

    // 0x1bdef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bdef4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdef8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bdef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1bdefc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bdf00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bdf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1bdf04: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bdf08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bdf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bdf0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bdf10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1bdf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1bdf14: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1bdf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1bdf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdf1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bdf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bdf20: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdf24: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1bdf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1bdf28: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bdf28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf2c: 0xc061d50  jal         func_187540
    ctx->pc = 0x1BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF34u);
    ctx->pc = 0x1BDF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF2Cu;
            // 0x1bdf30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187540u;
    if (runtime->hasFunction(0x187540u)) {
        auto targetFn = runtime->lookupFunction(0x187540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF34u; }
        if (ctx->pc != 0x1BDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187540_0x187588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF34u; }
        if (ctx->pc != 0x1BDF34u) { return; }
    }
    ctx->pc = 0x1BDF34u;
    // 0x1bdf34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bdf38:
    // 0x1bdf38: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1bdf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bdf3c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1bdf40: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x1bdf40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bdf44: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdf48: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BDF48u;
    {
        const bool branch_taken_0x1bdf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf48) {
            ctx->pc = 0x1BDF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF48u;
            // 0x1bdf4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDFACu;
            goto label_1bdfac;
        }
    }
    ctx->pc = 0x1BDF50u;
    // 0x1bdf50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDF50u;
    {
        const bool branch_taken_0x1bdf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF50u;
            // 0x1bdf54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf50) {
            ctx->pc = 0x1BDF5Cu;
            goto label_1bdf5c;
        }
    }
    ctx->pc = 0x1BDF58u;
label_1bdf58:
    // 0x1bdf58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bdf58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bdf5c:
    // 0x1bdf5c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1bdf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bdf60: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BDF60u;
    {
        const bool branch_taken_0x1bdf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF60u;
            // 0x1bdf64: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf60) {
            ctx->pc = 0x1BDFA8u;
            goto label_1bdfa8;
        }
    }
    ctx->pc = 0x1BDF68u;
    // 0x1bdf68: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bdf6c: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1bdf70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdf74: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdf78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdf7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bdf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bdf80: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BDF80u;
    {
        const bool branch_taken_0x1bdf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF80u;
            // 0x1bdf84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf80) {
            ctx->pc = 0x1BDF58u;
            runtime->cooperativeGuestYield();
            goto label_1bdf58;
        }
    }
    ctx->pc = 0x1BDF88u;
    // 0x1bdf88: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1BDF88u;
    SET_GPR_U32(ctx, 31, 0x1BDF90u);
    ctx->pc = 0x1BDF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF88u;
            // 0x1bdf8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF90u; }
        if (ctx->pc != 0x1BDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF90u; }
        if (ctx->pc != 0x1BDF90u) { return; }
    }
    ctx->pc = 0x1BDF90u;
    // 0x1bdf90: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BDF90u;
    {
        const bool branch_taken_0x1bdf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf90) {
            ctx->pc = 0x1BDF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF90u;
            // 0x1bdf94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDF5Cu;
            runtime->cooperativeGuestYield();
            goto label_1bdf5c;
        }
    }
    ctx->pc = 0x1BDF98u;
    // 0x1bdf98: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bdf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bdf9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bdf9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bdfa0: 0xc061d42  jal         func_187508
    ctx->pc = 0x1BDFA0u;
    SET_GPR_U32(ctx, 31, 0x1BDFA8u);
    ctx->pc = 0x1BDFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFA0u;
            // 0x1bdfa4: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187508u;
    if (runtime->hasFunction(0x187508u)) {
        auto targetFn = runtime->lookupFunction(0x187508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFA8u; }
        if (ctx->pc != 0x1BDFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187508_0x187540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFA8u; }
        if (ctx->pc != 0x1BDFA8u) { return; }
    }
    ctx->pc = 0x1BDFA8u;
label_1bdfa8:
    // 0x1bdfa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bdfac:
    // 0x1bdfac: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1bdfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bdfb0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1BDFB0u;
    {
        const bool branch_taken_0x1bdfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFB0u;
            // 0x1bdfb4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb0) {
            ctx->pc = 0x1BDF38u;
            runtime->cooperativeGuestYield();
            goto label_1bdf38;
        }
    }
    ctx->pc = 0x1BDFB8u;
    // 0x1bdfb8: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDFB8u;
    {
        const bool branch_taken_0x1bdfb8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFB8u;
            // 0x1bdfbc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb8) {
            ctx->pc = 0x1BDFD4u;
            goto label_1bdfd4;
        }
    }
    ctx->pc = 0x1BDFC0u;
    // 0x1bdfc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bdfc4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1bdfc8: 0xc061d42  jal         func_187508
    ctx->pc = 0x1BDFC8u;
    SET_GPR_U32(ctx, 31, 0x1BDFD0u);
    ctx->pc = 0x1BDFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFC8u;
            // 0x1bdfcc: 0x8c45cc5c  lw          $a1, -0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187508u;
    if (runtime->hasFunction(0x187508u)) {
        auto targetFn = runtime->lookupFunction(0x187508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFD0u; }
        if (ctx->pc != 0x1BDFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187508_0x187540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFD0u; }
        if (ctx->pc != 0x1BDFD0u) { return; }
    }
    ctx->pc = 0x1BDFD0u;
    // 0x1bdfd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bdfd4:
    // 0x1bdfd4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bdfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdfd8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bdfd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdfdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bdfdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdfe0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdfe4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1bdfe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdfe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdfec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFECu;
            // 0x1bdff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDF38u: goto label_1bdf38;
            case 0x1BDF58u: goto label_1bdf58;
            case 0x1BDF5Cu: goto label_1bdf5c;
            case 0x1BDFA8u: goto label_1bdfa8;
            case 0x1BDFACu: goto label_1bdfac;
            case 0x1BDFD4u: goto label_1bdfd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDFF4u;
    // 0x1bdff4: 0x0  nop
    ctx->pc = 0x1bdff4u;
    // NOP
}
