#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6BF0
// Address: 0x1d6bf0 - 0x1d6cd0
void sub_001D6BF0_0x1d6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6BF0_0x1d6bf0");
#endif

    ctx->pc = 0x1d6bf0u;

    // 0x1d6bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6bf4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1d6bf4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1d6bf8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1d6bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d6bfc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d6bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d6c00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6c04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d6c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c08: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1d6c08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d6c0c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1d6c0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d6c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6c18: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1d6c18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1d6c1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6C1Cu;
    {
        const bool branch_taken_0x1d6c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C1Cu;
            // 0x1d6c20: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c1c) {
            ctx->pc = 0x1D6C34u;
            goto label_1d6c34;
        }
    }
    ctx->pc = 0x1D6C24u;
    // 0x1d6c24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6c28: 0xc48c0178  lwc1        $f12, 0x178($a0)
    ctx->pc = 0x1d6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6c2c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C34u);
    ctx->pc = 0x1D6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C2Cu;
            // 0x1d6c30: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C34u; }
        if (ctx->pc != 0x1D6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C34u; }
        if (ctx->pc != 0x1D6C34u) { return; }
    }
    ctx->pc = 0x1D6C34u;
label_1d6c34:
    // 0x1d6c34: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1d6c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c38: 0x0  nop
    ctx->pc = 0x1d6c38u;
    // NOP
    // 0x1d6c3c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1D6C3Cu;
    {
        const bool branch_taken_0x1d6c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C3Cu;
            // 0x1d6c40: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c3c) {
            ctx->pc = 0x1D6C78u;
            goto label_1d6c78;
        }
    }
    ctx->pc = 0x1D6C44u;
    // 0x1d6c44: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d6c48: 0x24842cc0  addiu       $a0, $a0, 0x2CC0
    ctx->pc = 0x1d6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11456));
    // 0x1d6c4c: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1d6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1d6c50: 0x90820077  lbu         $v0, 0x77($a0)
    ctx->pc = 0x1d6c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 119)));
    // 0x1d6c54: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1d6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6c60: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1d6c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1d6c64: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1d6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6c68: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x1d6c68u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x1d6c6c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1d6c6cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1d6c70: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1d6c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1d6c74: 0x0  nop
    ctx->pc = 0x1d6c74u;
    // NOP
label_1d6c78:
    // 0x1d6c78: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x1d6c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c7c: 0x0  nop
    ctx->pc = 0x1d6c7cu;
    // NOP
    // 0x1d6c80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6C80u;
    {
        const bool branch_taken_0x1d6c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C80u;
            // 0x1d6c84: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c80) {
            ctx->pc = 0x1D6CA0u;
            goto label_1d6ca0;
        }
    }
    ctx->pc = 0x1D6C88u;
    // 0x1d6c88: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6c8c: 0x94422d28  lhu         $v0, 0x2D28($v0)
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 11560)));
    // 0x1d6c90: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d6c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d6c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c98: 0xc076c94  jal         func_1DB250
    ctx->pc = 0x1D6C98u;
    SET_GPR_U32(ctx, 31, 0x1D6CA0u);
    ctx->pc = 0x1D6C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C98u;
            // 0x1d6c9c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB250u;
    if (runtime->hasFunction(0x1DB250u)) {
        auto targetFn = runtime->lookupFunction(0x1DB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CA0u; }
        if (ctx->pc != 0x1D6CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1db250_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CA0u; }
        if (ctx->pc != 0x1D6CA0u) { return; }
    }
    ctx->pc = 0x1D6CA0u;
label_1d6ca0:
    // 0x1d6ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ca4: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1D6CA4u;
    SET_GPR_U32(ctx, 31, 0x1D6CACu);
    ctx->pc = 0x1D6CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CA4u;
            // 0x1d6ca8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CACu; }
        if (ctx->pc != 0x1D6CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CACu; }
        if (ctx->pc != 0x1D6CACu) { return; }
    }
    ctx->pc = 0x1D6CACu;
    // 0x1d6cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6cb4: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x1d6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x1d6cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6cbc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1d6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d6cc0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1d6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d6cc4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1d6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d6cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CC8u;
            // 0x1d6ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6C34u: goto label_1d6c34;
            case 0x1D6C78u: goto label_1d6c78;
            case 0x1D6CA0u: goto label_1d6ca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6CD0u;
}
