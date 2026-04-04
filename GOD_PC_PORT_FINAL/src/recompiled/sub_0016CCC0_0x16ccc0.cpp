#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CCC0
// Address: 0x16ccc0 - 0x16ce50
void sub_0016CCC0_0x16ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CCC0_0x16ccc0");
#endif

    ctx->pc = 0x16ccc0u;

    // 0x16ccc0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16ccc4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x16ccc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccc8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16cccc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16ccd0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x16ccd4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x16ccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccd8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x16ccd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16ccdc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16ccdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cce0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16cce4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x16cce4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16cce8: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x16cce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16ccec: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x16ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x16ccf0: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x16ccf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ccf4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16ccf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16ccfc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cd00: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16cd04: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cd08: 0x70a81b89  pcpyld      $v1, $a1, $t0
    ctx->pc = 0x16cd08u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x16cd0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cd10: 0x71622b89  pcpyld      $a1, $t3, $v0
    ctx->pc = 0x16cd10u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16cd14: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x16cd14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x16cd18: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x16cd18u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x16cd1c: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x16cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x16cd20: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x16cd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16cd24: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x16cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x16cd28: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cd2c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x16cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cd30: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cd34: 0x70cb1b89  pcpyld      $v1, $a2, $t3
    ctx->pc = 0x16cd34u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
    // 0x16cd38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cd3c: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16cd40: 0x71623389  pcpyld      $a2, $t3, $v0
    ctx->pc = 0x16cd40u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16cd44: 0x95220008  lhu         $v0, 0x8($t1)
    ctx->pc = 0x16cd44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x16cd48: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x16cd48u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x16cd4c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x16cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x16cd50: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x16cd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16cd54: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x16cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x16cd58: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x16cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16cd5c: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cd60: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cd64: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x16cd64u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x16cd68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cd6c: 0x71621389  pcpyld      $v0, $t3, $v0
    ctx->pc = 0x16cd6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16cd70: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x16cd70u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16cd74: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x16cd74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cd78: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x16cd78u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x16cd7c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16cd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x16cd80: 0xc05b97a  jal         func_16E5E8
    ctx->pc = 0x16CD80u;
    SET_GPR_U32(ctx, 31, 0x16CD88u);
    ctx->pc = 0x16CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD80u;
            // 0x16cd84: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E8u;
    if (runtime->hasFunction(0x16E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD88u; }
        if (ctx->pc != 0x16CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16e5e8_0x16e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD88u; }
        if (ctx->pc != 0x16CD88u) { return; }
    }
    ctx->pc = 0x16CD88u;
    // 0x16cd88: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x16cd88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cd8c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x16cd8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16cd90: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x16cd90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cd94: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x16cd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cd98: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16cd98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cd9c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16cd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cda0: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x16cda0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x16cda4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16cda4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16cda8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cdac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16cdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cdb0: 0x0  nop
    ctx->pc = 0x16cdb0u;
    // NOP
    // 0x16cdb4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x16CDB4u;
    {
        const bool branch_taken_0x16cdb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDB4u;
            // 0x16cdb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdb4) {
            ctx->pc = 0x16CE30u;
            goto label_16ce30;
        }
    }
    ctx->pc = 0x16CDBCu;
    // 0x16cdbc: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x16cdbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdc4: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x16cdc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cdc8: 0x4be3092c  vsub.xyzw   $vf4, $vf1, $vf3
    ctx->pc = 0x16cdc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cdcc: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x16cdccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cdd0: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x16cdd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16cdd4: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x16cdd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cdd8: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x16cdd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cddc: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x16cddcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x16cde0: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x16cde0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16cde4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16cde4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cde8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x16cde8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16cdec: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16cdecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cdf0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16cdf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cdf4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x16cdf4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x16cdf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cdf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16cdfc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x16cdfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ce00: 0x4a0002ff  vnop
    ctx->pc = 0x16ce00u;
    // NOP operation, no action needed for VU0
    // 0x16ce04: 0x4a0002ff  vnop
    ctx->pc = 0x16ce04u;
    // NOP operation, no action needed for VU0
    // 0x16ce08: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x16ce08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ce0c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x16ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ce10: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x16ce10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ce14: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x16ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ce18: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x16ce18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ce1c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16ce1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ce20: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x16ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x16ce24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CE24u;
    {
        const bool branch_taken_0x16ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE24u;
            // 0x16ce28: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce24) {
            ctx->pc = 0x16CE38u;
            goto label_16ce38;
        }
    }
    ctx->pc = 0x16CE2Cu;
    // 0x16ce2c: 0x0  nop
    ctx->pc = 0x16ce2cu;
    // NOP
label_16ce30:
    // 0x16ce30: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16ce30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ce34: 0x0  nop
    ctx->pc = 0x16ce34u;
    // NOP
label_16ce38:
    // 0x16ce38: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16ce38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ce3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16ce3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ce40: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ce44: 0x3e00008  jr          $ra
    ctx->pc = 0x16CE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE44u;
            // 0x16ce48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CE30u: goto label_16ce30;
            case 0x16CE38u: goto label_16ce38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CE4Cu;
    // 0x16ce4c: 0x0  nop
    ctx->pc = 0x16ce4cu;
    // NOP
}
