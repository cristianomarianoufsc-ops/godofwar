#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_217948
// Address: 0x217948 - 0x2179e0
void entry_217948_0x2179e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_217948_0x2179e0");
#endif

    ctx->pc = 0x217948u;

    // 0x217948: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x217948u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x21794c: 0xc48c005c  lwc1        $f12, 0x5C($a0)
    ctx->pc = 0x21794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217950: 0x460c0803  div.s       $f0, $f1, $f12
    ctx->pc = 0x217950u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[12];
    // 0x217954: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x217954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x217958: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x217958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21795c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x21795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x217960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217964: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x217964u;
    {
        const bool branch_taken_0x217964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x217968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217964u;
            // 0x217968: 0x8c830044  lw          $v1, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217964) {
            ctx->pc = 0x2179C0u;
            goto label_2179c0;
        }
    }
    ctx->pc = 0x21796Cu;
    // 0x21796c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21796cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x217974: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x217974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x217978: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x21797c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21797cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x217980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217984: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x217984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x217988: 0xd8410040  lqc2        $vf1, 0x40($v0)
    ctx->pc = 0x217988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21798c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x21798cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217990: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x217990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217994: 0x4be218d8  vmulx.xyzw  $vf3, $vf3, $vf2x
    ctx->pc = 0x217994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217998: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x217998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21799c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x21799cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2179a0: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2179a0u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x2179a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2179a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2179a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2179a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2179ac: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2179acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2179b0: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x2179b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2179b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2179B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179B4u;
            // 0x2179b8: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2179C0u: goto label_2179c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2179BCu;
    // 0x2179bc: 0x0  nop
    ctx->pc = 0x2179bcu;
    // NOP
label_2179c0:
    // 0x2179c0: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x2179c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2179c4: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2179c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x2179c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2179c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2179cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2179ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2179d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2179d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2179d4: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x2179d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2179d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2179D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179D8u;
            // 0x2179dc: 0x48221800  qmfc2.ni    $v0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2179C0u: goto label_2179c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2179E0u;
}
