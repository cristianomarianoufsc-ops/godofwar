#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210C40
// Address: 0x210c40 - 0x210d48
void sub_00210C40_0x210c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210C40_0x210c40");
#endif

    ctx->pc = 0x210c40u;

    // 0x210c40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x210c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x210c44: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x210c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x210c48: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x210c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x210c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c50: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x210c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x210c54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x210c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x210c5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x210c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210c60: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x210c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x210c64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x210c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x210c68: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x210c68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x210c6c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x210c6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x210c70: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x210C70u;
    {
        const bool branch_taken_0x210c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x210c70) {
            ctx->pc = 0x210C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210C70u;
            // 0x210c74: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210C88u;
            goto label_210c88;
        }
    }
    ctx->pc = 0x210C78u;
    // 0x210c78: 0xc04da64  jal         func_136990
    ctx->pc = 0x210C78u;
    SET_GPR_U32(ctx, 31, 0x210C80u);
    ctx->pc = 0x210C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210C78u;
            // 0x210c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C80u; }
        if (ctx->pc != 0x210C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C80u; }
        if (ctx->pc != 0x210C80u) { return; }
    }
    ctx->pc = 0x210C80u;
    // 0x210c80: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x210c84: 0x0  nop
    ctx->pc = 0x210c84u;
    // NOP
label_210c88:
    // 0x210c88: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x210c8c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x210c8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210c90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210c94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x210c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210c98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x210c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x210c9c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x210c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x210ca0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x210ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x210ca4: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x210ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x210ca8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x210ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210cac: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x210cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210cb0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x210cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210cb4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x210cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x210cb8: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x210cb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210cbc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x210cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210cc0: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x210cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x210cc4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210CC4u;
    {
        const bool branch_taken_0x210cc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x210cc4) {
            ctx->pc = 0x210CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210CC4u;
            // 0x210cc8: 0x8e22018c  lw          $v0, 0x18C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210CD8u;
            goto label_210cd8;
        }
    }
    ctx->pc = 0x210CCCu;
    // 0x210ccc: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x210cccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210cd0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x210cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210cd4: 0x8e22018c  lw          $v0, 0x18C($s1)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
label_210cd8:
    // 0x210cd8: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x210cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x210cdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x210cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x210ce0: 0xd84200e0  lqc2        $vf2, 0xE0($v0)
    ctx->pc = 0x210ce0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x210ce4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x210ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210ce8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x210ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210cec: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x210cecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210cf0: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x210cf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x210cf4: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x210cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210cf8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x210cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210cfc: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x210cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210d00: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x210d00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x210d04: 0x4a0003bf  vwaitq
    ctx->pc = 0x210d04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x210d08: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x210d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210d0c: 0x4a0002ff  vnop
    ctx->pc = 0x210d0cu;
    // NOP operation, no action needed for VU0
    // 0x210d10: 0x4a0002ff  vnop
    ctx->pc = 0x210d10u;
    // NOP operation, no action needed for VU0
    // 0x210d14: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x210d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210d18: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x210d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210d1c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x210d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210d20: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x210d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210d24: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x210d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210d28: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x210d28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210d2c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x210d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210d30: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x210d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210d38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x210d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x210d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x210D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D3Cu;
            // 0x210d40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210C88u: goto label_210c88;
            case 0x210CD8u: goto label_210cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210D44u;
    // 0x210d44: 0x0  nop
    ctx->pc = 0x210d44u;
    // NOP
}
