#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183f60
// Address: 0x183f60 - 0x184210
void entry_183f60_0x184210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183f60_0x184210");
#endif

    ctx->pc = 0x183f60u;

    // 0x183f60: 0x48a72800  qmtc2.ni    $a3, $vf5
    ctx->pc = 0x183f60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x183f64: 0x48a53800  qmtc2.ni    $a1, $vf7
    ctx->pc = 0x183f64u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x183f68: 0x48a63000  qmtc2.ni    $a2, $vf6
    ctx->pc = 0x183f68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x183f6c: 0x4b063841  vaddy.x     $vf1, $vf7, $vf6y
    ctx->pc = 0x183f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x183f70: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x183f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x183f74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x183f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183f78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x183f78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x183f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183f80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183f84: 0x0  nop
    ctx->pc = 0x183f84u;
    // NOP
    // 0x183f88: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x183F88u;
    {
        const bool branch_taken_0x183f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F88u;
            // 0x183f8c: 0x48233000  qmfc2.ni    $v1, $vf6 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f88) {
            ctx->pc = 0x183FF0u;
            goto label_183ff0;
        }
    }
    ctx->pc = 0x183F90u;
    // 0x183f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x183f94: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x183f94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x183f98: 0x4b0308c0  vaddx.x     $vf3, $vf1, $vf3x
    ctx->pc = 0x183f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x183f9c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x183f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183fa0: 0x4a453045  vsuby.z     $vf1, $vf6, $vf5y
    ctx->pc = 0x183fa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x183fa4: 0x4b010082  vaddz.x     $vf2, $vf0, $vf1z
    ctx->pc = 0x183fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183fa8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x183fa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x183fac: 0x4b072846  vsubz.x     $vf1, $vf5, $vf7z
    ctx->pc = 0x183facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x183fb0: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x183fb0u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x183fb4: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x183fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183fb8: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x183fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x183fbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x183fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183fc0: 0x4a863844  vsubx.y     $vf1, $vf7, $vf6x
    ctx->pc = 0x183fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x183fc4: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x183fc4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x183fc8: 0x46010044  c1          0x10044
    ctx->pc = 0x183fc8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x183fcc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x183fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x183fd0: 0x4a410081  vaddy.z     $vf2, $vf0, $vf1y
    ctx->pc = 0x183fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183fd4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x183fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x183fd8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x183fd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x183fdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x183fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x183fe0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x183fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x183fe4: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x183fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183fe8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x183FE8u;
    {
        const bool branch_taken_0x183fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fe8) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x183FF0u;
