#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C6A0
// Address: 0x13c6a0 - 0x13ca50
void sub_0013C6A0_0x13c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6A0_0x13c6a0");
#endif

    ctx->pc = 0x13c6a0u;

    // 0x13c6a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13c6a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x13c6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c6ac: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x13c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x13c6b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x13c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x13c6b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x13c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x13c6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x13c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x13c6c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13c6cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13c6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x13c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x13c6d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13c6d8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x13c6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13c6dc: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x13c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13c6e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13c6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c6e4: 0x0  nop
    ctx->pc = 0x13c6e4u;
    // NOP
    // 0x13c6e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C6E8u;
    {
        const bool branch_taken_0x13c6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6E8u;
            // 0x13c6ec: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6e8) {
            ctx->pc = 0x13C6F4u;
            goto label_13c6f4;
        }
    }
    ctx->pc = 0x13C6F0u;
    // 0x13c6f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13c6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13c6f4:
    // 0x13c6f4: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x13c6f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13c6f8: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x13c6f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x13c6fc: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x13c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13c700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13c700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c704: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x13c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13c708: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13c708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c70c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c714: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13c714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c718: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13c718u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c71c: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x13c71cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c720: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x13c720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c724: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13c724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c728: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13c728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c72c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x13c72cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13c730: 0x4a0003bf  vwaitq
    ctx->pc = 0x13c730u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13c734: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x13c734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c738: 0x4a0002ff  vnop
    ctx->pc = 0x13c738u;
    // NOP operation, no action needed for VU0
    // 0x13c73c: 0x4a0002ff  vnop
    ctx->pc = 0x13c73cu;
    // NOP operation, no action needed for VU0
    // 0x13c740: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x13c740u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x13c744: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x13c744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c748: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x13c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c74c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c750: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x13c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c754: 0x4be4185b  vmulw.xyzw  $vf1, $vf3, $vf4w
    ctx->pc = 0x13c754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c758: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x13c758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c75c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13c75cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13c760: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13c760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c764: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x13c768: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x13C768u;
    {
        const bool branch_taken_0x13c768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C768u;
            // 0x13c76c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c768) {
            ctx->pc = 0x13C8C0u;
            goto label_13c8c0;
        }
    }
    ctx->pc = 0x13C770u;
    // 0x13c770: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13c774: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x13c778: 0x2449f170  addiu       $t1, $v0, -0xE90
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13c77c: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x13c77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c780: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x13c780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c784: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x13c784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c788: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x13c788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c78c: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x13c78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c790: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x13c790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c794: 0xb1240007  sdl         $a0, 0x7($t1)
    ctx->pc = 0x13c794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c798: 0xb5240000  sdr         $a0, 0x0($t1)
    ctx->pc = 0x13c798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c79c: 0xb125000f  sdl         $a1, 0xF($t1)
    ctx->pc = 0x13c79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7a0: 0xb5250008  sdr         $a1, 0x8($t1)
    ctx->pc = 0x13c7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7a4: 0xb1270017  sdl         $a3, 0x17($t1)
    ctx->pc = 0x13c7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7a8: 0xb5270010  sdr         $a3, 0x10($t1)
    ctx->pc = 0x13c7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7ac: 0x6904001f  ldl         $a0, 0x1F($t0)
    ctx->pc = 0x13c7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c7b0: 0x6d040018  ldr         $a0, 0x18($t0)
    ctx->pc = 0x13c7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c7b4: 0x69050027  ldl         $a1, 0x27($t0)
    ctx->pc = 0x13c7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c7b8: 0x6d050020  ldr         $a1, 0x20($t0)
    ctx->pc = 0x13c7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c7bc: 0xb124001f  sdl         $a0, 0x1F($t1)
    ctx->pc = 0x13c7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7c0: 0xb5240018  sdr         $a0, 0x18($t1)
    ctx->pc = 0x13c7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7c4: 0xb1250027  sdl         $a1, 0x27($t1)
    ctx->pc = 0x13c7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7c8: 0xb5250020  sdr         $a1, 0x20($t1)
    ctx->pc = 0x13c7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c7cc: 0x24c37790  addiu       $v1, $a2, 0x7790
    ctx->pc = 0x13c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13c7d0: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x13c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c7d4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c7d8: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x13c7d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13c7dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c7e0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13c7e4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13c7e8: 0x9645000a  lhu         $a1, 0xA($s2)
    ctx->pc = 0x13c7e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x13c7ec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C7ECu;
    {
        const bool branch_taken_0x13c7ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7ECu;
            // 0x13c7f0: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7ec) {
            ctx->pc = 0x13C800u;
            goto label_13c800;
        }
    }
    ctx->pc = 0x13C7F4u;
    // 0x13c7f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C7F4u;
    {
        const bool branch_taken_0x13c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7F4u;
            // 0x13c7f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f4) {
            ctx->pc = 0x13C81Cu;
            goto label_13c81c;
        }
    }
    ctx->pc = 0x13C7FCu;
    // 0x13c7fc: 0x0  nop
    ctx->pc = 0x13c7fcu;
    // NOP
