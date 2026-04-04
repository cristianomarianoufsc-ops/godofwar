#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3B18
// Address: 0x1f3b18 - 0x1f3c80
void sub_001F3B18_0x1f3b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3B18_0x1f3b18");
#endif

    ctx->pc = 0x1f3b18u;

    // 0x1f3b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3b1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f3b20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f3b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f3b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f3b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f3b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3b30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1f3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f3b34: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3B34u;
    {
        const bool branch_taken_0x1f3b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B34u;
            // 0x1f3b38: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b34) {
            ctx->pc = 0x1F3B9Cu;
            goto label_1f3b9c;
        }
    }
    ctx->pc = 0x1F3B3Cu;
    // 0x1f3b3c: 0x8c910104  lw          $s1, 0x104($a0)
    ctx->pc = 0x1f3b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1f3b40: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f3b40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f3b44: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1f3b44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f3b48: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3B48u;
    {
        const bool branch_taken_0x1f3b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F3B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B48u;
            // 0x1f3b4c: 0x8612001c  lh          $s2, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b48) {
            ctx->pc = 0x1F3B58u;
            goto label_1f3b58;
        }
    }
    ctx->pc = 0x1F3B50u;
    // 0x1f3b50: 0xc04da64  jal         func_136990
    ctx->pc = 0x1F3B50u;
    SET_GPR_U32(ctx, 31, 0x1F3B58u);
    ctx->pc = 0x1F3B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B50u;
            // 0x1f3b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B58u; }
        if (ctx->pc != 0x1F3B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B58u; }
        if (ctx->pc != 0x1F3B58u) { return; }
    }
    ctx->pc = 0x1F3B58u;
label_1f3b58:
    // 0x1f3b58: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1f3b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3b5c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1f3b60: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1f3b64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f3b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1f3b68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3b6c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1f3b70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f3b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f3b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3b80: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1f3b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3b88: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1f3b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1f3b8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3B8Cu;
    {
        const bool branch_taken_0x1f3b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B8Cu;
            // 0x1f3b90: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b8c) {
            ctx->pc = 0x1F3BA0u;
            goto label_1f3ba0;
        }
    }
    ctx->pc = 0x1F3B94u;
    // 0x1f3b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3B94u;
    {
        const bool branch_taken_0x1f3b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B94u;
            // 0x1f3b98: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b94) {
            ctx->pc = 0x1F3BA0u;
            goto label_1f3ba0;
        }
    }
    ctx->pc = 0x1F3B9Cu;
label_1f3b9c:
    // 0x1f3b9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f3b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1f3ba0:
    // 0x1f3ba0: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F3BA0u;
    SET_GPR_U32(ctx, 31, 0x1F3BA8u);
    ctx->pc = 0x1F3BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BA0u;
            // 0x1f3ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38B0u;
    if (runtime->hasFunction(0x1F38B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F38B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BA8u; }
        if (ctx->pc != 0x1F3BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f38b0_0x1f38e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BA8u; }
        if (ctx->pc != 0x1F3BA8u) { return; }
    }
    ctx->pc = 0x1F3BA8u;
    // 0x1f3ba8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F3BA8u;
    {
        const bool branch_taken_0x1f3ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BA8u;
            // 0x1f3bac: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ba8) {
            ctx->pc = 0x1F3C0Cu;
            goto label_1f3c0c;
        }
    }
    ctx->pc = 0x1F3BB0u;
    // 0x1f3bb0: 0x8e23e2a4  lw          $v1, -0x1D5C($s1)
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1f3bb4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3BB4u;
    {
        const bool branch_taken_0x1f3bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BB4u;
            // 0x1f3bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3bb4) {
            ctx->pc = 0x1F3BC0u;
            goto label_1f3bc0;
        }
    }
    ctx->pc = 0x1F3BBCu;
    // 0x1f3bbc: 0xac6207ac  sw          $v0, 0x7AC($v1)
    ctx->pc = 0x1f3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1964), GPR_U32(ctx, 2));
label_1f3bc0:
    // 0x1f3bc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f3bc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3BC4u;
    {
        const bool branch_taken_0x1f3bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bc4) {
            ctx->pc = 0x1F3BFCu;
            goto label_1f3bfc;
        }
    }
    ctx->pc = 0x1F3BCCu;
    // 0x1f3bcc: 0xc07cea0  jal         func_1F3A80
    ctx->pc = 0x1F3BCCu;
    SET_GPR_U32(ctx, 31, 0x1F3BD4u);
    ctx->pc = 0x1F3BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BCCu;
            // 0x1f3bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3A80u;
    if (runtime->hasFunction(0x1F3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1F3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BD4u; }
        if (ctx->pc != 0x1F3BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3A80_0x1f3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BD4u; }
        if (ctx->pc != 0x1F3BD4u) { return; }
    }
    ctx->pc = 0x1F3BD4u;
    // 0x1f3bd4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f3bd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f3bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3be0: 0x8e22e2a4  lw          $v0, -0x1D5C($s1)
    ctx->pc = 0x1f3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1f3be4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f3be8: 0xc07ce52  jal         func_1F3948
    ctx->pc = 0x1F3BE8u;
    SET_GPR_U32(ctx, 31, 0x1F3BF0u);
    ctx->pc = 0x1F3BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BE8u;
            // 0x1f3bec: 0xe44007a8  swc1        $f0, 0x7A8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1960), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3948u;
    if (runtime->hasFunction(0x1F3948u)) {
        auto targetFn = runtime->lookupFunction(0x1F3948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BF0u; }
        if (ctx->pc != 0x1F3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3948_0x1f3948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BF0u; }
        if (ctx->pc != 0x1F3BF0u) { return; }
    }
    ctx->pc = 0x1F3BF0u;
    // 0x1f3bf0: 0x8e23e2a4  lw          $v1, -0x1D5C($s1)
    ctx->pc = 0x1f3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959780)));
    // 0x1f3bf4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F3BF4u;
    {
        const bool branch_taken_0x1f3bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bf4) {
            ctx->pc = 0x1F3BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BF4u;
            // 0x1f3bf8: 0x7c620790  sq          $v0, 0x790($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 1936), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3BFCu;
            goto label_1f3bfc;
        }
    }
    ctx->pc = 0x1F3BFCu;
