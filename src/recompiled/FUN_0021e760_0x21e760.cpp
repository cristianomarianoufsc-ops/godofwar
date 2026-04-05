#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021e760
// Address: 0x21e760 - 0x21e900
void FUN_0021e760_0x21e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021e760_0x21e760");
#endif

    ctx->pc = 0x21e760u;

    // 0x21e760: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21e760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21e764: 0x8ccae5cc  lw          $t2, -0x1A34($a2)
    ctx->pc = 0x21e764u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960588)));
    // 0x21e768: 0x11400062  beqz        $t2, . + 4 + (0x62 << 2)
    ctx->pc = 0x21E768u;
    {
        const bool branch_taken_0x21e768 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E768u;
            // 0x21e76c: 0x27bdffa0  addiu       $sp, $sp, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e768) {
            ctx->pc = 0x21E8F4u;
            goto label_21e8f4;
        }
    }
    ctx->pc = 0x21E770u;
    // 0x21e770: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21e774: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e778: 0xc441c64c  lwc1        $f1, -0x39B4($v0)
    ctx->pc = 0x21e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e77c: 0xc460e5c8  lwc1        $f0, -0x1A38($v1)
    ctx->pc = 0x21e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e780: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21e784: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21e784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21e788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21e788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e78c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e790: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21e790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21e794: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x21e794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21e798: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x21e798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e79c: 0x0  nop
    ctx->pc = 0x21e79cu;
    // NOP
    // 0x21e7a0: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x21E7A0u;
    {
        const bool branch_taken_0x21e7a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7A0u;
            // 0x21e7a4: 0xe460e5c8  swc1        $f0, -0x1A38($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7a0) {
            ctx->pc = 0x21E878u;
            goto label_21e878;
        }
    }
    ctx->pc = 0x21E7A8u;
    // 0x21e7a8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E7A8u;
    {
        const bool branch_taken_0x21e7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e7a8) {
            ctx->pc = 0x21E7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7A8u;
            // 0x21e7ac: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E7B0u;
            goto label_21e7b0;
        }
    }
    ctx->pc = 0x21E7B0u;
label_21e7b0:
    // 0x21e7b0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21e7b4: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x21e7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
    // 0x21e7b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7bc: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x21e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x21e7c0: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x21e7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21e7c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e7c8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x21e7c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e7cc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x21e7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21e7d0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x21e7d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21e7d4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x21e7d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x21e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x21e7dc: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x21e7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x21e7e0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x21e7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e7e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7e8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x21e7e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x21e7ec: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x21e7ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x21e7f0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21e7f4: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x21e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x21e7f8: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x21e7f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x21e7fc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21e7fcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21e800: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21e800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21e804: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x21e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x21e808: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x21e808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21e80c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x21e810: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x21e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e814: 0x7d440020  sq          $a0, 0x20($t2)
    ctx->pc = 0x21e814u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 4));
    // 0x21e818: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21e81c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x21e820: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x21e820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e824: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x21e824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x21e828: 0xdce5bdf8  ld          $a1, -0x4208($a3)
    ctx->pc = 0x21e828u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x21e82c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e830: 0x7d420030  sq          $v0, 0x30($t2)
    ctx->pc = 0x21e830u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 2));
    // 0x21e834: 0x85430060  lh          $v1, 0x60($t2)
    ctx->pc = 0x21e834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x21e838: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x21e838u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x21e83c: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x21e83cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e844: 0x8cc6cb94  lw          $a2, -0x346C($a2)
    ctx->pc = 0x21e844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953876)));
    // 0x21e848: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21e848u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21e84c: 0x7d440040  sq          $a0, 0x40($t2)
    ctx->pc = 0x21e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 64), GPR_VEC(ctx, 4));
    // 0x21e850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e854: 0xa3200a  movz        $a0, $a1, $v1
    ctx->pc = 0x21e854u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x21e858: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x21e858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e85c: 0x7d430050  sq          $v1, 0x50($t2)
    ctx->pc = 0x21e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 80), GPR_VEC(ctx, 3));
    // 0x21e860: 0xfce5bdf8  sd          $a1, -0x4208($a3)
    ctx->pc = 0x21e860u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 5));
    // 0x21e864: 0xacc001bc  sw          $zero, 0x1BC($a2)
    ctx->pc = 0x21e864u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 444), GPR_U32(ctx, 0));
    // 0x21e868: 0xfd440068  sd          $a0, 0x68($t2)
    ctx->pc = 0x21e868u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 104), GPR_U64(ctx, 4));
    // 0x21e86c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x21E86Cu;
    {
        const bool branch_taken_0x21e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E86Cu;
            // 0x21e870: 0xad28e600  sw          $t0, -0x1A00($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960640), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e86c) {
            ctx->pc = 0x21E8F8u;
            goto label_21e8f8;
        }
    }
    ctx->pc = 0x21E874u;
    // 0x21e874: 0x0  nop
    ctx->pc = 0x21e874u;
    // NOP
label_21e878:
    // 0x21e878: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21e878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21e87c: 0x8ca2e600  lw          $v0, -0x1A00($a1)
    ctx->pc = 0x21e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960640)));
    // 0x21e880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E880u;
    {
        const bool branch_taken_0x21e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E880u;
            // 0x21e884: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e880) {
            ctx->pc = 0x21E898u;
            goto label_21e898;
        }
    }
    ctx->pc = 0x21E888u;
    // 0x21e888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e88c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21e890: 0xac4301bc  sw          $v1, 0x1BC($v0)
    ctx->pc = 0x21e890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 3));
    // 0x21e894: 0xaca0e600  sw          $zero, -0x1A00($a1)
    ctx->pc = 0x21e894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960640), GPR_U32(ctx, 0));
label_21e898:
    // 0x21e898: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21E898u;
    {
        const bool branch_taken_0x21e898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E898u;
            // 0x21e89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e898) {
            ctx->pc = 0x21E8F8u;
            goto label_21e8f8;
        }
    }
    ctx->pc = 0x21E8A0u;
    // 0x21e8a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x21e8a4: 0x8cc6e5cc  lw          $a2, -0x1A34($a2)
    ctx->pc = 0x21e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960588)));
    // 0x21e8a8: 0x248434c0  addiu       $a0, $a0, 0x34C0
    ctx->pc = 0x21e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x21e8ac: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21e8acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21e8b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x21e8b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e8b4: 0xdce5bdf8  ld          $a1, -0x4208($a3)
    ctx->pc = 0x21e8b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x21e8b8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x21e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x21e8bc: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x21e8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x21e8c0: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x21e8c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x21e8c4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x21e8c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21e8c8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21e8c8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21e8cc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x21e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x21e8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8d4: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x21e8d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21e8d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21e8d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8dc: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x21e8dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21e8e0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x21e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x21e8e4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x21e8e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x21e8e8: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x21e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x21e8ec: 0xfce5bdf8  sd          $a1, -0x4208($a3)
    ctx->pc = 0x21e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294950392), GPR_U64(ctx, 5));
    // 0x21e8f0: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x21e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
label_21e8f4:
    // 0x21e8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e8f8:
    // 0x21e8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E8F8u;
            // 0x21e8fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E7B0u: goto label_21e7b0;
            case 0x21E878u: goto label_21e878;
            case 0x21E898u: goto label_21e898;
            case 0x21E8F4u: goto label_21e8f4;
            case 0x21E8F8u: goto label_21e8f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E900u;
}
