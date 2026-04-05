#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211370
// Address: 0x211370 - 0x211528
void sub_00211370_0x211370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211370_0x211370");
#endif

    ctx->pc = 0x211370u;

    // 0x211370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211374: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x211374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x211378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x211378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21137c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211388: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x211388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21138c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x21138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x211390: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x211394: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211394u;
    {
        const bool branch_taken_0x211394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211394u;
            // 0x211398: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211394) {
            ctx->pc = 0x2113A8u;
            goto label_2113a8;
        }
    }
    ctx->pc = 0x21139Cu;
    // 0x21139c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x21139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2113a0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2113A0u;
    {
        const bool branch_taken_0x2113a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2113a0) {
            ctx->pc = 0x211494u;
            goto label_211494;
        }
    }
    ctx->pc = 0x2113A8u;
label_2113a8:
    // 0x2113a8: 0xda010100  lqc2        $vf1, 0x100($s0)
    ctx->pc = 0x2113a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2113ac: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2113acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2113b0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2113b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2113b4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2113b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2113b8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2113b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2113bc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2113bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2113c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2113c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2113c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2113c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2113c8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2113c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2113cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2113ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2113d0: 0x46000004  c1          0x4
    ctx->pc = 0x2113d0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2113d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2113d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2113d8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2113d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2113dc: 0x0  nop
    ctx->pc = 0x2113dcu;
    // NOP
    // 0x2113e0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2113E0u;
    {
        const bool branch_taken_0x2113e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2113E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113E0u;
            // 0x2113e4: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113e0) {
            ctx->pc = 0x211478u;
            goto label_211478;
        }
    }
    ctx->pc = 0x2113E8u;
    // 0x2113e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2113e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2113ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2113ECu;
    {
        const bool branch_taken_0x2113ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113ECu;
            // 0x2113f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113ec) {
            ctx->pc = 0x211418u;
            goto label_211418;
        }
    }
    ctx->pc = 0x2113F4u;
    // 0x2113f4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2113f8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2113F8u;
    SET_GPR_U32(ctx, 31, 0x211400u);
    ctx->pc = 0x2113FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2113F8u;
            // 0x2113fc: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211400u; }
        if (ctx->pc != 0x211400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211400u; }
        if (ctx->pc != 0x211400u) { return; }
    }
    ctx->pc = 0x211400u;
    // 0x211400: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x211400u;
    {
        const bool branch_taken_0x211400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211400) {
            ctx->pc = 0x211404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211400u;
            // 0x211404: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211418u;
            goto label_211418;
        }
    }
    ctx->pc = 0x211408u;
    // 0x211408: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x21140c: 0xc05c294  jal         func_170A50
    ctx->pc = 0x21140Cu;
    SET_GPR_U32(ctx, 31, 0x211414u);
    ctx->pc = 0x211410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21140Cu;
            // 0x211410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211414u; }
        if (ctx->pc != 0x211414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211414u; }
        if (ctx->pc != 0x211414u) { return; }
    }
    ctx->pc = 0x211414u;
    // 0x211414: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_211418:
    // 0x211418: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x211418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x21141c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x21141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211420: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x211420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211424: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x211424u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x211428: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x211428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21142c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211430: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x211434: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x211434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x211438: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x211438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21143c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21143cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211440: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x211440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x211444: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x211444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x211448: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21144c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21144cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x211450: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x211450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x211454: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x211454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x211458: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x211458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21145c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x21145cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x211460: 0xc05c470  jal         func_1711C0
    ctx->pc = 0x211460u;
    SET_GPR_U32(ctx, 31, 0x211468u);
    ctx->pc = 0x211464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211460u;
            // 0x211464: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211468u; }
        if (ctx->pc != 0x211468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c0_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211468u; }
        if (ctx->pc != 0x211468u) { return; }
    }
    ctx->pc = 0x211468u;
    // 0x211468: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x211468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x21146c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x211470: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x211470u;
    {
        const bool branch_taken_0x211470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211470u;
            // 0x211474: 0xa6020298  sh          $v0, 0x298($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211470) {
            ctx->pc = 0x21149Cu;
            goto label_21149c;
        }
    }
    ctx->pc = 0x211478u;
label_211478:
    // 0x211478: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x211478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x21147c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21147Cu;
    {
        const bool branch_taken_0x21147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21147c) {
            ctx->pc = 0x211480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21147Cu;
            // 0x211480: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2114A0u;
            goto label_2114a0;
        }
    }
    ctx->pc = 0x211484u;
    // 0x211484: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x211484u;
    SET_GPR_U32(ctx, 31, 0x21148Cu);
    ctx->pc = 0x211488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211484u;
            // 0x211488: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21148Cu; }
        if (ctx->pc != 0x21148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21148Cu; }
        if (ctx->pc != 0x21148Cu) { return; }
    }
    ctx->pc = 0x21148Cu;
    // 0x21148c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21148Cu;
    {
        const bool branch_taken_0x21148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21148Cu;
            // 0x211490: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21148c) {
            ctx->pc = 0x2114A0u;
            goto label_2114a0;
        }
    }
    ctx->pc = 0x211494u;
