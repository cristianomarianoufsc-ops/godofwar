#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A42D0
// Address: 0x1a42d0 - 0x1a4468
void sub_001A42D0_0x1a42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A42D0_0x1a42d0");
#endif

    ctx->pc = 0x1a42d0u;

    // 0x1a42d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a42d4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1a42d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1a42d8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1a42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1a42dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a42dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42e0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1a42e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1a42e4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1a42e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42e8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1a42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1a42ec: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1a42ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1a42f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1a42f4: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1a42f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1a42fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a4300: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a4300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4304: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1a4304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1a4308: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a4308u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a430c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a4310: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1a4310u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4314: 0x8fb400d0  lw          $s4, 0xD0($sp)
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a4318: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a4318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a431c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1a431cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4320: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a4324: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a4324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4328: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a4328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a432c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a432cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4330: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a4330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a4334: 0x46020084  c1          0x20084
    ctx->pc = 0x1a4334u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a4338: 0x3c01477a  lui         $at, 0x477A
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18298 << 16));
    // 0x1a433c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a433cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4348: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a4348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a434c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a4350: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a4350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a4354: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1a4354u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1a4358: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1a4358u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x1a435c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a435cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a4360: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1a4360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a4364: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a4364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a4368: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a4368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a436c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1a436cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4370: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1a4370u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4374: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1a4374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a4378: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1a4378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a437c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1a437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4384: 0x4be20958  vmulx.xyzw  $vf5, $vf1, $vf2x
    ctx->pc = 0x1a4384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a4388: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x1a4388u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a438c: 0x4be22058  vmulx.xyzw  $vf1, $vf4, $vf2x
    ctx->pc = 0x1a438cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a4390: 0x4be21958  vmulx.xyzw  $vf5, $vf3, $vf2x
    ctx->pc = 0x1a4390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a4394: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1a4394u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a4398: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1A4398u;
    SET_GPR_U32(ctx, 31, 0x1A43A0u);
    ctx->pc = 0x1A439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4398u;
            // 0x1a439c: 0x48262800  qmfc2.ni    $a2, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43A0u; }
        if (ctx->pc != 0x1A43A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43A0u; }
        if (ctx->pc != 0x1A43A0u) { return; }
    }
    ctx->pc = 0x1A43A0u;
    // 0x1a43a0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a43a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a43a4: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1a43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1a43a8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1a43a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a43ac: 0x4b031058  vmulx.x     $vf1, $vf2, $vf3x
    ctx->pc = 0x1a43acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a43b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a43b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a43b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a43b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a43b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a43b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a43bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a43bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a43c0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1a43c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a43c4: 0x4a831058  vmulx.y     $vf1, $vf2, $vf3x
    ctx->pc = 0x1a43c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a43c8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a43c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a43cc: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1a43ccu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1a43d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a43d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a43d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a43d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a43d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a43d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a43dc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1a43dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a43e0: 0x4a431058  vmulx.z     $vf1, $vf2, $vf3x
    ctx->pc = 0x1a43e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a43e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a43e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a43e8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1a43e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1a43ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a43ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a43f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a43f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a43f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a43f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a43f8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1a43f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a43fc: 0x4a231098  vmulx.w     $vf2, $vf2, $vf3x
    ctx->pc = 0x1a43fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4400: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x1a4400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a4404: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1a4404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a4408: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1a4408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a440c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1a440cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a4410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4414: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a4418: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a4418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a441c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a441cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a4420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4424: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x1a4424u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4428: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1a4428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a442c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1a442cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4430: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a4430u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a4434: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1a4434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4438: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1a4438u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1a443c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a443cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a4440: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a4440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a4444: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1a4444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4448: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1a4448u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1a444c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1a444cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1a4450: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1a4450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a4454: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a4454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a4458: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1a4458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a445c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A445Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A445Cu;
            // 0x1a4460: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4464u;
    // 0x1a4464: 0x0  nop
    ctx->pc = 0x1a4464u;
    // NOP
}
