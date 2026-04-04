#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD720
// Address: 0x1cd720 - 0x1cdb68
void sub_001CD720_0x1cd720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD720_0x1cd720");
#endif

    ctx->pc = 0x1cd720u;

    // 0x1cd720: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1cd724: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1cd724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1cd728: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1cd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1cd72c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cd72cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd730: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1cd730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1cd734: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cd734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd738: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1cd738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1cd73c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1cd73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1cd740: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cd740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cd744: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1cd744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1cd748: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1cd748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1cd74c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1cd74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1cd750: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd758: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd75c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD760u;
    {
        const bool branch_taken_0x1cd760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD760u;
            // 0x1cd764: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd760) {
            ctx->pc = 0x1CD770u;
            goto label_1cd770;
        }
    }
    ctx->pc = 0x1CD768u;
    // 0x1cd768: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD768u;
    {
        const bool branch_taken_0x1cd768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD768u;
            // 0x1cd76c: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd768) {
            ctx->pc = 0x1CD790u;
            goto label_1cd790;
        }
    }
    ctx->pc = 0x1CD770u;
label_1cd770:
    // 0x1cd770: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cd774: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cd774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cd778: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cd778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cd77c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD77Cu;
    {
        const bool branch_taken_0x1cd77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CD780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD77Cu;
            // 0x1cd780: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd77c) {
            ctx->pc = 0x1CD790u;
            goto label_1cd790;
        }
    }
    ctx->pc = 0x1CD784u;
    // 0x1cd784: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CD784u;
    SET_GPR_U32(ctx, 31, 0x1CD78Cu);
    ctx->pc = 0x1CD788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD784u;
            // 0x1cd788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    }
    ctx->pc = 0x1CD78Cu;
    // 0x1cd78c: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1cd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cd790:
    // 0x1cd790: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x1cd790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1cd794: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1cd794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1cd798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd79c: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x1cd79cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd7a0: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd7a4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD7A4u;
    {
        const bool branch_taken_0x1cd7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CD7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7A4u;
            // 0x1cd7a8: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7a4) {
            ctx->pc = 0x1CD7B4u;
            goto label_1cd7b4;
        }
    }
    ctx->pc = 0x1CD7ACu;
    // 0x1cd7ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD7ACu;
    {
        const bool branch_taken_0x1cd7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7ACu;
            // 0x1cd7b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7ac) {
            ctx->pc = 0x1CD7D4u;
            goto label_1cd7d4;
        }
    }
    ctx->pc = 0x1CD7B4u;
