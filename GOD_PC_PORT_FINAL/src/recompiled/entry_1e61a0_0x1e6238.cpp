#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e61a0
// Address: 0x1e61a0 - 0x1e6238
void entry_1e61a0_0x1e6238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e61a0_0x1e6238");
#endif

    ctx->pc = 0x1e61a0u;

    // 0x1e61a0: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x1e61a4: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1e61a8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e61a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e61ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e61acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e61b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e61b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e61b8: 0xc4840168  lwc1        $f4, 0x168($a0)
    ctx->pc = 0x1e61b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e61bc: 0xc4410234  lwc1        $f1, 0x234($v0)
    ctx->pc = 0x1e61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e61c0: 0xc442023c  lwc1        $f2, 0x23C($v0)
    ctx->pc = 0x1e61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e61c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e61c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e61c8: 0xc4400238  lwc1        $f0, 0x238($v0)
    ctx->pc = 0x1e61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e61cc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e61ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e61d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e61d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e61d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e61d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1e61d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1e61d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e61dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e61dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e61e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1e61e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1e61e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e61e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e61e8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1e61e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1e61ec: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x1e61ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1e61f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e61f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61f4: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1e61f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1e61f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e61f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e61fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e6200: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e6204: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1e6204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e6208: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1e6208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e620c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e620cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6210: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1e6210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6214: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e6214u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e6218: 0x7c820120  sq          $v0, 0x120($a0)
    ctx->pc = 0x1e6218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), GPR_VEC(ctx, 2));
    // 0x1e621c: 0x4a821845  vsuby.y     $vf1, $vf3, $vf2y
    ctx->pc = 0x1e621cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6220: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1e6220u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e6224: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e6224u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6228: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e6228u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e622c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1e622cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1e6230: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6230u;
            // 0x1e6234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6238u;
}
