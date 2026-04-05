#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEAB8
// Address: 0x1beab8 - 0x1beea8
void sub_001BEAB8_0x1beab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAB8_0x1beab8");
#endif

    ctx->pc = 0x1beab8u;

    // 0x1beab8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1beab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1beabc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1beabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1beac0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1beac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1beac4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1beac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beac8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1beac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1beacc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1beaccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bead0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1bead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1bead4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x1bead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x1bead8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bead8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beadc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1beadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1beae0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1beae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1beae4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1beae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1beae8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1beae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1beaec: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1beaecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1beaf0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1beaf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1beaf4: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x1beaf8: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1beaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x1beafc: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1beb00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1beb04: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1beb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1beb08: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1beb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1beb0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEB0Cu;
    {
        const bool branch_taken_0x1beb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB0Cu;
            // 0x1beb10: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb0c) {
            ctx->pc = 0x1BEB28u;
            goto label_1beb28;
        }
    }
    ctx->pc = 0x1BEB14u;
    // 0x1beb14: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1beb18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1beb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEB1Cu;
    {
        const bool branch_taken_0x1beb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB1Cu;
            // 0x1beb20: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb1c) {
            ctx->pc = 0x1BEB2Cu;
            goto label_1beb2c;
        }
    }
    ctx->pc = 0x1BEB24u;
    // 0x1beb24: 0x0  nop
    ctx->pc = 0x1beb24u;
    // NOP
label_1beb28:
    // 0x1beb28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1beb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1beb2c:
    // 0x1beb2c: 0x120000d1  beqz        $s0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1BEB2Cu;
    {
        const bool branch_taken_0x1beb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB2Cu;
            // 0x1beb30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb2c) {
            ctx->pc = 0x1BEE74u;
            goto label_1bee74;
        }
    }
    ctx->pc = 0x1BEB34u;
    // 0x1beb34: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1beb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1beb38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEB38u;
    {
        const bool branch_taken_0x1beb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB38u;
            // 0x1beb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb38) {
            ctx->pc = 0x1BEB44u;
            goto label_1beb44;
        }
    }
    ctx->pc = 0x1BEB40u;
    // 0x1beb40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1beb44:
    // 0x1beb44: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x1beb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1beb48: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1beb4c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1BEB4Cu;
    {
        const bool branch_taken_0x1beb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB4Cu;
            // 0x1beb50: 0xdba10040  lqc2        $vf1, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb4c) {
            ctx->pc = 0x1BED30u;
            goto label_1bed30;
        }
    }
    ctx->pc = 0x1BEB54u;
    // 0x1beb54: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x1beb54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1beb58: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1beb58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1beb5c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1beb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1beb60: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1beb60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1beb64: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1beb64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1beb68: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1beb68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1beb6c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1beb6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1beb70: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1beb70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1beb74: 0x4a0003bf  vwaitq
    ctx->pc = 0x1beb74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1beb78: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1beb78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1beb7c: 0x4a0002ff  vnop
    ctx->pc = 0x1beb7cu;
    // NOP operation, no action needed for VU0
    // 0x1beb80: 0x4a0002ff  vnop
    ctx->pc = 0x1beb80u;
    // NOP operation, no action needed for VU0
    // 0x1beb84: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1beb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1beb88: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1beb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1beb8c: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1beb8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1beb90: 0xd8810050  lqc2        $vf1, 0x50($a0)
    ctx->pc = 0x1beb90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1beb94: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1beb94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1beb98: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1beb98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1beb9c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1beb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1beba0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1beba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1beba4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1beba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1beba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1beba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bebac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1bebacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1bebb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bebb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bebbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bebbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bebc0: 0x46000004  c1          0x4
    ctx->pc = 0x1bebc0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bebc4: 0xc058912  jal         func_162448
    ctx->pc = 0x1BEBC4u;
    SET_GPR_U32(ctx, 31, 0x1BEBCCu);
    ctx->pc = 0x1BEBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBC4u;
            // 0x1bebc8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x162448u;
    if (runtime->hasFunction(0x162448u)) {
        auto targetFn = runtime->lookupFunction(0x162448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBCCu; }
        if (ctx->pc != 0x1BEBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162448_0x162470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBCCu; }
        if (ctx->pc != 0x1BEBCCu) { return; }
    }
    ctx->pc = 0x1BEBCCu;
    // 0x1bebcc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1bebccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1bebd0: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x1bebd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bebd4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1BEBD4u;
    {
        const bool branch_taken_0x1bebd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bebd4) {
            ctx->pc = 0x1BEC08u;
            goto label_1bec08;
        }
    }
    ctx->pc = 0x1BEBDCu;
    // 0x1bebdc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1bebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1bebe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bebe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bebe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bebe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebe8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bebe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bebec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bebecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bebf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bebf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bebf4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bebf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bebf8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1bebf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1bebfc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1bebfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1bec00: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1bec00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1bec04: 0x0  nop
    ctx->pc = 0x1bec04u;
    // NOP
