#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_125be0
// Address: 0x125be0 - 0x125c68
void entry_125be0_0x125c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_125be0_0x125c68");
#endif

    ctx->pc = 0x125be0u;

    // 0x125be0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x125be4: 0x8c860110  lw          $a2, 0x110($a0)
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x125be8: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x125be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x125bec: 0x8cc20084  lw          $v0, 0x84($a2)
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x125bf0: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x125BF0u;
    {
        const bool branch_taken_0x125bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x125bf0) {
            ctx->pc = 0x125BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125BF0u;
            // 0x125bf4: 0x8cc20030  lw          $v0, 0x30($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125C0Cu;
            goto label_125c0c;
        }
    }
    ctx->pc = 0x125BF8u;
    // 0x125bf8: 0x3c0148ff  lui         $at, 0x48FF
    ctx->pc = 0x125bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18687 << 16));
    // 0x125bfc: 0x3421ffe0  ori         $at, $at, 0xFFE0
    ctx->pc = 0x125bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65504);
    // 0x125c00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125c04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x125C04u;
    {
        const bool branch_taken_0x125c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C04u;
            // 0x125c08: 0xc4a003a8  lwc1        $f0, 0x3A8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c04) {
            ctx->pc = 0x125C3Cu;
            goto label_125c3c;
        }
    }
    ctx->pc = 0x125C0Cu;
label_125c0c:
    // 0x125c0c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C0Cu;
    {
        const bool branch_taken_0x125c0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x125C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C0Cu;
            // 0x125c10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c0c) {
            ctx->pc = 0x125C24u;
            goto label_125c24;
        }
    }
    ctx->pc = 0x125C14u;
    // 0x125c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125c18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x125c1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x125C1Cu;
    {
        const bool branch_taken_0x125c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C1Cu;
            // 0x125c20: 0xc4a003a8  lwc1        $f0, 0x3A8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c1c) {
            ctx->pc = 0x125C3Cu;
            goto label_125c3c;
        }
    }
    ctx->pc = 0x125C24u;
label_125c24:
    // 0x125c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x125c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125c2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125c30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x125c34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x125c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x125c38: 0xc4a003a8  lwc1        $f0, 0x3A8($a1)
    ctx->pc = 0x125c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c3c:
    // 0x125c3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x125c3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125c40: 0x0  nop
    ctx->pc = 0x125c40u;
    // NOP
    // 0x125c44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x125C44u;
    {
        const bool branch_taken_0x125c44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C44u;
            // 0x125c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c44) {
            ctx->pc = 0x125C60u;
            goto label_125c60;
        }
    }
    ctx->pc = 0x125C4Cu;
    // 0x125c4c: 0xe4a103a8  swc1        $f1, 0x3A8($a1)
    ctx->pc = 0x125c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 936), bits); }
    // 0x125c50: 0xaca2039c  sw          $v0, 0x39C($a1)
    ctx->pc = 0x125c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 924), GPR_U32(ctx, 2));
    // 0x125c54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x125c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125c58: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x125c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125c5c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x125c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_125c60:
    // 0x125c60: 0x3e00008  jr          $ra
    ctx->pc = 0x125C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125C0Cu: goto label_125c0c;
            case 0x125C24u: goto label_125c24;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C60u: goto label_125c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125C68u;
}
