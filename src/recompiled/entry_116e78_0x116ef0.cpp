#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_116e78
// Address: 0x116e78 - 0x116ef0
void entry_116e78_0x116ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116e78_0x116ef0");
#endif

    ctx->pc = 0x116e78u;

    // 0x116e78: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x116e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x116e7c: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x116e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116e80: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x116e80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e84: 0x0  nop
    ctx->pc = 0x116e84u;
    // NOP
    // 0x116e88: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x116E88u;
    {
        const bool branch_taken_0x116e88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x116E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116E88u;
            // 0x116e8c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e88) {
            ctx->pc = 0x116EE8u;
            goto label_116ee8;
        }
    }
    ctx->pc = 0x116E90u;
    // 0x116e90: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x116e94: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x116e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116e98: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x116e9c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x116e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116ea0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x116ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116ea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x116ea8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x116ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x116eac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x116eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x116eb0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x116eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116eb4: 0x0  nop
    ctx->pc = 0x116eb4u;
    // NOP
    // 0x116eb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x116EB8u;
    {
        const bool branch_taken_0x116eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EB8u;
            // 0x116ebc: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116eb8) {
            ctx->pc = 0x116ECCu;
            goto label_116ecc;
        }
    }
    ctx->pc = 0x116EC0u;
    // 0x116ec0: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x116ec0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x116ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x116EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116EC4u;
            // 0x116ec8: 0xe484001c  swc1        $f4, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116ECCu: goto label_116ecc;
            case 0x116EE8u: goto label_116ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116ECCu;
label_116ecc:
    // 0x116ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116ed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x116ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116ed8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x116ED8u;
    {
        const bool branch_taken_0x116ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ed8) {
            ctx->pc = 0x116EE8u;
            goto label_116ee8;
        }
    }
    ctx->pc = 0x116EE0u;
    // 0x116ee0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x116ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x116ee4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x116ee4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_116ee8:
    // 0x116ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x116EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116ECCu: goto label_116ecc;
            case 0x116EE8u: goto label_116ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116EF0u;
}