label_1bec08:
    // 0x1bec08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bec08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec0c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1bec0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bec10: 0x0  nop
    ctx->pc = 0x1bec10u;
    // NOP
    // 0x1bec14: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1BEC14u;
    {
        const bool branch_taken_0x1bec14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC14u;
            // 0x1bec18: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec14) {
            ctx->pc = 0x1BED30u;
            goto label_1bed30;
        }
    }
    ctx->pc = 0x1BEC1Cu;
    // 0x1bec1c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x1bec20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bec20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1bec28: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1bec2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1bec2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bec30: 0xace5f170  sw          $a1, -0xE90($a3)
    ctx->pc = 0x1bec30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 5));
    // 0x1bec34: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1bec38: 0x3c030d33  lui         $v1, 0xD33
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3379 << 16));
    // 0x1bec3c: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x1bec40: 0x34630042  ori         $v1, $v1, 0x42
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)66);
    // 0x1bec44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bec48: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1bec48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1bec4c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1bec4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1bec50: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1bec50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1bec54: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1bec54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1bec58: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1bec58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1bec5c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1bec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1bec60: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1bec60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1bec64: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1bec64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1bec68: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1bec68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1bec6c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1bec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1bec70: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1bec70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1bec74: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bec74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec78: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1bec78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bec7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bec80: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1bec80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bec84: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1bec88: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1bec88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1bec8c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1bec8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bec90: 0xc047864  jal         func_11E190
    ctx->pc = 0x1BEC90u;
    SET_GPR_U32(ctx, 31, 0x1BEC98u);
    ctx->pc = 0x1BEC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC90u;
            // 0x1bec94: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC98u; }
        if (ctx->pc != 0x1BEC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC98u; }
        if (ctx->pc != 0x1BEC98u) { return; }
    }
    ctx->pc = 0x1BEC98u;
    // 0x1bec98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BEC98u;
    {
        const bool branch_taken_0x1bec98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC98u;
            // 0x1bec9c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec98) {
            ctx->pc = 0x1BECD8u;
            goto label_1becd8;
        }
    }
    ctx->pc = 0x1BECA0u;
    // 0x1beca0: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1beca4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1beca4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beca8: 0xd842fff0  lqc2        $vf2, -0x10($v0)
    ctx->pc = 0x1beca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x1becac: 0x4be218aa  vmul.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1becacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1becb0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1becb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1becb4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1becb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1becb8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1becb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1becbc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1becbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1becc0: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1becc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1becc4: 0x4a2110c0  vaddx.w     $vf3, $vf2, $vf1x
    ctx->pc = 0x1becc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1becc8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1becc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1beccc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BECCCu;
    {
        const bool branch_taken_0x1beccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECCCu;
            // 0x1becd0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beccc) {
            ctx->pc = 0x1BED30u;
            goto label_1bed30;
        }
    }
    ctx->pc = 0x1BECD4u;
    // 0x1becd4: 0x0  nop
    ctx->pc = 0x1becd4u;
    // NOP
label_1becd8:
    // 0x1becd8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BECD8u;
    {
        const bool branch_taken_0x1becd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECD8u;
            // 0x1becdc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becd8) {
            ctx->pc = 0x1BED4Cu;
            goto label_1bed4c;
        }
    }
    ctx->pc = 0x1BECE0u;
    // 0x1bece0: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bece4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1bece8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BECE8u;
    {
        const bool branch_taken_0x1bece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECE8u;
            // 0x1becec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bece8) {
            ctx->pc = 0x1BED30u;
            goto label_1bed30;
        }
    }
    ctx->pc = 0x1BECF0u;
    // 0x1becf0: 0xda230210  lqc2        $vf3, 0x210($s1)
    ctx->pc = 0x1becf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1becf4: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1becf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1becf8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1BECF8u;
    SET_GPR_U32(ctx, 31, 0x1BED00u);
    ctx->pc = 0x1BECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECF8u;
            // 0x1becfc: 0xfba30050  sqc2        $vf3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED00u; }
        if (ctx->pc != 0x1BED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED00u; }
        if (ctx->pc != 0x1BED00u) { return; }
    }
    ctx->pc = 0x1BED00u;
    // 0x1bed00: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1bed00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1bed04: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1bed04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bed08: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1bed08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bed0c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1bed0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bed10: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1bed10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bed14: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1bed14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1bed18: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x1bed18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bed1c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1bed1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bed20: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1bed20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bed24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bed24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed28: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1bed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bed2c: 0x0  nop
    ctx->pc = 0x1bed2cu;
    // NOP
