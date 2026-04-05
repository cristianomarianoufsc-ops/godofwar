#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2176f8
// Address: 0x2176f8 - 0x217810
void entry_2176f8_0x217810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2176f8_0x217810");
#endif

    ctx->pc = 0x2176f8u;

    // 0x2176f8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2176f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2176fc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217700: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x217700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x217704: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x217704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x217708: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x217708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21770c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21770cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217710: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x217714: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x217714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217718: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x217718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x21771c: 0x2058821  addu        $s1, $s0, $a1
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x217720: 0xc085e52  jal         func_217948
    ctx->pc = 0x217720u;
    SET_GPR_U32(ctx, 31, 0x217728u);
    ctx->pc = 0x217724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217720u;
            // 0x217724: 0x7fa60010  sq          $a2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217728u; }
        if (ctx->pc != 0x217728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217728u; }
        if (ctx->pc != 0x217728u) { return; }
    }
    ctx->pc = 0x217728u;
    // 0x217728: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x217728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21772c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21772cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217730: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x217730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217734: 0xc085e52  jal         func_217948
    ctx->pc = 0x217734u;
    SET_GPR_U32(ctx, 31, 0x21773Cu);
    ctx->pc = 0x217738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217734u;
            // 0x217738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21773Cu; }
        if (ctx->pc != 0x21773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21773Cu; }
        if (ctx->pc != 0x21773Cu) { return; }
    }
    ctx->pc = 0x21773Cu;
    // 0x21773c: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x21773cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217740: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217744: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x217744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217748: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x217748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21774c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21774cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217750: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x217750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217754: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x217754u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x217758: 0x4a0003bf  vwaitq
    ctx->pc = 0x217758u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21775c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x21775cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217760: 0x4a0002ff  vnop
    ctx->pc = 0x217760u;
    // NOP operation, no action needed for VU0
    // 0x217764: 0x4a0002ff  vnop
    ctx->pc = 0x217764u;
    // NOP operation, no action needed for VU0
    // 0x217768: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x217768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21776c: 0x4be110ea  vmul.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x21776cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217770: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x217770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217774: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x217774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217778: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21777c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21777cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217780: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x217780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x217784: 0x4b020840  vaddx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x217784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217788: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x217788u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21778c: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x21778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217790: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x217790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x217794: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217798: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21779c: 0x0  nop
    ctx->pc = 0x21779cu;
    // NOP
label_2177a0:
    // 0x2177a0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2177a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2177a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2177a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2177a8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2177ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2177acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2177b0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2177B0u;
    {
        const bool branch_taken_0x2177b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2177b0) {
            ctx->pc = 0x2177B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2177B0u;
            // 0x2177b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2177E8u;
            goto label_2177e8;
        }
    }
    ctx->pc = 0x2177B8u;
    // 0x2177b8: 0x5071000b  beql        $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2177B8u;
    {
        const bool branch_taken_0x2177b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2177b8) {
            ctx->pc = 0x2177BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2177B8u;
            // 0x2177bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2177E8u;
            goto label_2177e8;
        }
    }
    ctx->pc = 0x2177C0u;
    // 0x2177c0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2177c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2177c4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2177c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2177c8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2177c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2177cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2177ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2177d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2177d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2177d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2177d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2177d8: 0x0  nop
    ctx->pc = 0x2177d8u;
    // NOP
    // 0x2177dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2177DCu;
    {
        const bool branch_taken_0x2177dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2177E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2177DCu;
            // 0x2177e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177dc) {
            ctx->pc = 0x2177F8u;
            goto label_2177f8;
        }
    }
    ctx->pc = 0x2177E4u;
    // 0x2177e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2177e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2177e8:
    // 0x2177e8: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2177e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2177ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2177ECu;
    {
        const bool branch_taken_0x2177ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2177F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2177ECu;
            // 0x2177f0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177ec) {
            ctx->pc = 0x2177A0u;
            runtime->cooperativeGuestYield();
            goto label_2177a0;
        }
    }
    ctx->pc = 0x2177F4u;
    // 0x2177f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2177f8:
    // 0x2177f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2177f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2177fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2177fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x217800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217804: 0x3e00008  jr          $ra
    ctx->pc = 0x217804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217804u;
            // 0x217808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2177A0u: goto label_2177a0;
            case 0x2177E8u: goto label_2177e8;
            case 0x2177F8u: goto label_2177f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21780Cu;
    // 0x21780c: 0x0  nop
    ctx->pc = 0x21780cu;
    // NOP
}