label_13c800:
    // 0x13c800: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x13c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13c804: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x13c804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13c808: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c80c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13c810: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c810u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c814: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c818: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13c81c:
    // 0x13c81c: 0x24c27790  addiu       $v0, $a2, 0x7790
    ctx->pc = 0x13c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13c820: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13c824: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x13c824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x13c828: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C828u;
    {
        const bool branch_taken_0x13c828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C828u;
            // 0x13c82c: 0x96450008  lhu         $a1, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c828) {
            ctx->pc = 0x13C838u;
            goto label_13c838;
        }
    }
    ctx->pc = 0x13C830u;
    // 0x13c830: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C830u;
    {
        const bool branch_taken_0x13c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C830u;
            // 0x13c834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c830) {
            ctx->pc = 0x13C858u;
            goto label_13c858;
        }
    }
    ctx->pc = 0x13C838u;
label_13c838:
    // 0x13c838: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x13c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x13c83c: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13c840: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c844: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13c848: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c84c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c850: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c854: 0x0  nop
    ctx->pc = 0x13c854u;
    // NOP
label_13c858:
    // 0x13c858: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13c85c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x13c85cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x13c860: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x13c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13c864: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x13c864u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x13c868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c86c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13c870: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c878: 0xa4c20034  sh          $v0, 0x34($a2)
    ctx->pc = 0x13c878u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c87c: 0x8c67004c  lw          $a3, 0x4C($v1)
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13c880: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x13c880u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13c884: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13c888: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13c88c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13c88cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c890: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x13c890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    // 0x13c894: 0xa4c30036  sh          $v1, 0x36($a2)
    ctx->pc = 0x13c894u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x13c898: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x13c89c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x13c89cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x13c8a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13c8a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13c8a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13c8a8: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x13c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x13c8ac: 0x40f809  jalr        $v0
    ctx->pc = 0x13C8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C8B4u);
        ctx->pc = 0x13C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8ACu;
            // 0x13c8b0: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C8B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C6F4u: goto label_13c6f4;
            case 0x13C800u: goto label_13c800;
            case 0x13C81Cu: goto label_13c81c;
            case 0x13C838u: goto label_13c838;
            case 0x13C858u: goto label_13c858;
            case 0x13C8C0u: goto label_13c8c0;
            case 0x13C968u: goto label_13c968;
            case 0x13C988u: goto label_13c988;
            case 0x13C9A4u: goto label_13c9a4;
            case 0x13C9C0u: goto label_13c9c0;
            case 0x13CA20u: goto label_13ca20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C8B4u; }
            if (ctx->pc != 0x13C8B4u) { return; }
        }
        }
    }
    ctx->pc = 0x13C8B4u;
    // 0x13c8b4: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13c8b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c8b8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13c8bc: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x13c8bcu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c8c0:
    // 0x13c8c0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x13c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13c8c4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13C8C4u;
    {
        const bool branch_taken_0x13c8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8C4u;
            // 0x13c8c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8c4) {
            ctx->pc = 0x13CA20u;
            goto label_13ca20;
        }
    }
    ctx->pc = 0x13C8CCu;
    // 0x13c8cc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x13c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x13c8d0: 0x2448f170  addiu       $t0, $v0, -0xE90
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13c8d4: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x13c8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c8d8: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x13c8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c8dc: 0x6a66000f  ldl         $a2, 0xF($s3)
    ctx->pc = 0x13c8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c8e0: 0x6e660008  ldr         $a2, 0x8($s3)
    ctx->pc = 0x13c8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c8e4: 0x6a670017  ldl         $a3, 0x17($s3)
    ctx->pc = 0x13c8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c8e8: 0x6e670010  ldr         $a3, 0x10($s3)
    ctx->pc = 0x13c8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c8ec: 0xb1050007  sdl         $a1, 0x7($t0)
    ctx->pc = 0x13c8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c8f0: 0xb5050000  sdr         $a1, 0x0($t0)
    ctx->pc = 0x13c8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c8f4: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x13c8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c8f8: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x13c8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c8fc: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x13c8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c900: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x13c900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c904: 0x6a65001f  ldl         $a1, 0x1F($s3)
    ctx->pc = 0x13c904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c908: 0x6e650018  ldr         $a1, 0x18($s3)
    ctx->pc = 0x13c908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c90c: 0x6a660027  ldl         $a2, 0x27($s3)
    ctx->pc = 0x13c90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c910: 0x6e660020  ldr         $a2, 0x20($s3)
    ctx->pc = 0x13c910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c914: 0xb105001f  sdl         $a1, 0x1F($t0)
    ctx->pc = 0x13c914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c918: 0xb5050018  sdr         $a1, 0x18($t0)
    ctx->pc = 0x13c918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c91c: 0xb1060027  sdl         $a2, 0x27($t0)
    ctx->pc = 0x13c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c920: 0xb5060020  sdr         $a2, 0x20($t0)
    ctx->pc = 0x13c920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c924: 0x24837790  addiu       $v1, $a0, 0x7790
    ctx->pc = 0x13c924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
    // 0x13c928: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13c928u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c92c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13c92cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c930: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x13c930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c934: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x13c934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c938: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13c938u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c93c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c940: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13c940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c944: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x13c944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13c948: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13c94c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x13c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13c950: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x13c950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x13c954: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C954u;
    {
        const bool branch_taken_0x13c954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C954u;
            // 0x13c958: 0x96430008  lhu         $v1, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c954) {
            ctx->pc = 0x13C968u;
            goto label_13c968;
        }
    }
    ctx->pc = 0x13C95Cu;
    // 0x13c95c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C95Cu;
    {
        const bool branch_taken_0x13c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C95Cu;
            // 0x13c960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c95c) {
            ctx->pc = 0x13C988u;
            goto label_13c988;
        }
    }
    ctx->pc = 0x13C964u;
    // 0x13c964: 0x0  nop
    ctx->pc = 0x13c964u;
    // NOP