label_1cd7b4:
    // 0x1cd7b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cd7b8: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1cd7b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cd7bc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cd7bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cd7c0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD7C0u;
    {
        const bool branch_taken_0x1cd7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CD7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7C0u;
            // 0x1cd7c4: 0x26270070  addiu       $a3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7c0) {
            ctx->pc = 0x1CD7D4u;
            goto label_1cd7d4;
        }
    }
    ctx->pc = 0x1CD7C8u;
    // 0x1cd7c8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CD7C8u;
    SET_GPR_U32(ctx, 31, 0x1CD7D0u);
    ctx->pc = 0x1CD7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7C8u;
            // 0x1cd7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7D0u; }
        if (ctx->pc != 0x1CD7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7D0u; }
        if (ctx->pc != 0x1CD7D0u) { return; }
    }
    ctx->pc = 0x1CD7D0u;
    // 0x1cd7d0: 0x26270070  addiu       $a3, $s1, 0x70
    ctx->pc = 0x1cd7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cd7d4:
    // 0x1cd7d4: 0x78e70030  lq          $a3, 0x30($a3)
    ctx->pc = 0x1cd7d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1cd7d8: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1cd7d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd7dc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1cd7dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1cd7e0: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1cd7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x1cd7e4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cd7e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cd7e8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1cd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cd7ec: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1cd7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd7f0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cd7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd7f4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cd7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd7f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd7fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd800: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cd800u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd804: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd80c: 0x46010544  c1          0x10544
    ctx->pc = 0x1cd80cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cd810: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1cd810u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x1cd814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cd814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cd818: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1cd818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cd81c: 0x4be11898  vmulx.xyzw  $vf2, $vf3, $vf1x
    ctx->pc = 0x1cd81cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd820: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1cd820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd824: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd828: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cd828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cd82c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cd82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cd830: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1cd830u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cd834: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd838: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cd83c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cd83cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cd840: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd844: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cd844u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cd848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd84c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1cd84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1cd850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cd850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd854: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cd854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cd858: 0xc0734c2  jal         func_1CD308
    ctx->pc = 0x1CD858u;
    SET_GPR_U32(ctx, 31, 0x1CD860u);
    ctx->pc = 0x1CD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD858u;
            // 0x1cd85c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD308u;
    if (runtime->hasFunction(0x1CD308u)) {
        auto targetFn = runtime->lookupFunction(0x1CD308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD860u; }
        if (ctx->pc != 0x1CD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD308_0x1cd308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD860u; }
        if (ctx->pc != 0x1CD860u) { return; }
    }
    ctx->pc = 0x1CD860u;
    // 0x1cd860: 0xc073484  jal         func_1CD210
    ctx->pc = 0x1CD860u;
    SET_GPR_U32(ctx, 31, 0x1CD868u);
    ctx->pc = 0x1CD864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD860u;
            // 0x1cd864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD210u;
    if (runtime->hasFunction(0x1CD210u)) {
        auto targetFn = runtime->lookupFunction(0x1CD210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD868u; }
        if (ctx->pc != 0x1CD868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD210_0x1cd210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD868u; }
        if (ctx->pc != 0x1CD868u) { return; }
    }
    ctx->pc = 0x1CD868u;
    // 0x1cd868: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1cd86c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1cd86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1cd870: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD870u;
    {
        const bool branch_taken_0x1cd870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD870u;
            // 0x1cd874: 0x7ba70060  lq          $a3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd870) {
            ctx->pc = 0x1CD890u;
            goto label_1cd890;
        }
    }
    ctx->pc = 0x1CD878u;
    // 0x1cd878: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cd878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cd87c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD87Cu;
    {
        const bool branch_taken_0x1cd87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD87Cu;
            // 0x1cd880: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd87c) {
            ctx->pc = 0x1CD8C0u;
            goto label_1cd8c0;
        }
    }
    ctx->pc = 0x1CD884u;
    // 0x1cd884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1cd884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cd888: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CD888u;
    {
        const bool branch_taken_0x1cd888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd888) {
            ctx->pc = 0x1CD88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD888u;
            // 0x1cd88c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD8C4u;
            goto label_1cd8c4;
        }
    }
    ctx->pc = 0x1CD890u;
label_1cd890:
    // 0x1cd890: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cd890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd894: 0x7ba80050  lq          $t0, 0x50($sp)
    ctx->pc = 0x1cd894u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd898: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1cd898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd89c: 0xc07340c  jal         func_1CD030
    ctx->pc = 0x1CD89Cu;
    SET_GPR_U32(ctx, 31, 0x1CD8A4u);
    ctx->pc = 0x1CD8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD89Cu;
            // 0x1cd8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD030u;
    if (runtime->hasFunction(0x1CD030u)) {
        auto targetFn = runtime->lookupFunction(0x1CD030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8A4u; }
        if (ctx->pc != 0x1CD8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD030_0x1cd030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8A4u; }
        if (ctx->pc != 0x1CD8A4u) { return; }
    }
    ctx->pc = 0x1CD8A4u;
    // 0x1cd8a4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8ac: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1cd8acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd8b0: 0xc0735a0  jal         func_1CD680
    ctx->pc = 0x1CD8B0u;
    SET_GPR_U32(ctx, 31, 0x1CD8B8u);
    ctx->pc = 0x1CD8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8B0u;
            // 0x1cd8b4: 0x70053ca9  por         $a3, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD680u;
    if (runtime->hasFunction(0x1CD680u)) {
        auto targetFn = runtime->lookupFunction(0x1CD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8B8u; }
        if (ctx->pc != 0x1CD8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD680_0x1cd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8B8u; }
        if (ctx->pc != 0x1CD8B8u) { return; }
    }
    ctx->pc = 0x1CD8B8u;
    // 0x1cd8b8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1CD8B8u;
    {
        const bool branch_taken_0x1cd8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8B8u;
            // 0x1cd8bc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8b8) {
            ctx->pc = 0x1CDB3Cu;
            goto label_1cdb3c;
        }
    }
    ctx->pc = 0x1CD8C0u;