label_183ff0:
    // 0x183ff0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x183ff0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x183ff4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x183ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183ff8: 0x48233800  qmfc2.ni    $v1, $vf7
    ctx->pc = 0x183ff8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x183ffc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x183ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184000: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x184000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184004: 0x0  nop
    ctx->pc = 0x184004u;
    // NOP
    // 0x184008: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x184008u;
    {
        const bool branch_taken_0x184008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184008u;
            // 0x18400c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184008) {
            ctx->pc = 0x184014u;
            goto label_184014;
        }
    }
    ctx->pc = 0x184010u;
    // 0x184010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184014:
    // 0x184014: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x184014u;
    {
        const bool branch_taken_0x184014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184014u;
            // 0x184018: 0x48232800  qmfc2.ni    $v1, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184014) {
            ctx->pc = 0x1840C0u;
            goto label_1840c0;
        }
    }
    ctx->pc = 0x18401Cu;
    // 0x18401c: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x18401cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x184020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184024: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x184024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184028: 0x0  nop
    ctx->pc = 0x184028u;
    // NOP
    // 0x18402c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18402Cu;
    {
        const bool branch_taken_0x18402c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18402Cu;
            // 0x184030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18402c) {
            ctx->pc = 0x184038u;
            goto label_184038;
        }
    }
    ctx->pc = 0x184034u;
    // 0x184034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184038:
    // 0x184038: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x184038u;
    {
        const bool branch_taken_0x184038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184038) {
            ctx->pc = 0x184170u;
            goto label_184170;
        }
    }
    ctx->pc = 0x184040u;
    // 0x184040: 0x4a472840  vaddx.z     $vf1, $vf5, $vf7x
    ctx->pc = 0x184040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184048: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x184048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18404c: 0x4a813046  vsubz.y     $vf1, $vf6, $vf1z
    ctx->pc = 0x18404cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184050: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x184050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184054: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x184054u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184058: 0x4a862882  vaddz.y     $vf2, $vf5, $vf6z
    ctx->pc = 0x184058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18405c: 0x4a4200c1  vaddy.z     $vf3, $vf0, $vf2y
    ctx->pc = 0x18405cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184060: 0x4a8103bd  .word       0x4A8103BD                   # vsqrt       $Q, $vf1y # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x184060u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x184064: 0x4a0003bf  vwaitq
    ctx->pc = 0x184064u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x184068: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x184068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18406c: 0x4a0002ff  vnop
    ctx->pc = 0x18406cu;
    // NOP operation, no action needed for VU0
    // 0x184070: 0x4a0002ff  vnop
    ctx->pc = 0x184070u;
    // NOP operation, no action needed for VU0
    // 0x184074: 0x4b073081  vaddy.x     $vf2, $vf6, $vf7y
    ctx->pc = 0x184074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184078: 0x4be41b3c  vmove.xyzw  $vf4, $vf3
    ctx->pc = 0x184078u;
    ctx->vu0_vf[4] = ctx->vu0_vf[3];
    // 0x18407c: 0x4b020100  vaddx.x     $vf4, $vf0, $vf2x
    ctx->pc = 0x18407cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x184080: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x184080u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184084: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x184084u;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x184088: 0x4b0728c6  vsubz.x     $vf3, $vf5, $vf7z
    ctx->pc = 0x184088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18408c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x18408cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184090: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184094: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x184094u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184098: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184098u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18409c: 0x4a230880  vaddx.w     $vf2, $vf1, $vf3x
    ctx->pc = 0x18409cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1840a0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1840a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1840a4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1840a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1840a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1840a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1840ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1840acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1840b0: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1840b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1840b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1840B4u;
    {
        const bool branch_taken_0x1840b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840b4) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x1840BCu;
    // 0x1840bc: 0x0  nop
    ctx->pc = 0x1840bcu;
    // NOP
label_1840c0:
    // 0x1840c0: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1840c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1840c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1840c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1840c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1840c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1840cc: 0x0  nop
    ctx->pc = 0x1840ccu;
    // NOP
    // 0x1840d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1840D0u;
    {
        const bool branch_taken_0x1840d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1840D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840D0u;
            // 0x1840d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840d0) {
            ctx->pc = 0x1840DCu;
            goto label_1840dc;
        }
    }
    ctx->pc = 0x1840D8u;
    // 0x1840d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1840d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1840dc:
    // 0x1840dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1840DCu;
    {
        const bool branch_taken_0x1840dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840dc) {
            ctx->pc = 0x184170u;
            goto label_184170;
        }
    }
    ctx->pc = 0x1840E4u;
    // 0x1840e4: 0x4a853102  vaddz.y     $vf4, $vf6, $vf5z
    ctx->pc = 0x1840e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1840e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1840ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1840ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1840f0: 0x4b043905  vsuby.x     $vf4, $vf7, $vf4y
    ctx->pc = 0x1840f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1840f4: 0x4b012100  vaddx.x     $vf4, $vf4, $vf1x
    ctx->pc = 0x1840f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1840f8: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1840f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1840fc: 0x4b073041  vaddy.x     $vf1, $vf6, $vf7y
    ctx->pc = 0x1840fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184100: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x184100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184104: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x184104u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184108: 0x4a453840  vaddx.z     $vf1, $vf7, $vf5x
    ctx->pc = 0x184108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18410c: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x18410cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x184110: 0x4a410082  vaddz.z     $vf2, $vf0, $vf1z
    ctx->pc = 0x184110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184114: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x184114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184118: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18411c: 0x4a4530c5  vsuby.z     $vf3, $vf6, $vf5y
    ctx->pc = 0x18411cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184120: 0x46010044  c1          0x10044
    ctx->pc = 0x184120u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x184124: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x184124u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184128: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18412c: 0x4a230882  vaddz.w     $vf2, $vf1, $vf3z
    ctx->pc = 0x18412cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184130: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x184130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x184134: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x184134u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184138: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18413c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18413cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184140: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x184140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184144: 0x0  nop
    ctx->pc = 0x184144u;
    // NOP