label_211494:
    // 0x211494: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x211494u;
    SET_GPR_U32(ctx, 31, 0x21149Cu);
    ctx->pc = 0x211498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211494u;
            // 0x211498: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21149Cu; }
        if (ctx->pc != 0x21149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21149Cu; }
        if (ctx->pc != 0x21149Cu) { return; }
    }
    ctx->pc = 0x21149Cu;
label_21149c:
    // 0x21149c: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x21149cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_2114a0:
    // 0x2114a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2114a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2114a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2114A4u;
    {
        const bool branch_taken_0x2114a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2114A4u;
            // 0x2114a8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114a4) {
            ctx->pc = 0x2114D4u;
            goto label_2114d4;
        }
    }
    ctx->pc = 0x2114ACu;
    // 0x2114ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2114ACu;
    {
        const bool branch_taken_0x2114ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2114ac) {
            ctx->pc = 0x2114B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2114ACu;
            // 0x2114b0: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2114D8u;
            goto label_2114d8;
        }
    }
    ctx->pc = 0x2114B4u;
    // 0x2114b4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2114b8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2114B8u;
    SET_GPR_U32(ctx, 31, 0x2114C0u);
    ctx->pc = 0x2114BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114B8u;
            // 0x2114bc: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114C0u; }
        if (ctx->pc != 0x2114C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114C0u; }
        if (ctx->pc != 0x2114C0u) { return; }
    }
    ctx->pc = 0x2114C0u;
    // 0x2114c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2114C0u;
    {
        const bool branch_taken_0x2114c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2114c0) {
            ctx->pc = 0x2114C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2114C0u;
            // 0x2114c4: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2114D8u;
            goto label_2114d8;
        }
    }
    ctx->pc = 0x2114C8u;
    // 0x2114c8: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2114cc: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2114CCu;
    SET_GPR_U32(ctx, 31, 0x2114D4u);
    ctx->pc = 0x2114D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114CCu;
            // 0x2114d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114D4u; }
        if (ctx->pc != 0x2114D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114D4u; }
        if (ctx->pc != 0x2114D4u) { return; }
    }
    ctx->pc = 0x2114D4u;
label_2114d4:
    // 0x2114d4: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x2114d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_2114d8:
    // 0x2114d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2114d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2114dc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2114DCu;
    {
        const bool branch_taken_0x2114dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2114dc) {
            ctx->pc = 0x2114E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2114DCu;
            // 0x2114e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211514u;
            goto label_211514;
        }
    }
    ctx->pc = 0x2114E4u;
    // 0x2114e4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2114e8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2114E8u;
    SET_GPR_U32(ctx, 31, 0x2114F0u);
    ctx->pc = 0x2114ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114E8u;
            // 0x2114ec: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114F0u; }
        if (ctx->pc != 0x2114F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114F0u; }
        if (ctx->pc != 0x2114F0u) { return; }
    }
    ctx->pc = 0x2114F0u;
    // 0x2114f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2114F0u;
    {
        const bool branch_taken_0x2114f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2114f0) {
            ctx->pc = 0x2114F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2114F0u;
            // 0x2114f4: 0x96020298  lhu         $v0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x211508u;
            goto label_211508;
        }
    }
    ctx->pc = 0x2114F8u;
    // 0x2114f8: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2114f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2114fc: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2114FCu;
    SET_GPR_U32(ctx, 31, 0x211504u);
    ctx->pc = 0x211500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114FCu;
            // 0x211500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211504u; }
        if (ctx->pc != 0x211504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211504u; }
        if (ctx->pc != 0x211504u) { return; }
    }
    ctx->pc = 0x211504u;
    // 0x211504: 0x96020298  lhu         $v0, 0x298($s0)
    ctx->pc = 0x211504u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
label_211508:
    // 0x211508: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x211508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x21150c: 0xa6020298  sh          $v0, 0x298($s0)
    ctx->pc = 0x21150cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x211510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x211510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_211514:
    // 0x211514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21151c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x21151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211520: 0x3e00008  jr          $ra
    ctx->pc = 0x211520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211520u;
            // 0x211524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2113A8u: goto label_2113a8;
            case 0x211418u: goto label_211418;
            case 0x211478u: goto label_211478;
            case 0x211494u: goto label_211494;
            case 0x21149Cu: goto label_21149c;
            case 0x2114A0u: goto label_2114a0;
            case 0x2114D4u: goto label_2114d4;
            case 0x2114D8u: goto label_2114d8;
            case 0x211508u: goto label_211508;
            case 0x211514u: goto label_211514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211528u;
}