label_1cd8c0:
    // 0x1cd8c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cd8c4:
    // 0x1cd8c4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd8c8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd8cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD8D4u);
        ctx->pc = 0x1CD8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8CCu;
            // 0x1cd8d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD8D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9E8u: goto label_1cd9e8;
            case 0x1CD9ECu: goto label_1cd9ec;
            case 0x1CDAB0u: goto label_1cdab0;
            case 0x1CDB00u: goto label_1cdb00;
            case 0x1CDB28u: goto label_1cdb28;
            case 0x1CDB3Cu: goto label_1cdb3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D4u; }
            if (ctx->pc != 0x1CD8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD8D4u;
    // 0x1cd8d4: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1cd8d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1cd8d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cd8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cd8dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8DCu;
            // 0x1cd8e0: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CD8F4u;
            goto label_1cd8f4;
        }
    }
    ctx->pc = 0x1CD8E4u;
    // 0x1cd8e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd8e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD8ECu;
    {
        const bool branch_taken_0x1cd8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8ECu;
            // 0x1cd8f0: 0x94420096  lhu         $v0, 0x96($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8ec) {
            ctx->pc = 0x1CD900u;
            goto label_1cd900;
        }
    }
    ctx->pc = 0x1CD8F4u;
label_1cd8f4:
    // 0x1cd8f4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cd8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd8f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd8fc: 0x94420094  lhu         $v0, 0x94($v0)
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
label_1cd900:
    // 0x1cd900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd908: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1cd90c: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1cd90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1cd910: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD910u;
    {
        const bool branch_taken_0x1cd910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD910u;
            // 0x1cd914: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd910) {
            ctx->pc = 0x1CD934u;
            goto label_1cd934;
        }
    }
    ctx->pc = 0x1CD918u;
    // 0x1cd918: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1cd918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd91c: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CD91Cu;
    {
        const bool branch_taken_0x1cd91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd91c) {
            ctx->pc = 0x1CD920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD91Cu;
            // 0x1cd920: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD9ECu;
            goto label_1cd9ec;
        }
    }
    ctx->pc = 0x1CD924u;
    // 0x1cd924: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1cd928: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cd928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cd92c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1CD92Cu;
    {
        const bool branch_taken_0x1cd92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD92Cu;
            // 0x1cd930: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd92c) {
            ctx->pc = 0x1CD9E8u;
            goto label_1cd9e8;
        }
    }
    ctx->pc = 0x1CD934u;
label_1cd934:
    // 0x1cd934: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cd938: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1cd938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1cd93c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1cd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1cd940: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD948u);
        ctx->pc = 0x1CD944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD940u;
            // 0x1cd944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD948u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9E8u: goto label_1cd9e8;
            case 0x1CD9ECu: goto label_1cd9ec;
            case 0x1CDAB0u: goto label_1cdab0;
            case 0x1CDB00u: goto label_1cdb00;
            case 0x1CDB28u: goto label_1cdb28;
            case 0x1CDB3Cu: goto label_1cdb3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD948u; }
            if (ctx->pc != 0x1CD948u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD948u;
    // 0x1cd948: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cd948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cd94c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd954: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cd954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cd958: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cd958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cd95c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cd95cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd960: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1cd960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd964: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1cd964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd968: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cd968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd96c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1cd96cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd970: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cd970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd974: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cd974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1cd978: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd980: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD980u;
    {
        const bool branch_taken_0x1cd980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD980u;
            // 0x1cd984: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd980) {
            ctx->pc = 0x1CD990u;
            goto label_1cd990;
        }
    }
    ctx->pc = 0x1CD988u;
    // 0x1cd988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD988u;
    {
        const bool branch_taken_0x1cd988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD988u;
            // 0x1cd98c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd988) {
            ctx->pc = 0x1CD9ACu;
            goto label_1cd9ac;
        }
    }
    ctx->pc = 0x1CD990u;
