#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f4c98
// Address: 0x1f4c98 - 0x1f4de8
void entry_1f4c98_0x1f4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f4c98_0x1f4de8");
#endif

    ctx->pc = 0x1f4c98u;

    // 0x1f4c98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4c9c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ca0: 0xc442e32c  lwc1        $f2, -0x1CD4($v0)
    ctx->pc = 0x1f4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4ca4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ca8: 0xc461e334  lwc1        $f1, -0x1CCC($v1)
    ctx->pc = 0x1f4ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4cac: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1f4cb0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f4cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f4cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4cb8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4cbc: 0xc4c3e358  lwc1        $f3, -0x1CA8($a2)
    ctx->pc = 0x1f4cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4cc0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f4cc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f4cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4cc8: 0xc465e330  lwc1        $f5, -0x1CD0($v1)
    ctx->pc = 0x1f4cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f4ccc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1f4cccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f4cd0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4cd4: 0xc480e354  lwc1        $f0, -0x1CAC($a0)
    ctx->pc = 0x1f4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294959956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4cdc: 0x8ca3e384  lw          $v1, -0x1C7C($a1)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960004)));
    // 0x1f4ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4ce4: 0x8c42e380  lw          $v0, -0x1C80($v0)
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960000)));
    // 0x1f4ce8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4cf0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f4cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f4cf4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1f4cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1f4cf8: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x1f4cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1f4cfc: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x1f4cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1f4d00: 0xe4450048  swc1        $f5, 0x48($v0)
    ctx->pc = 0x1f4d00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1f4d04: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1f4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1f4d08: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x1f4d08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1f4d0c: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x1f4d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1f4d10: 0xe4640048  swc1        $f4, 0x48($v1)
    ctx->pc = 0x1f4d10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1f4d14: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x1f4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
    // 0x1f4d18: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1f4d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f4d1c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f4d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f4d20: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1f4d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f4d24: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1f4d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f4d28: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f4d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f4d2c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f4d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1f4d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f4d34: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1f4d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f4d38: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1f4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f4d3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d40: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d44: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x1f4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x1f4d48: 0x8c63e38c  lw          $v1, -0x1C74($v1)
    ctx->pc = 0x1f4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960012)));
    // 0x1f4d4c: 0xe4450048  swc1        $f5, 0x48($v0)
    ctx->pc = 0x1f4d4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1f4d50: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x1f4d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1f4d54: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x1f4d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1f4d58: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1f4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1f4d5c: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x1f4d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1f4d60: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x1f4d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1f4d64: 0xe4640048  swc1        $f4, 0x48($v1)
    ctx->pc = 0x1f4d64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1f4d68: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x1f4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
    // 0x1f4d6c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1f4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f4d70: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1f4d70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f4d74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d78: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1f4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d7c: 0xc440e2f4  lwc1        $f0, -0x1D0C($v0)
    ctx->pc = 0x1f4d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d80: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1f4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1f4d84: 0xc481e2f8  lwc1        $f1, -0x1D08($a0)
    ctx->pc = 0x1f4d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294959864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4d88: 0x24633380  addiu       $v1, $v1, 0x3380
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13184));
    // 0x1f4d8c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1f4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1f4d90: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f4d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d94: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1f4d94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4d98: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1f4d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1f4d9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f4da0: 0x24c63370  addiu       $a2, $a2, 0x3370
    ctx->pc = 0x1f4da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13168));
    // 0x1f4da4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4da8: 0xe4620074  swc1        $f2, 0x74($v1)
    ctx->pc = 0x1f4da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1f4dac: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1f4dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1f4db0: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x1f4db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1f4db4: 0x8c42e360  lw          $v0, -0x1CA0($v0)
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x1f4db8: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x1f4db8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1f4dbc: 0x8c84e35c  lw          $a0, -0x1CA4($a0)
    ctx->pc = 0x1f4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959964)));
    // 0x1f4dc0: 0x8ca5e364  lw          $a1, -0x1C9C($a1)
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959972)));
    // 0x1f4dc4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1f4dc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1f4dc8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f4dc8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f4dcc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f4dd0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1f4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1f4dd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f4dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f4dd8: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1f4dd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f4ddc: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1f4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f4de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4DE0u;
            // 0x1f4de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4DE8u;
}