label_184148:
    // 0x184148: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x184148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18414c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18414cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184150: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x184150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184154: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x184154u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x184158: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18415c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18415cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184160: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x184160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184164: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x184164u;
    {
        const bool branch_taken_0x184164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184164u;
            // 0x184168: 0xf8820000  sqc2        $vf2, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184164) {
            ctx->pc = 0x184208u;
            goto label_184208;
        }
    }
    ctx->pc = 0x18416Cu;
    // 0x18416c: 0x0  nop
    ctx->pc = 0x18416cu;
    // NOP
label_184170:
    // 0x184170: 0x4b063841  vaddy.x     $vf1, $vf7, $vf6y
    ctx->pc = 0x184170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184178: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x184178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18417c: 0x4a412844  vsubx.z     $vf1, $vf5, $vf1x
    ctx->pc = 0x18417cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184180: 0x4a420840  vaddx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x184180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184184: 0x4b0103bd  .word       0x4B0103BD                   # vsqrt       $Q, $vf1z # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x184184u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x184188: 0x4a0003bf  vwaitq
    ctx->pc = 0x184188u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18418c: 0x4b000060  vaddq.x     $vf1, $vf0, $Q
    ctx->pc = 0x18418cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184190: 0x4a0002ff  vnop
    ctx->pc = 0x184190u;
    // NOP operation, no action needed for VU0
    // 0x184194: 0x4a0002ff  vnop
    ctx->pc = 0x184194u;
    // NOP operation, no action needed for VU0
    // 0x184198: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x184198u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18419c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18419cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1841a0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1841a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1841a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1841a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1841a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1841a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1841ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1841acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1841b0: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1841b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1841b4: 0x4a453880  vaddx.z     $vf2, $vf7, $vf5x
    ctx->pc = 0x1841b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1841b8: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x1841b8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1841bc: 0x4b0200c2  vaddz.x     $vf3, $vf0, $vf2z
    ctx->pc = 0x1841bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1841c0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1841c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1841c4: 0x4a862882  vaddz.y     $vf2, $vf5, $vf6z
    ctx->pc = 0x1841c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1841c8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1841c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1841cc: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1841ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1841d0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1841d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1841d4: 0x4a8638c4  vsubx.y     $vf3, $vf7, $vf6x
    ctx->pc = 0x1841d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1841d8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1841d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1841dc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1841dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1841e0: 0x4a231041  vaddy.w     $vf1, $vf2, $vf3y
    ctx->pc = 0x1841e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1841e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1841e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1841e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1841e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1841ec: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1841ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1841f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1841f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1841f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1841f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1841f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1841f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1841fc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1841fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184200: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x184200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184204: 0x0  nop
    ctx->pc = 0x184204u;
    // NOP
label_184208:
    // 0x184208: 0x3e00008  jr          $ra
    ctx->pc = 0x184208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184208u;
            // 0x18420c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183FF0u: goto label_183ff0;
            case 0x184014u: goto label_184014;
            case 0x184038u: goto label_184038;
            case 0x1840C0u: goto label_1840c0;
            case 0x1840DCu: goto label_1840dc;
            case 0x184148u: goto label_184148;
            case 0x184170u: goto label_184170;
            case 0x184208u: goto label_184208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184210u;
}