label_13c968:
    // 0x13c968: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x13c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x13c96c: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13c970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c974: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c974u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c978: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13c978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13c97c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c980: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c984: 0x0  nop
    ctx->pc = 0x13c984u;
    // NOP
label_13c988:
    // 0x13c988: 0x24c27790  addiu       $v0, $a2, 0x7790
    ctx->pc = 0x13c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13c98c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13c990: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x13c990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x13c994: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C994u;
    {
        const bool branch_taken_0x13c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C994u;
            // 0x13c998: 0x9645000a  lhu         $a1, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c994) {
            ctx->pc = 0x13C9A4u;
            goto label_13c9a4;
        }
    }
    ctx->pc = 0x13C99Cu;
    // 0x13c99c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C99Cu;
    {
        const bool branch_taken_0x13c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C99Cu;
            // 0x13c9a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c99c) {
            ctx->pc = 0x13C9C0u;
            goto label_13c9c0;
        }
    }
    ctx->pc = 0x13C9A4u;
label_13c9a4:
    // 0x13c9a4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13c9a8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13c9ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c9b0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13c9b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c9b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c9b8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c9bc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13c9c0:
    // 0x13c9c0: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13c9c4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x13c9c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13c9c8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13c9cc: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x13c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x13c9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c9d4: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x13c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13c9d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c9d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c9dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c9e0: 0xa4c20034  sh          $v0, 0x34($a2)
    ctx->pc = 0x13c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x13c9e4: 0x8c67004c  lw          $a3, 0x4C($v1)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13c9e8: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x13c9e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x13c9ec: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x13c9f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13c9f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13c9f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c9f8: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x13c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    // 0x13c9fc: 0xa4c30036  sh          $v1, 0x36($a2)
    ctx->pc = 0x13c9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x13ca00: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13ca04: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x13ca04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13ca08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ca0c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13ca0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ca10: 0x40f809  jalr        $v0
    ctx->pc = 0x13CA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CA18u);
        ctx->pc = 0x13CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA10u;
            // 0x13ca14: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13CA18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C6F4u: goto label_13c6f4;
            case 0x13C800u: goto label_13c800;
            case 0x13C81Cu: goto label_13c81c;
            case 0x13C838u: goto label_13c838;
            case 0x13C858u: goto label_13c858;
            case 0x13C8C0u: goto label_13c8c0;
            case 0x13C968u: goto label_13c968;
            case 0x13C988u: goto label_13c988;
            case 0x13C9A4u: goto label_13c9a4;
            case 0x13C9C0u: goto label_13c9c0;
            case 0x13CA20u: goto label_13ca20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CA18u; }
            if (ctx->pc != 0x13CA18u) { return; }
        }
        }
    }
    ctx->pc = 0x13CA18u;
    // 0x13ca18: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13ca1c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x13ca1cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13ca20:
    // 0x13ca20: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x13ca24: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x13ca24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13ca28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x13ca28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13ca2c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x13ca2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ca30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x13ca30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ca34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13ca34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ca38: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x13ca38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ca3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ca40: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x13CA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA44u;
            // 0x13ca48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C6F4u: goto label_13c6f4;
            case 0x13C800u: goto label_13c800;
            case 0x13C81Cu: goto label_13c81c;
            case 0x13C838u: goto label_13c838;
            case 0x13C858u: goto label_13c858;
            case 0x13C8C0u: goto label_13c8c0;
            case 0x13C968u: goto label_13c968;
            case 0x13C988u: goto label_13c988;
            case 0x13C9A4u: goto label_13c9a4;
            case 0x13C9C0u: goto label_13c9c0;
            case 0x13CA20u: goto label_13ca20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CA4Cu;
    // 0x13ca4c: 0x0  nop
    ctx->pc = 0x13ca4cu;
    // NOP
}
