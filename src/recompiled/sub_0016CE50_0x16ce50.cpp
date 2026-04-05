#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CE50
// Address: 0x16ce50 - 0x16d010
void sub_0016CE50_0x16ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CE50_0x16ce50");
#endif

    ctx->pc = 0x16ce50u;

    // 0x16ce50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x16ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16ce54: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x16ce54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce58: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x16ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16ce5c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x16ce5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16ce60: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x16ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16ce64: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x16ce64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce68: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x16ce68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x16ce6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16ce6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce70: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16ce74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x16ce74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x16ce78: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x16ce78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16ce7c: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x16ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x16ce80: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x16ce80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ce84: 0x8c8c002c  lw          $t4, 0x2C($a0)
    ctx->pc = 0x16ce84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16ce88: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x16ce8c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ce90: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x16ce90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x16ce94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ce98: 0x70a71b89  pcpyld      $v1, $a1, $a3
    ctx->pc = 0x16ce98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x16ce9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cea0: 0x71022b89  pcpyld      $a1, $t0, $v0
    ctx->pc = 0x16cea0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x16cea4: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x16cea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x16cea8: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x16cea8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x16ceac: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x16ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x16ceb0: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x16ceb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ceb4: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x16ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x16ceb8: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x16cebc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x16cebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cec0: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16cec0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16cec4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16cec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cec8: 0x70c81b89  pcpyld      $v1, $a2, $t0
    ctx->pc = 0x16cec8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x16cecc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ced0: 0x71623389  pcpyld      $a2, $t3, $v0
    ctx->pc = 0x16ced0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16ced4: 0x95220008  lhu         $v0, 0x8($t1)
    ctx->pc = 0x16ced4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x16ced8: 0x70c334c8  ppacw       $a2, $a2, $v1
    ctx->pc = 0x16ced8u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x16cedc: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x16cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x16cee0: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x16cee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16cee4: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x16cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x16cee8: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x16ceec: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x16ceecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cef0: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x16cef0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cef4: 0x70eb1b89  pcpyld      $v1, $a3, $t3
    ctx->pc = 0x16cef4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x16cef8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cefc: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16cf00: 0x71623b89  pcpyld      $a3, $t3, $v0
    ctx->pc = 0x16cf00u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16cf04: 0x9522000a  lhu         $v0, 0xA($t1)
    ctx->pc = 0x16cf04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x16cf08: 0x70e33cc8  ppacw       $a3, $a3, $v1
    ctx->pc = 0x16cf08u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x16cf0c: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x16cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x16cf10: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x16cf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16cf14: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x16cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x16cf18: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x16cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x16cf1c: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x16cf1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16cf20: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cf24: 0x712a1b89  pcpyld      $v1, $t1, $t2
    ctx->pc = 0x16cf24u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x16cf28: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16cf2c: 0x71621389  pcpyld      $v0, $t3, $v0
    ctx->pc = 0x16cf2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16cf30: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x16cf30u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16cf34: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x16cf34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16cf38: 0x700244a9  por         $t0, $zero, $v0
    ctx->pc = 0x16cf38u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x16cf3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x16cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x16cf40: 0xc05ba1c  jal         func_16E870
    ctx->pc = 0x16CF40u;
    SET_GPR_U32(ctx, 31, 0x16CF48u);
    ctx->pc = 0x16CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF40u;
            // 0x16cf44: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E870u;
    if (runtime->hasFunction(0x16E870u)) {
        auto targetFn = runtime->lookupFunction(0x16E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF48u; }
        if (ctx->pc != 0x16CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16e870_0x16ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF48u; }
        if (ctx->pc != 0x16CF48u) { return; }
    }
    ctx->pc = 0x16CF48u;
    // 0x16cf48: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x16cf48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16cf4c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x16cf4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16cf50: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x16cf50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cf54: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x16cf54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cf58: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16cf58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cf5c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16cf5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cf60: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x16cf60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x16cf64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16cf64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16cf68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cf6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16cf6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cf70: 0x0  nop
    ctx->pc = 0x16cf70u;
    // NOP
    // 0x16cf74: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x16CF74u;
    {
        const bool branch_taken_0x16cf74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF74u;
            // 0x16cf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf74) {
            ctx->pc = 0x16CFF0u;
            goto label_16cff0;
        }
    }
    ctx->pc = 0x16CF7Cu;
    // 0x16cf7c: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x16cf7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cf80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cf84: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x16cf84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16cf88: 0x4be3092c  vsub.xyzw   $vf4, $vf1, $vf3
    ctx->pc = 0x16cf88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cf8c: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x16cf8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16cf90: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x16cf90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cf94: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x16cf94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cf98: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x16cf98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cf9c: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x16cf9cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x16cfa0: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x16cfa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16cfa4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16cfa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cfa8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x16cfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16cfac: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16cfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cfb0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16cfb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cfb4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x16cfb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x16cfb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cfb8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16cfbc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x16cfbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cfc0: 0x4a0002ff  vnop
    ctx->pc = 0x16cfc0u;
    // NOP operation, no action needed for VU0
    // 0x16cfc4: 0x4a0002ff  vnop
    ctx->pc = 0x16cfc4u;
    // NOP operation, no action needed for VU0
    // 0x16cfc8: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x16cfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16cfcc: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x16cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16cfd0: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x16cfd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cfd4: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x16cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16cfd8: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x16cfd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16cfdc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16cfdcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16cfe0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x16cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x16cfe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CFE4u;
    {
        const bool branch_taken_0x16cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFE4u;
            // 0x16cfe8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe4) {
            ctx->pc = 0x16CFF8u;
            goto label_16cff8;
        }
    }
    ctx->pc = 0x16CFECu;
    // 0x16cfec: 0x0  nop
    ctx->pc = 0x16cfecu;
    // NOP
label_16cff0:
    // 0x16cff0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x16cff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16cff4: 0x0  nop
    ctx->pc = 0x16cff4u;
    // NOP
label_16cff8:
    // 0x16cff8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x16cff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16cffc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16cffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d000: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x16d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d004: 0x3e00008  jr          $ra
    ctx->pc = 0x16D004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D004u;
            // 0x16d008: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CFF0u: goto label_16cff0;
            case 0x16CFF8u: goto label_16cff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D00Cu;
    // 0x16d00c: 0x0  nop
    ctx->pc = 0x16d00cu;
    // NOP
}