label_1bed30:
    // 0x1bed30: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED30u;
    {
        const bool branch_taken_0x1bed30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED30u;
            // 0x1bed34: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed30) {
            ctx->pc = 0x1BED4Cu;
            goto label_1bed4c;
        }
    }
    ctx->pc = 0x1BED38u;
    // 0x1bed38: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bed3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bed40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bed44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bed48: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x1bed48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_1bed4c:
    // 0x1bed4c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BED4Cu;
    {
        const bool branch_taken_0x1bed4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED4Cu;
            // 0x1bed50: 0xae12014c  sw          $s2, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed4c) {
            ctx->pc = 0x1BED64u;
            goto label_1bed64;
        }
    }
    ctx->pc = 0x1BED54u;
    // 0x1bed54: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1bed58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bed5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED5Cu;
    {
        const bool branch_taken_0x1bed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED5Cu;
            // 0x1bed60: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed5c) {
            ctx->pc = 0x1BED78u;
            goto label_1bed78;
        }
    }
    ctx->pc = 0x1BED64u;
label_1bed64:
    // 0x1bed64: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1bed68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bed6c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1bed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1bed70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bed70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bed74: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x1bed74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_1bed78:
    // 0x1bed78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1bed78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bed7c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BED7Cu;
    {
        const bool branch_taken_0x1bed7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED7Cu;
            // 0x1bed80: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed7c) {
            ctx->pc = 0x1BEDCCu;
            goto label_1bedcc;
        }
    }
    ctx->pc = 0x1BED84u;
    // 0x1bed84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bed84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed88: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1bed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1bed8c: 0x0  nop
    ctx->pc = 0x1bed8cu;
    // NOP
label_1bed90:
    // 0x1bed90: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x1bed90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bed94: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1bed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1bed98: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bed9c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BED9Cu;
    {
        const bool branch_taken_0x1bed9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED9Cu;
            // 0x1beda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed9c) {
            ctx->pc = 0x1BEDBCu;
            goto label_1bedbc;
        }
    }
    ctx->pc = 0x1BEDA4u;
    // 0x1beda4: 0xc07f432  jal         func_1FD0C8
    ctx->pc = 0x1BEDA4u;
    SET_GPR_U32(ctx, 31, 0x1BEDACu);
    ctx->pc = 0x1BEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDA4u;
            // 0x1beda8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0C8u;
    if (runtime->hasFunction(0x1FD0C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDACu; }
        if (ctx->pc != 0x1BEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd0c8_0x1fd0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDACu; }
        if (ctx->pc != 0x1BEDACu) { return; }
    }
    ctx->pc = 0x1BEDACu;
    // 0x1bedac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1bedacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bedb0: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x1bedb0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bedb4: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x1bedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x1bedb8: 0x7e070070  sq          $a3, 0x70($s0)
    ctx->pc = 0x1bedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 7));
label_1bedbc:
    // 0x1bedbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bedbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bedc0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1bedc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bedc4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BEDC4u;
    {
        const bool branch_taken_0x1bedc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDC4u;
            // 0x1bedc8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedc4) {
            ctx->pc = 0x1BED90u;
            runtime->cooperativeGuestYield();
            goto label_1bed90;
        }
    }
    ctx->pc = 0x1BEDCCu;