label_1cd990:
    // 0x1cd990: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1cd990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cd994: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cd994u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cd998: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD998u;
    {
        const bool branch_taken_0x1cd998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1cd998) {
            ctx->pc = 0x1CD99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD998u;
            // 0x1cd99c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD9ACu;
            goto label_1cd9ac;
        }
    }
    ctx->pc = 0x1CD9A0u;
    // 0x1cd9a0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CD9A0u;
    SET_GPR_U32(ctx, 31, 0x1CD9A8u);
    ctx->pc = 0x1CD9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9A0u;
            // 0x1cd9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9A8u; }
        if (ctx->pc != 0x1CD9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9A8u; }
        if (ctx->pc != 0x1CD9A8u) { return; }
    }
    ctx->pc = 0x1CD9A8u;
    // 0x1cd9a8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cd9ac:
    // 0x1cd9ac: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1cd9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cd9b0: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1cd9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd9b4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1cd9b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd9b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cd9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd9bc: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1cd9bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cd9c0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1cd9c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd9c4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1cd9c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd9c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cd9c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cd9cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cd9ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cd9d0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1cd9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd9d4: 0x4a0002ff  vnop
    ctx->pc = 0x1cd9d4u;
    // NOP operation, no action needed for VU0
    // 0x1cd9d8: 0x4a0002ff  vnop
    ctx->pc = 0x1cd9d8u;
    // NOP operation, no action needed for VU0
    // 0x1cd9dc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cd9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd9e0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1cd9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd9e4: 0x0  nop
    ctx->pc = 0x1cd9e4u;
    // NOP
label_1cd9e8:
    // 0x1cd9e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1cd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1cd9ec:
    // 0x1cd9ec: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cd9f0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cd9f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD9FCu);
        ctx->pc = 0x1CD9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9F4u;
            // 0x1cd9f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD9FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9E8u: goto label_1cd9e8;
            case 0x1CD9ECu: goto label_1cd9ec;
            case 0x1CDAB0u: goto label_1cdab0;
            case 0x1CDB00u: goto label_1cdb00;
            case 0x1CDB28u: goto label_1cdb28;
            case 0x1CDB3Cu: goto label_1cdb3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9FCu; }
            if (ctx->pc != 0x1CD9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD9FCu;
    // 0x1cd9fc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cda00: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1CDA00u;
    {
        const bool branch_taken_0x1cda00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA00u;
            // 0x1cda04: 0x7ba50020  lq          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda00) {
            ctx->pc = 0x1CDB28u;
            goto label_1cdb28;
        }
    }
    ctx->pc = 0x1CDA08u;
    // 0x1cda08: 0xda010030  lqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1cda08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cda0c: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cda0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cda10: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1cda10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cda14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cda14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda18: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cda18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cda1c: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1cda1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cda20: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cda20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda24: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cda24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda28: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
    // 0x1cda2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cda2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cda30: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cda30u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cda34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cda34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cda38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cda3c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1CDA3Cu;
    {
        const bool branch_taken_0x1cda3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cda3c) {
            ctx->pc = 0x1CDAB0u;
            goto label_1cdab0;
        }
    }
    ctx->pc = 0x1CDA44u;
    // 0x1cda44: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cda44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda48: 0x3c01c330  lui         $at, 0xC330
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49968 << 16));
    // 0x1cda4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cda4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cda50: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cda50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cda54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cda58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cda58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda5c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cda5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cda60: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDA60u;
    {
        const bool branch_taken_0x1cda60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cda60) {
            ctx->pc = 0x1CDAB0u;
            goto label_1cdab0;
        }
    }
    ctx->pc = 0x1CDA68u;
    // 0x1cda68: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1cda68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cda6c: 0x4be118aa  vmul.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1cda6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cda70: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cda70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda74: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cda74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda78: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cda78u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cda7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cda7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cda80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cda84: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CDA84u;
    {
        const bool branch_taken_0x1cda84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cda84) {
            ctx->pc = 0x1CDAB0u;
            goto label_1cdab0;
        }
    }
    ctx->pc = 0x1CDA8Cu;
    // 0x1cda8c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cda8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda90: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cda90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cda94: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cda94u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cda98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cda98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda9c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cda9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdaa0: 0x0  nop
    ctx->pc = 0x1cdaa0u;
    // NOP
    // 0x1cdaa4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDAA4u;
    {
        const bool branch_taken_0x1cdaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdaa4) {
            ctx->pc = 0x1CDAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAA4u;
            // 0x1cdaa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDAB0u;
            goto label_1cdab0;
        }
    }
    ctx->pc = 0x1CDAACu;
    // 0x1cdaac: 0x0  nop
    ctx->pc = 0x1cdaacu;
    // NOP
