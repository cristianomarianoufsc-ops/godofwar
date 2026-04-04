#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0BC0
// Address: 0x1e0bc0 - 0x1e0c38
void sub_001E0BC0_0x1e0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0BC0_0x1e0bc0");
#endif

    ctx->pc = 0x1e0bc0u;

    // 0x1e0bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0bc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0bcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e0bd0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1e0bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e0bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bd8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e0bd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0be0: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1e0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1e0be4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e0be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0be8: 0x0  nop
    ctx->pc = 0x1e0be8u;
    // NOP
    // 0x1e0bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0BECu;
    {
        const bool branch_taken_0x1e0bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BECu;
            // 0x1e0bf0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bec) {
            ctx->pc = 0x1E0BF8u;
            goto label_1e0bf8;
        }
    }
    ctx->pc = 0x1E0BF4u;
    // 0x1e0bf4: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x1e0bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_1e0bf8:
    // 0x1e0bf8: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BF8u;
            // 0x1e0bfc: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C14u;
            goto label_1e0c14;
        }
    }
    ctx->pc = 0x1E0C00u;
    // 0x1e0c00: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1E0C00u;
    SET_GPR_U32(ctx, 31, 0x1E0C08u);
    ctx->pc = 0x1E0C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C00u;
            // 0x1e0c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C08u; }
        if (ctx->pc != 0x1E0C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C08u; }
        if (ctx->pc != 0x1E0C08u) { return; }
    }
    ctx->pc = 0x1E0C08u;
    // 0x1e0c08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C08u;
            // 0x1e0c0c: 0xe6140180  swc1        $f20, 0x180($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C24u;
            goto label_1e0c24;
        }
    }
    ctx->pc = 0x1E0C10u;
    // 0x1e0c10: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e0c14:
    // 0x1e0c14: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1e0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1e0c18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0c1c: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1e0c20: 0xe6140180  swc1        $f20, 0x180($s0)
    ctx->pc = 0x1e0c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_1e0c24:
    // 0x1e0c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c2c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1e0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C30u;
            // 0x1e0c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0BF8u: goto label_1e0bf8;
            case 0x1E0C14u: goto label_1e0c14;
            case 0x1E0C24u: goto label_1e0c24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0C38u;
}
