#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_169010
// Address: 0x169010 - 0x169120
void entry_169010_0x169120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_169010_0x169120");
#endif

    ctx->pc = 0x169010u;

    // 0x169010: 0xc483037c  lwc1        $f3, 0x37C($a0)
    ctx->pc = 0x169010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x169014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169018: 0xc4870380  lwc1        $f7, 0x380($a0)
    ctx->pc = 0x169018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16901c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169020: 0xc4880390  lwc1        $f8, 0x390($a0)
    ctx->pc = 0x169020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x169024: 0x46031ac2  mul.s       $f11, $f3, $f3
    ctx->pc = 0x169024u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x169028: 0xc48a038c  lwc1        $f10, 0x38C($a0)
    ctx->pc = 0x169028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x16902c: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x16902cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x169030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169038: 0x46084182  mul.s       $f6, $f8, $f8
    ctx->pc = 0x169038u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x16903c: 0x460a5142  mul.s       $f5, $f10, $f10
    ctx->pc = 0x16903cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x169040: 0x46005ac0  add.s       $f11, $f11, $f0
    ctx->pc = 0x169040u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x169044: 0x460b02c4  c1          0xB02C4
    ctx->pc = 0x169044u;
    ctx->f[11] = FPU_SQRT_S(ctx->f[0]);
    // 0x169048: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x169048u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x16904c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x16904cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x169050: 0x46040104  c1          0x40104
    ctx->pc = 0x169050u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x169054: 0x46060184  c1          0x60184
    ctx->pc = 0x169054u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x169058: 0x460b0043  div.s       $f1, $f0, $f11
    ctx->pc = 0x169058u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[11];
    // 0x16905c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x16905cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x169060: 0x46050144  c1          0x50144
    ctx->pc = 0x169060u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x169064: 0x46060243  div.s       $f9, $f0, $f6
    ctx->pc = 0x169064u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[9] = ctx->f[0] / ctx->f[6];
    // 0x169068: 0x46040083  div.s       $f2, $f0, $f4
    ctx->pc = 0x169068u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[4];
    // 0x16906c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x16906cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x169070: 0x460b18c3  div.s       $f3, $f3, $f11
    ctx->pc = 0x169070u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[11];
    // 0x169074: 0x460439c3  div.s       $f7, $f7, $f4
    ctx->pc = 0x169074u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[4];
    // 0x169078: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x169078u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16907c: 0x46055283  div.s       $f10, $f10, $f5
    ctx->pc = 0x16907cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[10] * 0.0f); } else ctx->f[10] = ctx->f[10] / ctx->f[5];
    // 0x169080: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x169080u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x169084: 0x46064203  div.s       $f8, $f8, $f6
    ctx->pc = 0x169084u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[8] = ctx->f[8] / ctx->f[6];
    // 0x169088: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x169088u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16908c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x16908cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x169090: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x169090u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x169094: 0x70a65389  pcpyld      $t2, $a1, $a2
    ctx->pc = 0x169094u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x169098: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x169098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x16909c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x16909cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1690a0: 0x71654b89  pcpyld      $t1, $t3, $a1
    ctx->pc = 0x1690a0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x1690a4: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x1690a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x1690a8: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1690a8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x1690ac: 0x70ac3b89  pcpyld      $a3, $a1, $t4
    ctx->pc = 0x1690acu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 12)));
    // 0x1690b0: 0x440d4800  mfc1        $t5, $f9
    ctx->pc = 0x1690b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1690b4: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x1690b4u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x1690b8: 0x71a54389  pcpyld      $t0, $t5, $a1
    ctx->pc = 0x1690b8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 5)));
    // 0x1690bc: 0x440e1800  mfc1        $t6, $f3
    ctx->pc = 0x1690bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1690c0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1690c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690c4: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x1690c4u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
    // 0x1690c8: 0x70ae3389  pcpyld      $a2, $a1, $t6
    ctx->pc = 0x1690c8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 14)));
    // 0x1690cc: 0x440b3800  mfc1        $t3, $f7
    ctx->pc = 0x1690ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x1690d0: 0x70ca34c8  ppacw       $a2, $a2, $t2
    ctx->pc = 0x1690d0u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 10)));
    // 0x1690d4: 0x70ab2b89  pcpyld      $a1, $a1, $t3
    ctx->pc = 0x1690d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 11)));
    // 0x1690d8: 0x440d5000  mfc1        $t5, $f10
    ctx->pc = 0x1690d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1690dc: 0x718d1389  pcpyld      $v0, $t4, $t5
    ctx->pc = 0x1690dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 13)));
    // 0x1690e0: 0x440e4000  mfc1        $t6, $f8
    ctx->pc = 0x1690e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1690e4: 0x718e1b89  pcpyld      $v1, $t4, $t6
    ctx->pc = 0x1690e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1690e8: 0x70a92cc8  ppacw       $a1, $a1, $t1
    ctx->pc = 0x1690e8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 9)));
    // 0x1690ec: 0x704714c8  ppacw       $v0, $v0, $a3
    ctx->pc = 0x1690ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1690f0: 0x70681cc8  ppacw       $v1, $v1, $t0
    ctx->pc = 0x1690f0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x1690f4: 0x7c8602c0  sq          $a2, 0x2C0($a0)
    ctx->pc = 0x1690f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 704), GPR_VEC(ctx, 6));
    // 0x1690f8: 0x7c8302f0  sq          $v1, 0x2F0($a0)
    ctx->pc = 0x1690f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 752), GPR_VEC(ctx, 3));
    // 0x1690fc: 0x7c8502d0  sq          $a1, 0x2D0($a0)
    ctx->pc = 0x1690fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 720), GPR_VEC(ctx, 5));
    // 0x169100: 0x7c8202e0  sq          $v0, 0x2E0($a0)
    ctx->pc = 0x169100u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 736), GPR_VEC(ctx, 2));
    // 0x169104: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x169104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x169108: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x169108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x16910c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x169110: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x169110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x169114: 0x3e00008  jr          $ra
    ctx->pc = 0x169114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169114u;
            // 0x169118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16911Cu;
    // 0x16911c: 0x0  nop
    ctx->pc = 0x16911cu;
    // NOP
}