label_1f3bfc:
    // 0x1f3bfc: 0xc07b922  jal         func_1EE488
    ctx->pc = 0x1F3BFCu;
    SET_GPR_U32(ctx, 31, 0x1F3C04u);
    ctx->pc = 0x1F3C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BFCu;
            // 0x1f3c00: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE488u;
    if (runtime->hasFunction(0x1EE488u)) {
        auto targetFn = runtime->lookupFunction(0x1EE488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C04u; }
        if (ctx->pc != 0x1F3C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ee488_0x1ee4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C04u; }
        if (ctx->pc != 0x1F3C04u) { return; }
    }
    ctx->pc = 0x1F3C04u;
    // 0x1f3c04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F3C04u;
    {
        const bool branch_taken_0x1f3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C04u;
            // 0x1f3c08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c04) {
            ctx->pc = 0x1F3C68u;
            goto label_1f3c68;
        }
    }
    ctx->pc = 0x1F3C0Cu;
label_1f3c0c:
    // 0x1f3c0c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f3c10: 0x8e02e2a4  lw          $v0, -0x1D5C($s0)
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959780)));
    // 0x1f3c14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3C14u;
    {
        const bool branch_taken_0x1f3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C14u;
            // 0x1f3c18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c14) {
            ctx->pc = 0x1F3C20u;
            goto label_1f3c20;
        }
    }
    ctx->pc = 0x1F3C1Cu;
    // 0x1f3c1c: 0x8c4307ac  lw          $v1, 0x7AC($v0)
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1964)));
label_1f3c20:
    // 0x1f3c20: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F3C20u;
    {
        const bool branch_taken_0x1f3c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c20) {
            ctx->pc = 0x1F3C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C20u;
            // 0x1f3c24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3C68u;
            goto label_1f3c68;
        }
    }
    ctx->pc = 0x1F3C28u;
    // 0x1f3c28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3c2c: 0xc07b928  jal         func_1EE4A0
    ctx->pc = 0x1F3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C34u);
    ctx->pc = 0x1EE4A0u;
    if (runtime->hasFunction(0x1EE4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C34u; }
        if (ctx->pc != 0x1F3C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ee4a0_0x1ee4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C34u; }
        if (ctx->pc != 0x1F3C34u) { return; }
    }
    ctx->pc = 0x1F3C34u;
    // 0x1f3c34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3c38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f3c38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f3c3c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f3c3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3c40: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1f3c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f3c44: 0x8e02e2a4  lw          $v0, -0x1D5C($s0)
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959780)));
    // 0x1f3c48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3C48u;
    {
        const bool branch_taken_0x1f3c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C48u;
            // 0x1f3c4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c48) {
            ctx->pc = 0x1F3C68u;
            goto label_1f3c68;
        }
    }
    ctx->pc = 0x1F3C50u;
    // 0x1f3c50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1f3c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1f3c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3c58: 0xf8410790  sqc2        $vf1, 0x790($v0)
    ctx->pc = 0x1f3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1936), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f3c5c: 0xe44007a8  swc1        $f0, 0x7A8($v0)
    ctx->pc = 0x1f3c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1960), bits); }
    // 0x1f3c60: 0xac4007ac  sw          $zero, 0x7AC($v0)
    ctx->pc = 0x1f3c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1964), GPR_U32(ctx, 0));
    // 0x1f3c64: 0x0  nop
    ctx->pc = 0x1f3c64u;
    // NOP
label_1f3c68:
    // 0x1f3c68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3c6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f3c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C74u;
            // 0x1f3c78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3B58u: goto label_1f3b58;
            case 0x1F3B9Cu: goto label_1f3b9c;
            case 0x1F3BA0u: goto label_1f3ba0;
            case 0x1F3BC0u: goto label_1f3bc0;
            case 0x1F3BFCu: goto label_1f3bfc;
            case 0x1F3C0Cu: goto label_1f3c0c;
            case 0x1F3C20u: goto label_1f3c20;
            case 0x1F3C68u: goto label_1f3c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3C7Cu;
    // 0x1f3c7c: 0x0  nop
    ctx->pc = 0x1f3c7cu;
    // NOP
}