label_1cdab0:
    // 0x1cdab0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDAB0u;
    {
        const bool branch_taken_0x1cdab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAB0u;
            // 0x1cdab4: 0x7ba80040  lq          $t0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdab0) {
            ctx->pc = 0x1CDB00u;
            goto label_1cdb00;
        }
    }
    ctx->pc = 0x1CDAB8u;
    // 0x1cdab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdabc: 0x7ba90070  lq          $t1, 0x70($sp)
    ctx->pc = 0x1cdabcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cdac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cdac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdac8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1cdac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdacc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cdaccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cdad0: 0xc0732f2  jal         func_1CCBC8
    ctx->pc = 0x1CDAD0u;
    SET_GPR_U32(ctx, 31, 0x1CDAD8u);
    ctx->pc = 0x1CDAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAD0u;
            // 0x1cdad4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBC8u;
    if (runtime->hasFunction(0x1CCBC8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAD8u; }
        if (ctx->pc != 0x1CDAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCBC8_0x1ccbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAD8u; }
        if (ctx->pc != 0x1CDAD8u) { return; }
    }
    ctx->pc = 0x1CDAD8u;
    // 0x1cdad8: 0x7ba80040  lq          $t0, 0x40($sp)
    ctx->pc = 0x1cdad8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae0: 0x7ba90070  lq          $t1, 0x70($sp)
    ctx->pc = 0x1cdae0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cdae4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cdae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1cdae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cdaecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cdaf0: 0xc0731d0  jal         func_1CC740
    ctx->pc = 0x1CDAF0u;
    SET_GPR_U32(ctx, 31, 0x1CDAF8u);
    ctx->pc = 0x1CDAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAF0u;
            // 0x1cdaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    if (runtime->hasFunction(0x1CC740u)) {
        auto targetFn = runtime->lookupFunction(0x1CC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAF8u; }
        if (ctx->pc != 0x1CDAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC740_0x1cc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDAF8u; }
        if (ctx->pc != 0x1CDAF8u) { return; }
    }
    ctx->pc = 0x1CDAF8u;
    // 0x1cdaf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CDAF8u;
    {
        const bool branch_taken_0x1cdaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAF8u;
            // 0x1cdafc: 0x7ba50020  lq          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf8) {
            ctx->pc = 0x1CDB28u;
            goto label_1cdb28;
        }
    }
    ctx->pc = 0x1CDB00u;
label_1cdb00:
    // 0x1cdb00: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cdb00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdb04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb08: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cdb08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdb0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb10: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cdb10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cdb14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1cdb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb18: 0xc0731b8  jal         func_1CC6E0
    ctx->pc = 0x1CDB18u;
    SET_GPR_U32(ctx, 31, 0x1CDB20u);
    ctx->pc = 0x1CDB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB18u;
            // 0x1cdb1c: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6E0u;
    if (runtime->hasFunction(0x1CC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB20u; }
        if (ctx->pc != 0x1CDB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC6E0_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB20u; }
        if (ctx->pc != 0x1CDB20u) { return; }
    }
    ctx->pc = 0x1CDB20u;
    // 0x1cdb20: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1cdb20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdb24: 0x0  nop
    ctx->pc = 0x1cdb24u;
    // NOP
label_1cdb28:
    // 0x1cdb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb2c: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1cdb2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdb30: 0xc0735a0  jal         func_1CD680
    ctx->pc = 0x1CDB30u;
    SET_GPR_U32(ctx, 31, 0x1CDB38u);
    ctx->pc = 0x1CDB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB30u;
            // 0x1cdb34: 0x7ba70070  lq          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD680u;
    if (runtime->hasFunction(0x1CD680u)) {
        auto targetFn = runtime->lookupFunction(0x1CD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB38u; }
        if (ctx->pc != 0x1CDB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD680_0x1cd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB38u; }
        if (ctx->pc != 0x1CDB38u) { return; }
    }
    ctx->pc = 0x1CDB38u;
    // 0x1cdb38: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1cdb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1cdb3c:
    // 0x1cdb3c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cdb40: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1cdb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cdb44: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1cdb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdb48: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1cdb48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdb4c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cdb50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cdb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cdb54: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1cdb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cdb58: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1cdb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cdb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB5Cu;
            // 0x1cdb60: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9E8u: goto label_1cd9e8;
            case 0x1CD9ECu: goto label_1cd9ec;
            case 0x1CDAB0u: goto label_1cdab0;
            case 0x1CDB00u: goto label_1cdb00;
            case 0x1CDB28u: goto label_1cdb28;
            case 0x1CDB3Cu: goto label_1cdb3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDB64u;
    // 0x1cdb64: 0x0  nop
    ctx->pc = 0x1cdb64u;
    // NOP
}