label_1bedcc:
    // 0x1bedcc: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x1bedd0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bedd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bedd8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1beddc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bede0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BEDE0u;
    {
        const bool branch_taken_0x1bede0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDE0u;
            // 0x1bede4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bede0) {
            ctx->pc = 0x1BEE78u;
            goto label_1bee78;
        }
    }
    ctx->pc = 0x1BEDE8u;
    // 0x1bede8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1bede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedec: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BEDECu;
    {
        const bool branch_taken_0x1bedec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bedec) {
            ctx->pc = 0x1BEDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDECu;
            // 0x1bedf0: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEE7Cu;
            goto label_1bee7c;
        }
    }
    ctx->pc = 0x1BEDF4u;
    // 0x1bedf4: 0x2483ffec  addiu       $v1, $a0, -0x14
    ctx->pc = 0x1bedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1bedf8:
    // 0x1bedf8: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x1bedf8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bedfc: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x1bee00: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x1bee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1bee04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bee04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bee08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bee0c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1bee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1bee10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEE10u;
    {
        const bool branch_taken_0x1bee10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE10u;
            // 0x1bee14: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee10) {
            ctx->pc = 0x1BEE28u;
            goto label_1bee28;
        }
    }
    ctx->pc = 0x1BEE18u;
    // 0x1bee18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEE1Cu;
    {
        const bool branch_taken_0x1bee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE1Cu;
            // 0x1bee20: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee1c) {
            ctx->pc = 0x1BEE2Cu;
            goto label_1bee2c;
        }
    }
    ctx->pc = 0x1BEE24u;
    // 0x1bee24: 0x0  nop
    ctx->pc = 0x1bee24u;
    // NOP
label_1bee28:
    // 0x1bee28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bee28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bee2c:
    // 0x1bee2c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1BEE2Cu;
    {
        const bool branch_taken_0x1bee2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee2c) {
            ctx->pc = 0x1BEE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE2Cu;
            // 0x1bee30: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEE6Cu;
            goto label_1bee6c;
        }
    }
    ctx->pc = 0x1BEE34u;
    // 0x1bee34: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEE34u;
    {
        const bool branch_taken_0x1bee34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE34u;
            // 0x1bee38: 0xacb2014c  sw          $s2, 0x14C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee34) {
            ctx->pc = 0x1BEE4Cu;
            goto label_1bee4c;
        }
    }
    ctx->pc = 0x1BEE3Cu;
    // 0x1bee3c: 0x8ca20148  lw          $v0, 0x148($a1)
    ctx->pc = 0x1bee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x1bee40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bee44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEE44u;
    {
        const bool branch_taken_0x1bee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE44u;
            // 0x1bee48: 0xaca20148  sw          $v0, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee44) {
            ctx->pc = 0x1BEE60u;
            goto label_1bee60;
        }
    }
    ctx->pc = 0x1BEE4Cu;
label_1bee4c:
    // 0x1bee4c: 0x8ca30148  lw          $v1, 0x148($a1)
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x1bee50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bee54: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1bee54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1bee58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bee5c: 0xaca30148  sw          $v1, 0x148($a1)
    ctx->pc = 0x1bee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 3));
label_1bee60:
    // 0x1bee60: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1bee60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bee64: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x1bee64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x1bee68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bee6c:
    // 0x1bee6c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BEE6Cu;
    {
        const bool branch_taken_0x1bee6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE6Cu;
            // 0x1bee70: 0x2483ffec  addiu       $v1, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee6c) {
            ctx->pc = 0x1BEDF8u;
            runtime->cooperativeGuestYield();
            goto label_1bedf8;
        }
    }
    ctx->pc = 0x1BEE74u;
label_1bee74:
    // 0x1bee74: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1bee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bee78:
    // 0x1bee78: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1bee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bee7c:
    // 0x1bee7c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1bee7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bee80: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1bee80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bee84: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1bee84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bee88: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1bee88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bee8c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1bee8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bee90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bee94: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1bee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bee98: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1bee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE9Cu;
            // 0x1beea0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEB28u: goto label_1beb28;
            case 0x1BEB2Cu: goto label_1beb2c;
            case 0x1BEB44u: goto label_1beb44;
            case 0x1BEC08u: goto label_1bec08;
            case 0x1BECD8u: goto label_1becd8;
            case 0x1BED30u: goto label_1bed30;
            case 0x1BED4Cu: goto label_1bed4c;
            case 0x1BED64u: goto label_1bed64;
            case 0x1BED78u: goto label_1bed78;
            case 0x1BED90u: goto label_1bed90;
            case 0x1BEDBCu: goto label_1bedbc;
            case 0x1BEDCCu: goto label_1bedcc;
            case 0x1BEDF8u: goto label_1bedf8;
            case 0x1BEE28u: goto label_1bee28;
            case 0x1BEE2Cu: goto label_1bee2c;
            case 0x1BEE4Cu: goto label_1bee4c;
            case 0x1BEE60u: goto label_1bee60;
            case 0x1BEE6Cu: goto label_1bee6c;
            case 0x1BEE74u: goto label_1bee74;
            case 0x1BEE78u: goto label_1bee78;
            case 0x1BEE7Cu: goto label_1bee7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BEEA4u;
    // 0x1beea4: 0x0  nop
    ctx->pc = 0x1beea4u;
    // NOP
}
