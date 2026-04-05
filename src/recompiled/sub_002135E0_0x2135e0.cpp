#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002135E0
// Address: 0x2135e0 - 0x214340
void sub_002135E0_0x2135e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002135E0_0x2135e0");
#endif

    ctx->pc = 0x2135e0u;

label_2135e0:
    // 0x2135e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2135e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2135e4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2135e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2135e8: 0xc48001e4  lwc1        $f0, 0x1E4($a0)
    ctx->pc = 0x2135e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135ec: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x2135ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2135f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2135f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2135f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2135f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2135f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2135fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2135fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x213600: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x213600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213604: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x213604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x213608: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21360c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x21360cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x213610: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x213610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x213614: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x213614u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x213618: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x213618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21361c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x21361Cu;
    {
        const bool branch_taken_0x21361c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21361Cu;
            // 0x213620: 0xfba30040  sqc2        $vf3, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21361c) {
            ctx->pc = 0x213708u;
            goto label_213708;
        }
    }
    ctx->pc = 0x213624u;
    // 0x213624: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x213624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x213628: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x213628u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21362c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21362cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213630: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x213630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x213634: 0x70051fc9  prot3w      $v1, $a1
    ctx->pc = 0x213634u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213638: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x213638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21363c: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x21363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213640: 0xc48101e8  lwc1        $f1, 0x1E8($a0)
    ctx->pc = 0x213640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213644: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x213644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x213648: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x213648u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21364c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x21364cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213650: 0x0  nop
    ctx->pc = 0x213650u;
    // NOP
    // 0x213654: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x213654u;
    {
        const bool branch_taken_0x213654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x213658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213654u;
            // 0x213658: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213654) {
            ctx->pc = 0x213660u;
            goto label_213660;
        }
    }
    ctx->pc = 0x21365Cu;
    // 0x21365c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21365cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213660:
    // 0x213660: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x213660u;
    {
        const bool branch_taken_0x213660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213660u;
            // 0x213664: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213660) {
            ctx->pc = 0x213858u;
            goto label_213858;
        }
    }
    ctx->pc = 0x213668u;
    // 0x213668: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x213668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21366c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x21366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213670: 0xc4605e98  lwc1        $f0, 0x5E98($v1)
    ctx->pc = 0x213670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213674: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213678: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x213678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21367c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x21367cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x213680: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x213680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x213684: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x213684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213688: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x213688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21368c: 0xd88200e0  lqc2        $vf2, 0xE0($a0)
    ctx->pc = 0x21368cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x213690: 0x4be11128  vadd.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x213690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213694: 0xf88400e0  sqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x213694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x213698: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x213698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21369c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21369cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2136a0: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x2136a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2136a4: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x2136a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2136a8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2136a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2136ac: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2136acu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2136b0: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x2136b0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2136b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2136b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2136b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2136b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2136bc: 0x0  nop
    ctx->pc = 0x2136bcu;
    // NOP
    // 0x2136c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2136C0u;
    {
        const bool branch_taken_0x2136c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2136C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2136C0u;
            // 0x2136c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c0) {
            ctx->pc = 0x2136D0u;
            goto label_2136d0;
        }
    }
    ctx->pc = 0x2136C8u;
    // 0x2136c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2136c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136cc: 0x0  nop
    ctx->pc = 0x2136ccu;
    // NOP
label_2136d0:
    // 0x2136d0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2136D0u;
    {
        const bool branch_taken_0x2136d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2136D0u;
            // 0x2136d4: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136d0) {
            ctx->pc = 0x2137E0u;
            goto label_2137e0;
        }
    }
    ctx->pc = 0x2136D8u;
    // 0x2136d8: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x2136d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2136dc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2136dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2136e0: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x2136e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2136e4: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2136e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2136e8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2136e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2136ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2136ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2136f0: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x2136f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2136f4: 0x8c8201ec  lw          $v0, 0x1EC($a0)
    ctx->pc = 0x2136f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x2136f8: 0xf88400e0  sqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x2136f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2136fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2136FCu;
    {
        const bool branch_taken_0x2136fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2136FCu;
            // 0x213700: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136fc) {
            ctx->pc = 0x2137D8u;
            goto label_2137d8;
        }
    }
    ctx->pc = 0x213704u;
    // 0x213704: 0x0  nop
    ctx->pc = 0x213704u;
    // NOP
label_213708:
    // 0x213708: 0xc48301e8  lwc1        $f3, 0x1E8($a0)
    ctx->pc = 0x213708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21370c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x21370cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x213710: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x213710u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213718: 0xac8001c4  sw          $zero, 0x1C4($a0)
    ctx->pc = 0x213718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 0));
    // 0x21371c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x21371cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213724: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x213724u;
    {
        const bool branch_taken_0x213724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x213728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213724u;
            // 0x213728: 0xac8001e4  sw          $zero, 0x1E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213724) {
            ctx->pc = 0x213730u;
            goto label_213730;
        }
    }
    ctx->pc = 0x21372Cu;
    // 0x21372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213730:
    // 0x213730: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x213730u;
    {
        const bool branch_taken_0x213730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213730u;
            // 0x213734: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213730) {
            ctx->pc = 0x213834u;
            goto label_213834;
        }
    }
    ctx->pc = 0x213738u;
    // 0x213738: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x213738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21373c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x21373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213740: 0xc4605e98  lwc1        $f0, 0x5E98($v1)
    ctx->pc = 0x213740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213744: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21374c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21374cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213754: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x213754u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213758: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x213758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21375c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x21375cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x213760: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x213760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213764: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x213764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213768: 0xd88200e0  lqc2        $vf2, 0xE0($a0)
    ctx->pc = 0x213768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x21376c: 0x4be11128  vadd.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x21376cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213770: 0xf88400e0  sqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x213770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x213774: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x213774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x213778: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x213778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x21377c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x21377cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213780: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x213780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213784: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x213784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213788: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x213788u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21378c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x21378cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213794: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x213794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213798: 0x0  nop
    ctx->pc = 0x213798u;
    // NOP
    // 0x21379c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x21379Cu;
    {
        const bool branch_taken_0x21379c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2137A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21379Cu;
            // 0x2137a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21379c) {
            ctx->pc = 0x2137A8u;
            goto label_2137a8;
        }
    }
    ctx->pc = 0x2137A4u;
    // 0x2137a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2137a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2137a8:
    // 0x2137a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2137A8u;
    {
        const bool branch_taken_0x2137a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2137A8u;
            // 0x2137ac: 0x7ba30040  lq          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137a8) {
            ctx->pc = 0x2137E0u;
            goto label_2137e0;
        }
    }
    ctx->pc = 0x2137B0u;
    // 0x2137b0: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x2137b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2137b4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2137b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2137b8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x2137b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2137bc: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2137bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2137c0: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x2137c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2137c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2137c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2137c8: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x2137c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2137cc: 0x8c8201ec  lw          $v0, 0x1EC($a0)
    ctx->pc = 0x2137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x2137d0: 0xf88400e0  sqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x2137d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2137d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2137d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2137d8:
    // 0x2137d8: 0xac8201ec  sw          $v0, 0x1EC($a0)
    ctx->pc = 0x2137d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 2));
    // 0x2137dc: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2137dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2137e0:
    // 0x2137e0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2137e4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2137e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2137e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2137e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137ec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2137ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2137f0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2137f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2137f4: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x2137f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x2137f8: 0xdcc4bdf8  ld          $a0, -0x4208($a2)
    ctx->pc = 0x2137f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x2137fc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2137fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213800: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x213800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x213804: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x213804u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x213808: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x213808u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x21380c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21380cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x213810: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x213810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213814: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x213814u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x213818: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x213818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21381c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x21381cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x213820: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x213820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213824: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x213824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x213828: 0xfcc4bdf8  sd          $a0, -0x4208($a2)
    ctx->pc = 0x213828u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 4));
    // 0x21382c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21382Cu;
    {
        const bool branch_taken_0x21382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21382Cu;
            // 0x213830: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21382c) {
            ctx->pc = 0x213858u;
            goto label_213858;
        }
    }
    ctx->pc = 0x213834u;
label_213834:
    // 0x213834: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x213834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213838: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x213838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21383c: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x21383cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213840: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x213844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213848: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x213848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21384c: 0xd88100e0  lqc2        $vf1, 0xE0($a0)
    ctx->pc = 0x21384cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x213850: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x213850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213854: 0xf88100e0  sqc2        $vf1, 0xE0($a0)
    ctx->pc = 0x213854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_213858:
    // 0x213858: 0x3e00008  jr          $ra
    ctx->pc = 0x213858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213858u;
            // 0x21385c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2135E0u: goto label_2135e0;
            case 0x213660u: goto label_213660;
            case 0x2136D0u: goto label_2136d0;
            case 0x213708u: goto label_213708;
            case 0x213730u: goto label_213730;
            case 0x2137A8u: goto label_2137a8;
            case 0x2137D8u: goto label_2137d8;
            case 0x2137E0u: goto label_2137e0;
            case 0x213834u: goto label_213834;
            case 0x213858u: goto label_213858;
            case 0x213978u: goto label_213978;
            case 0x213998u: goto label_213998;
            case 0x2139BCu: goto label_2139bc;
            case 0x2139ECu: goto label_2139ec;
            case 0x213A10u: goto label_213a10;
            case 0x213A14u: goto label_213a14;
            case 0x213A50u: goto label_213a50;
            case 0x213A98u: goto label_213a98;
            case 0x213AD8u: goto label_213ad8;
            case 0x213ADCu: goto label_213adc;
            case 0x213AF0u: goto label_213af0;
            case 0x213B00u: goto label_213b00;
            case 0x213B08u: goto label_213b08;
            case 0x213B0Cu: goto label_213b0c;
            case 0x213B44u: goto label_213b44;
            case 0x213BBCu: goto label_213bbc;
            case 0x213BC8u: goto label_213bc8;
            case 0x213BF8u: goto label_213bf8;
            case 0x213C24u: goto label_213c24;
            case 0x213C2Cu: goto label_213c2c;
            case 0x213C74u: goto label_213c74;
            case 0x213C78u: goto label_213c78;
            case 0x213C7Cu: goto label_213c7c;
            case 0x213C9Cu: goto label_213c9c;
            case 0x213CC8u: goto label_213cc8;
            case 0x213CD0u: goto label_213cd0;
            case 0x213D50u: goto label_213d50;
            case 0x213D54u: goto label_213d54;
            case 0x213D7Cu: goto label_213d7c;
            case 0x213DD0u: goto label_213dd0;
            case 0x213E7Cu: goto label_213e7c;
            case 0x213E88u: goto label_213e88;
            case 0x213EA8u: goto label_213ea8;
            case 0x213EB8u: goto label_213eb8;
            case 0x213EBCu: goto label_213ebc;
            case 0x213EC4u: goto label_213ec4;
            case 0x213F70u: goto label_213f70;
            case 0x213F78u: goto label_213f78;
            case 0x213FE0u: goto label_213fe0;
            case 0x214020u: goto label_214020;
            case 0x214080u: goto label_214080;
            case 0x2140C0u: goto label_2140c0;
            case 0x21410Cu: goto label_21410c;
            case 0x21411Cu: goto label_21411c;
            case 0x214120u: goto label_214120;
            case 0x214198u: goto label_214198;
            case 0x2141A0u: goto label_2141a0;
            case 0x2141E0u: goto label_2141e0;
            case 0x2141ECu: goto label_2141ec;
            case 0x2141F4u: goto label_2141f4;
            case 0x214228u: goto label_214228;
            case 0x214234u: goto label_214234;
            case 0x214264u: goto label_214264;
            case 0x214294u: goto label_214294;
            case 0x2142C4u: goto label_2142c4;
            case 0x2142F4u: goto label_2142f4;
            case 0x21431Cu: goto label_21431c;
            case 0x214320u: goto label_214320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213860u;
    // 0x213860: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x213864: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x213864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x213868: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x213868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x21386c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x21386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x213870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213874: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x213874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x213878: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21387c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x21387cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x213880: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x213880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x213884: 0xc4417dbc  lwc1        $f1, 0x7DBC($v0)
    ctx->pc = 0x213884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213888: 0xc60001e8  lwc1        $f0, 0x1E8($s0)
    ctx->pc = 0x213888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21388c: 0x8e1201ec  lw          $s2, 0x1EC($s0)
    ctx->pc = 0x21388cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x213890: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x213890u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213894: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x213894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x213898: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x213898u;
    {
        const bool branch_taken_0x213898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213898u;
            // 0x21389c: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213898) {
            ctx->pc = 0x2139BCu;
            goto label_2139bc;
        }
    }
    ctx->pc = 0x2138A0u;
    // 0x2138a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2138a4: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x2138a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2138a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2138ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2138acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138b0: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2138b4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x2138b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2138b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2138b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2138bc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x2138bcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2138c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2138c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2138c4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x2138C4u;
    {
        const bool branch_taken_0x2138c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2138C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2138C4u;
            // 0x2138c8: 0xe60201e8  swc1        $f2, 0x1E8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138c4) {
            ctx->pc = 0x2139BCu;
            goto label_2139bc;
        }
    }
    ctx->pc = 0x2138CCu;
    // 0x2138cc: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x2138ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2138d0: 0x8ca20158  lw          $v0, 0x158($a1)
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x2138d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2138d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2138d8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2138D8u;
    {
        const bool branch_taken_0x2138d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2138d8) {
            ctx->pc = 0x2138DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2138D8u;
            // 0x2138dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213978u;
            goto label_213978;
        }
    }
    ctx->pc = 0x2138E0u;
    // 0x2138e0: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x2138e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2138e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2138e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2138e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2138e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2138ec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2138ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2138f0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x2138f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2138f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2138f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2138f8: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2138f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2138fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2138fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x213900: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x213900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x213904: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x213904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213908: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x213908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21390c: 0xc4a0011c  lwc1        $f0, 0x11C($a1)
    ctx->pc = 0x21390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213914: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x213914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x213918: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x213918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21391c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x21391cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x213920: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x213920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213924: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x213924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213928: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21392c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x21392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213934: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x213934u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x213938: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x213938u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x21393c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x21393cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213940: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x213944: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x213944u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x213948: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x213948u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x21394c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21394cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x213950: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x213950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213954: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x213954u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x213958: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x213958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21395c: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x21395cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x213960: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x213960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213964: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x213964u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x213968: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x213968u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x21396c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21396Cu;
    {
        const bool branch_taken_0x21396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21396Cu;
            // 0x213970: 0xfcc30068  sd          $v1, 0x68($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21396c) {
            ctx->pc = 0x213998u;
            goto label_213998;
        }
    }
    ctx->pc = 0x213974u;
    // 0x213974: 0x0  nop
    ctx->pc = 0x213974u;
    // NOP
label_213978:
    // 0x213978: 0xc084be2  jal         func_212F88
    ctx->pc = 0x213978u;
    SET_GPR_U32(ctx, 31, 0x213980u);
    ctx->pc = 0x21397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213978u;
            // 0x21397c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213980u; }
        if (ctx->pc != 0x213980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213980u; }
        if (ctx->pc != 0x213980u) { return; }
    }
    ctx->pc = 0x213980u;
    // 0x213980: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x213980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x213984: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x213988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21398c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213990: 0xc040622  jal         func_101888
    ctx->pc = 0x213990u;
    SET_GPR_U32(ctx, 31, 0x213998u);
    ctx->pc = 0x213994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213990u;
            // 0x213994: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213998u; }
        if (ctx->pc != 0x213998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213998u; }
        if (ctx->pc != 0x213998u) { return; }
    }
    ctx->pc = 0x213998u;
label_213998:
    // 0x213998: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x213998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x21399c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x21399cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x2139a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2139a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2139a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2139a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2139a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2139ac: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x2139acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x2139b0: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2139b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2139b8: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x2139b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
label_2139bc:
    // 0x2139bc: 0x8e110190  lw          $s1, 0x190($s0)
    ctx->pc = 0x2139bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2139c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2139c4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2139C4u;
    {
        const bool branch_taken_0x2139c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2139C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2139C4u;
            // 0x2139c8: 0x8e0301f4  lw          $v1, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139c4) {
            ctx->pc = 0x2139ECu;
            goto label_2139ec;
        }
    }
    ctx->pc = 0x2139CCu;
    // 0x2139cc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2139ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2139d0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2139D0u;
    {
        const bool branch_taken_0x2139d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2139d0) {
            ctx->pc = 0x2139D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2139D0u;
            // 0x2139d4: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213A14u;
            goto label_213a14;
        }
    }
    ctx->pc = 0x2139D8u;
    // 0x2139d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2139dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2139dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2139e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2139e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2139e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2139E4u;
    {
        const bool branch_taken_0x2139e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2139E4u;
            // 0x2139e8: 0xae0201f4  sw          $v0, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139e4) {
            ctx->pc = 0x213A10u;
            goto label_213a10;
        }
    }
    ctx->pc = 0x2139ECu;
label_2139ec:
    // 0x2139ec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2139ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2139f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2139F0u;
    {
        const bool branch_taken_0x2139f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2139f0) {
            ctx->pc = 0x2139F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2139F0u;
            // 0x2139f4: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213A14u;
            goto label_213a14;
        }
    }
    ctx->pc = 0x2139F8u;
    // 0x2139f8: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x2139f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2139fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213a00: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x213a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x213a04: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x213a04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x213a08: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x213a08u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213a0c: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x213a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
label_213a10:
    // 0x213a10: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x213a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_213a14:
    // 0x213a14: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x213a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x213a18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213a1c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x213A1Cu;
    {
        const bool branch_taken_0x213a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213a1c) {
            ctx->pc = 0x213A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213A1Cu;
            // 0x213a20: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213A24u;
    // 0x213a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213a28: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x213a2c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x213a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x213a30: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x213a30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x213a34: 0x4a820844  vsubx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x213a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213a38: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x213a38u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213a3c: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x213a3cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213a40: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x213a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213a44: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x213A44u;
    {
        const bool branch_taken_0x213a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A44u;
            // 0x213a48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a44) {
            ctx->pc = 0x213B0Cu;
            goto label_213b0c;
        }
    }
    ctx->pc = 0x213A4Cu;
    // 0x213a4c: 0x0  nop
    ctx->pc = 0x213a4cu;
    // NOP
label_213a50:
    // 0x213a50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213a54: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x213A54u;
    {
        const bool branch_taken_0x213a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A54u;
            // 0x213a58: 0xc61501e4  lwc1        $f21, 0x1E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a54) {
            ctx->pc = 0x213B08u;
            goto label_213b08;
        }
    }
    ctx->pc = 0x213A5Cu;
    // 0x213a5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x213a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213a60: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x213A60u;
    {
        const bool branch_taken_0x213a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x213a60) {
            ctx->pc = 0x213A98u;
            goto label_213a98;
        }
    }
    ctx->pc = 0x213A68u;
    // 0x213a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213a6c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x213a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213a70: 0x0  nop
    ctx->pc = 0x213a70u;
    // NOP
    // 0x213a74: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x213A74u;
    {
        const bool branch_taken_0x213a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A74u;
            // 0x213a78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a74) {
            ctx->pc = 0x213B08u;
            goto label_213b08;
        }
    }
    ctx->pc = 0x213A7Cu;
    // 0x213a7c: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x213a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x213a80: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x213A80u;
    {
        const bool branch_taken_0x213a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A80u;
            // 0x213a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a80) {
            ctx->pc = 0x213AD8u;
            goto label_213ad8;
        }
    }
    ctx->pc = 0x213A88u;
    // 0x213a88: 0xc084be2  jal         func_212F88
    ctx->pc = 0x213A88u;
    SET_GPR_U32(ctx, 31, 0x213A90u);
    ctx->pc = 0x213A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213A88u;
            // 0x213a8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A90u; }
        if (ctx->pc != 0x213A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A90u; }
        if (ctx->pc != 0x213A90u) { return; }
    }
    ctx->pc = 0x213A90u;
    // 0x213a90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x213A90u;
    {
        const bool branch_taken_0x213a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213A90u;
            // 0x213a94: 0x8e0301dc  lw          $v1, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a90) {
            ctx->pc = 0x213ADCu;
            goto label_213adc;
        }
    }
    ctx->pc = 0x213A98u;
label_213a98:
    // 0x213a98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x213a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x213a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213aa0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x213aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213aa4: 0x0  nop
    ctx->pc = 0x213aa4u;
    // NOP
    // 0x213aa8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x213AA8u;
    {
        const bool branch_taken_0x213aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213AA8u;
            // 0x213aac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213aa8) {
            ctx->pc = 0x213B0Cu;
            goto label_213b0c;
        }
    }
    ctx->pc = 0x213AB0u;
    // 0x213ab0: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x213ab4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x213ab8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x213ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x213abc: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x213abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x213ac0: 0x40f809  jalr        $v0
    ctx->pc = 0x213AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213AC8u);
        ctx->pc = 0x213AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213AC0u;
            // 0x213ac4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x213AC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2135E0u: goto label_2135e0;
            case 0x213660u: goto label_213660;
            case 0x2136D0u: goto label_2136d0;
            case 0x213708u: goto label_213708;
            case 0x213730u: goto label_213730;
            case 0x2137A8u: goto label_2137a8;
            case 0x2137D8u: goto label_2137d8;
            case 0x2137E0u: goto label_2137e0;
            case 0x213834u: goto label_213834;
            case 0x213858u: goto label_213858;
            case 0x213978u: goto label_213978;
            case 0x213998u: goto label_213998;
            case 0x2139BCu: goto label_2139bc;
            case 0x2139ECu: goto label_2139ec;
            case 0x213A10u: goto label_213a10;
            case 0x213A14u: goto label_213a14;
            case 0x213A50u: goto label_213a50;
            case 0x213A98u: goto label_213a98;
            case 0x213AD8u: goto label_213ad8;
            case 0x213ADCu: goto label_213adc;
            case 0x213AF0u: goto label_213af0;
            case 0x213B00u: goto label_213b00;
            case 0x213B08u: goto label_213b08;
            case 0x213B0Cu: goto label_213b0c;
            case 0x213B44u: goto label_213b44;
            case 0x213BBCu: goto label_213bbc;
            case 0x213BC8u: goto label_213bc8;
            case 0x213BF8u: goto label_213bf8;
            case 0x213C24u: goto label_213c24;
            case 0x213C2Cu: goto label_213c2c;
            case 0x213C74u: goto label_213c74;
            case 0x213C78u: goto label_213c78;
            case 0x213C7Cu: goto label_213c7c;
            case 0x213C9Cu: goto label_213c9c;
            case 0x213CC8u: goto label_213cc8;
            case 0x213CD0u: goto label_213cd0;
            case 0x213D50u: goto label_213d50;
            case 0x213D54u: goto label_213d54;
            case 0x213D7Cu: goto label_213d7c;
            case 0x213DD0u: goto label_213dd0;
            case 0x213E7Cu: goto label_213e7c;
            case 0x213E88u: goto label_213e88;
            case 0x213EA8u: goto label_213ea8;
            case 0x213EB8u: goto label_213eb8;
            case 0x213EBCu: goto label_213ebc;
            case 0x213EC4u: goto label_213ec4;
            case 0x213F70u: goto label_213f70;
            case 0x213F78u: goto label_213f78;
            case 0x213FE0u: goto label_213fe0;
            case 0x214020u: goto label_214020;
            case 0x214080u: goto label_214080;
            case 0x2140C0u: goto label_2140c0;
            case 0x21410Cu: goto label_21410c;
            case 0x21411Cu: goto label_21411c;
            case 0x214120u: goto label_214120;
            case 0x214198u: goto label_214198;
            case 0x2141A0u: goto label_2141a0;
            case 0x2141E0u: goto label_2141e0;
            case 0x2141ECu: goto label_2141ec;
            case 0x2141F4u: goto label_2141f4;
            case 0x214228u: goto label_214228;
            case 0x214234u: goto label_214234;
            case 0x214264u: goto label_214264;
            case 0x214294u: goto label_214294;
            case 0x2142C4u: goto label_2142c4;
            case 0x2142F4u: goto label_2142f4;
            case 0x21431Cu: goto label_21431c;
            case 0x214320u: goto label_214320;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x213AC8u; }
            if (ctx->pc != 0x213AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x213AC8u;
    // 0x213ac8: 0x844300de  lh          $v1, 0xDE($v0)
    ctx->pc = 0x213ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 222)));
    // 0x213acc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x213accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x213ad0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213AD0u;
    {
        const bool branch_taken_0x213ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213ad0) {
            ctx->pc = 0x213AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213AD0u;
            // 0x213ad4: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213AF0u;
            goto label_213af0;
        }
    }
    ctx->pc = 0x213AD8u;
label_213ad8:
    // 0x213ad8: 0x8e0301dc  lw          $v1, 0x1DC($s0)
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_213adc:
    // 0x213adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ae8: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x213AE8u;
    {
        const bool branch_taken_0x213ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213AE8u;
            // 0x213aec: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ae8) {
            ctx->pc = 0x214320u;
            goto label_214320;
        }
    }
    ctx->pc = 0x213AF0u;
label_213af0:
    // 0x213af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213AF0u;
    {
        const bool branch_taken_0x213af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213AF0u;
            // 0x213af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213af0) {
            ctx->pc = 0x213B00u;
            goto label_213b00;
        }
    }
    ctx->pc = 0x213AF8u;
    // 0x213af8: 0xc084be2  jal         func_212F88
    ctx->pc = 0x213AF8u;
    SET_GPR_U32(ctx, 31, 0x213B00u);
    ctx->pc = 0x213AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213AF8u;
            // 0x213afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B00u; }
        if (ctx->pc != 0x213B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B00u; }
        if (ctx->pc != 0x213B00u) { return; }
    }
    ctx->pc = 0x213B00u;
label_213b00:
    // 0x213b00: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x213b04: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x213b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_213b08:
    // 0x213b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x213b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_213b0c:
    // 0x213b0c: 0x12220063  beq         $s1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x213B0Cu;
    {
        const bool branch_taken_0x213b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x213B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B0Cu;
            // 0x213b10: 0x8e0301ec  lw          $v1, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b0c) {
            ctx->pc = 0x213C9Cu;
            goto label_213c9c;
        }
    }
    ctx->pc = 0x213B14u;
    // 0x213b14: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x213b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x213b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x213b1c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x213b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x213b20: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x213b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b24: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x213B24u;
    {
        const bool branch_taken_0x213b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213b24) {
            ctx->pc = 0x213C9Cu;
            goto label_213c9c;
        }
    }
    ctx->pc = 0x213B2Cu;
    // 0x213b2c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x213b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x213b30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213B30u;
    {
        const bool branch_taken_0x213b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B30u;
            // 0x213b34: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b30) {
            ctx->pc = 0x213B44u;
            goto label_213b44;
        }
    }
    ctx->pc = 0x213B38u;
    // 0x213b38: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x213b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x213b3c: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x213b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x213b40: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_213b44:
    // 0x213b44: 0xc60301c4  lwc1        $f3, 0x1C4($s0)
    ctx->pc = 0x213b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213b48: 0xc444c658  lwc1        $f4, -0x39A8($v0)
    ctx->pc = 0x213b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213b4c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x213b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x213b50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213b54: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x213b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x213b58: 0xc60501e4  lwc1        $f5, 0x1E4($s0)
    ctx->pc = 0x213b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213b64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213b68: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213b6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x213b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b70: 0x0  nop
    ctx->pc = 0x213b70u;
    // NOP
    // 0x213b74: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x213B74u;
    {
        const bool branch_taken_0x213b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B74u;
            // 0x213b78: 0xe60001e4  swc1        $f0, 0x1E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b74) {
            ctx->pc = 0x213BC8u;
            goto label_213bc8;
        }
    }
    ctx->pc = 0x213B7Cu;
    // 0x213b7c: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x213b80: 0xe60601e4  swc1        $f6, 0x1E4($s0)
    ctx->pc = 0x213b80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x213b84: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x213b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x213b88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x213b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x213b8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213b90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x213B90u;
    {
        const bool branch_taken_0x213b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213B90u;
            // 0x213b94: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b90) {
            ctx->pc = 0x213BBCu;
            goto label_213bbc;
        }
    }
    ctx->pc = 0x213B98u;
    // 0x213b98: 0x8e0301dc  lw          $v1, 0x1DC($s0)
    ctx->pc = 0x213b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x213b9c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x213b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x213ba0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x213BA0u;
    {
        const bool branch_taken_0x213ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BA0u;
            // 0x213ba4: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ba0) {
            ctx->pc = 0x213C78u;
            goto label_213c78;
        }
    }
    ctx->pc = 0x213BA8u;
    // 0x213ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bac: 0xc084be2  jal         func_212F88
    ctx->pc = 0x213BACu;
    SET_GPR_U32(ctx, 31, 0x213BB4u);
    ctx->pc = 0x213BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213BACu;
            // 0x213bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F88u;
    if (runtime->hasFunction(0x212F88u)) {
        auto targetFn = runtime->lookupFunction(0x212F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BB4u; }
        if (ctx->pc != 0x213BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F88_0x212f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BB4u; }
        if (ctx->pc != 0x213BB4u) { return; }
    }
    ctx->pc = 0x213BB4u;
    // 0x213bb4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x213BB4u;
    {
        const bool branch_taken_0x213bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BB4u;
            // 0x213bb8: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bb4) {
            ctx->pc = 0x213C7Cu;
            goto label_213c7c;
        }
    }
    ctx->pc = 0x213BBCu;
label_213bbc:
    // 0x213bbc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x213bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x213bc0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x213BC0u;
    {
        const bool branch_taken_0x213bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BC0u;
            // 0x213bc4: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bc0) {
            ctx->pc = 0x213C78u;
            goto label_213c78;
        }
    }
    ctx->pc = 0x213BC8u;
label_213bc8:
    // 0x213bc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x213bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x213bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213bd0: 0xc441cd2c  lwc1        $f1, -0x32D4($v0)
    ctx->pc = 0x213bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213bd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x213bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213bd8: 0x0  nop
    ctx->pc = 0x213bd8u;
    // NOP
    // 0x213bdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x213BDCu;
    {
        const bool branch_taken_0x213bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BDCu;
            // 0x213be0: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bdc) {
            ctx->pc = 0x213BF8u;
            goto label_213bf8;
        }
    }
    ctx->pc = 0x213BE4u;
    // 0x213be4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x213be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213be8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x213be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213bec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x213becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x213bf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x213BF0u;
    {
        const bool branch_taken_0x213bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BF0u;
            // 0x213bf4: 0x46010029  min.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf0) {
            ctx->pc = 0x213C24u;
            goto label_213c24;
        }
    }
    ctx->pc = 0x213BF8u;
label_213bf8:
    // 0x213bf8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x213bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c00: 0x0  nop
    ctx->pc = 0x213c00u;
    // NOP
    // 0x213c04: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x213C04u;
    {
        const bool branch_taken_0x213c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c04) {
            ctx->pc = 0x213C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C04u;
            // 0x213c08: 0xc60001c4  lwc1        $f0, 0x1C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x213C2Cu;
            goto label_213c2c;
        }
    }
    ctx->pc = 0x213C0Cu;
    // 0x213c0c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x213c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c10: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x213c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x213c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x213c18: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x213c18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x213c1c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x213c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x213c20: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x213c20u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_213c24:
    // 0x213c24: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x213c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x213c28: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x213c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213c2c:
    // 0x213c2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x213c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c34: 0x0  nop
    ctx->pc = 0x213c34u;
    // NOP
    // 0x213c38: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x213C38u;
    {
        const bool branch_taken_0x213c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c38) {
            ctx->pc = 0x213C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C38u;
            // 0x213c3c: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213C7Cu;
            goto label_213c7c;
        }
    }
    ctx->pc = 0x213C40u;
    // 0x213c40: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x213c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x213c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c48: 0x0  nop
    ctx->pc = 0x213c48u;
    // NOP
    // 0x213c4c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x213C4Cu;
    {
        const bool branch_taken_0x213c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c4c) {
            ctx->pc = 0x213C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C4Cu;
            // 0x213c50: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213C7Cu;
            goto label_213c7c;
        }
    }
    ctx->pc = 0x213C54u;
    // 0x213c54: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x213c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c58: 0x0  nop
    ctx->pc = 0x213c58u;
    // NOP
    // 0x213c5c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x213C5Cu;
    {
        const bool branch_taken_0x213c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c5c) {
            ctx->pc = 0x213C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C5Cu;
            // 0x213c60: 0xe60101e4  swc1        $f1, 0x1E4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x213C74u;
            goto label_213c74;
        }
    }
    ctx->pc = 0x213C64u;
    // 0x213c64: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x213c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x213c68: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x213c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x213c6c: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x213c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x213c70: 0xe60101e4  swc1        $f1, 0x1E4($s0)
    ctx->pc = 0x213c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
label_213c74:
    // 0x213c74: 0xe60101c4  swc1        $f1, 0x1C4($s0)
    ctx->pc = 0x213c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_213c78:
    // 0x213c78: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x213c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_213c7c:
    // 0x213c7c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x213c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x213c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213c84: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x213C84u;
    {
        const bool branch_taken_0x213c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c84) {
            ctx->pc = 0x213C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C84u;
            // 0x213c88: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D54u;
            goto label_213d54;
        }
    }
    ctx->pc = 0x213C8Cu;
    // 0x213c8c: 0xc084d2e  jal         func_2134B8
    ctx->pc = 0x213C8Cu;
    SET_GPR_U32(ctx, 31, 0x213C94u);
    ctx->pc = 0x213C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213C8Cu;
            // 0x213c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2134B8u;
    if (runtime->hasFunction(0x2134B8u)) {
        auto targetFn = runtime->lookupFunction(0x2134B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C94u; }
        if (ctx->pc != 0x213C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002134B8_0x2134b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213C94u; }
        if (ctx->pc != 0x213C94u) { return; }
    }
    ctx->pc = 0x213C94u;
    // 0x213c94: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x213C94u;
    {
        const bool branch_taken_0x213c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C94u;
            // 0x213c98: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c94) {
            ctx->pc = 0x213D54u;
            goto label_213d54;
        }
    }
    ctx->pc = 0x213C9Cu;
label_213c9c:
    // 0x213c9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x213c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x213ca0: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x213ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x213ca4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x213ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x213ca8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x213ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213cac: 0xae0301ec  sw          $v1, 0x1EC($s0)
    ctx->pc = 0x213cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 3));
    // 0x213cb0: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x213cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x213cb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213cb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x213CB8u;
    {
        const bool branch_taken_0x213cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213cb8) {
            ctx->pc = 0x213CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213CB8u;
            // 0x213cbc: 0xc60401e4  lwc1        $f4, 0x1E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x213CD0u;
            goto label_213cd0;
        }
    }
    ctx->pc = 0x213CC0u;
    // 0x213cc0: 0xc084d78  jal         func_2135E0
    ctx->pc = 0x213CC0u;
    SET_GPR_U32(ctx, 31, 0x213CC8u);
    ctx->pc = 0x213CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213CC0u;
            // 0x213cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2135E0u;
    runtime->cooperativeGuestYield();
    goto label_2135e0;
    ctx->pc = 0x213CC8u;
label_213cc8:
    // 0x213cc8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x213CC8u;
    {
        const bool branch_taken_0x213cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213CC8u;
            // 0x213ccc: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cc8) {
            ctx->pc = 0x213D54u;
            goto label_213d54;
        }
    }
    ctx->pc = 0x213CD0u;
label_213cd0:
    // 0x213cd0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x213cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x213cd4: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x213cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213cd8: 0x0  nop
    ctx->pc = 0x213cd8u;
    // NOP
    // 0x213cdc: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x213CDCu;
    {
        const bool branch_taken_0x213cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213cdc) {
            ctx->pc = 0x213CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213CDCu;
            // 0x213ce0: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D54u;
            goto label_213d54;
        }
    }
    ctx->pc = 0x213CE4u;
    // 0x213ce4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x213ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x213ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213cec: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x213cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213cf0: 0x0  nop
    ctx->pc = 0x213cf0u;
    // NOP
    // 0x213cf4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x213CF4u;
    {
        const bool branch_taken_0x213cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213CF4u;
            // 0x213cf8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cf4) {
            ctx->pc = 0x213D50u;
            goto label_213d50;
        }
    }
    ctx->pc = 0x213CFCu;
    // 0x213cfc: 0xc60101c4  lwc1        $f1, 0x1C4($s0)
    ctx->pc = 0x213cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213d00: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x213d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213d04: 0x46050869  min.s       $f1, $f1, $f5
    ctx->pc = 0x213d04u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[5]);
    // 0x213d08: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x213d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x213d0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213d10: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x213d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x213d14: 0xe60101c4  swc1        $f1, 0x1C4($s0)
    ctx->pc = 0x213d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x213d18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213d1c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x213d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x213d20: 0xe60001e4  swc1        $f0, 0x1E4($s0)
    ctx->pc = 0x213d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x213d24: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x213d24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d28: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x213d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213d2c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x213d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d30: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x213d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x213d34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x213d34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213d38: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x213d38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x213d3c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x213d3cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x213d40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x213D40u;
    {
        const bool branch_taken_0x213d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213D40u;
            // 0x213d44: 0xe60101c4  swc1        $f1, 0x1C4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d40) {
            ctx->pc = 0x213D50u;
            goto label_213d50;
        }
    }
    ctx->pc = 0x213D48u;
    // 0x213d48: 0xe60501e4  swc1        $f5, 0x1E4($s0)
    ctx->pc = 0x213d48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x213d4c: 0xe60501c4  swc1        $f5, 0x1C4($s0)
    ctx->pc = 0x213d4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
label_213d50:
    // 0x213d50: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x213d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
label_213d54:
    // 0x213d54: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x213d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x213d58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x213D58u;
    {
        const bool branch_taken_0x213d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213d58) {
            ctx->pc = 0x213D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213D58u;
            // 0x213d5c: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D7Cu;
            goto label_213d7c;
        }
    }
    ctx->pc = 0x213D60u;
    // 0x213d60: 0xc60c01e4  lwc1        $f12, 0x1E4($s0)
    ctx->pc = 0x213d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213d6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x213d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213d70: 0xc084cfc  jal         func_2133F0
    ctx->pc = 0x213D70u;
    SET_GPR_U32(ctx, 31, 0x213D78u);
    ctx->pc = 0x213D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213D70u;
            // 0x213d74: 0xc60e01c4  lwc1        $f14, 0x1C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2133F0u;
    if (runtime->hasFunction(0x2133F0u)) {
        auto targetFn = runtime->lookupFunction(0x2133F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D78u; }
        if (ctx->pc != 0x213D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2133f0_0x2134b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213D78u; }
        if (ctx->pc != 0x213D78u) { return; }
    }
    ctx->pc = 0x213D78u;
    // 0x213d78: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x213d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_213d7c:
    // 0x213d7c: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x213d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x213d80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213d84: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x213D84u;
    {
        const bool branch_taken_0x213d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d84) {
            ctx->pc = 0x213D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213D84u;
            // 0x213d88: 0x8e0401dc  lw          $a0, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213FE0u;
            goto label_213fe0;
        }
    }
    ctx->pc = 0x213D8Cu;
    // 0x213d8c: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x213d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x213d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213d94: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x213d94u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213d98: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x213d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213d9c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x213d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213da0: 0x0  nop
    ctx->pc = 0x213da0u;
    // NOP
    // 0x213da4: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x213DA4u;
    {
        const bool branch_taken_0x213da4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x213DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213DA4u;
            // 0x213da8: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213da4) {
            ctx->pc = 0x213EA8u;
            goto label_213ea8;
        }
    }
    ctx->pc = 0x213DACu;
    // 0x213dac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213DACu;
    {
        const bool branch_taken_0x213dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213dac) {
            ctx->pc = 0x213DD0u;
            goto label_213dd0;
        }
    }
    ctx->pc = 0x213DB4u;
    // 0x213db4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x213DB4u;
    SET_GPR_U32(ctx, 31, 0x213DBCu);
    ctx->pc = 0x213DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213DB4u;
            // 0x213db8: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DBCu; }
        if (ctx->pc != 0x213DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DBCu; }
        if (ctx->pc != 0x213DBCu) { return; }
    }
    ctx->pc = 0x213DBCu;
    // 0x213dbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213DBCu;
    {
        const bool branch_taken_0x213dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213dbc) {
            ctx->pc = 0x213DD0u;
            goto label_213dd0;
        }
    }
    ctx->pc = 0x213DC4u;
    // 0x213dc4: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x213dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x213dc8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x213DC8u;
    SET_GPR_U32(ctx, 31, 0x213DD0u);
    ctx->pc = 0x213DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213DC8u;
            // 0x213dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DD0u; }
        if (ctx->pc != 0x213DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213DD0u; }
        if (ctx->pc != 0x213DD0u) { return; }
    }
    ctx->pc = 0x213DD0u;
label_213dd0:
    // 0x213dd0: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x213dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213dd8: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x213dd8u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x213ddc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x213de0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x213de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x213de4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213de8: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x213de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x213dec: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x213decu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x213df0: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x213df4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x213dfc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x213dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x213e00: 0xc05c470  jal         func_1711C0
    ctx->pc = 0x213E00u;
    SET_GPR_U32(ctx, 31, 0x213E08u);
    ctx->pc = 0x213E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213E00u;
            // 0x213e04: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E08u; }
        if (ctx->pc != 0x213E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c0_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E08u; }
        if (ctx->pc != 0x213E08u) { return; }
    }
    ctx->pc = 0x213E08u;
    // 0x213e08: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x213e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x213e0c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x213e10: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213e18: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x213e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x213e1c: 0xc441016c  lwc1        $f1, 0x16C($v0)
    ctx->pc = 0x213e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e20: 0x84420170  lh          $v0, 0x170($v0)
    ctx->pc = 0x213e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x213e24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213e28: 0xc482c658  lwc1        $f2, -0x39A8($a0)
    ctx->pc = 0x213e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213e30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213e34: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x213e38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x213e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213e3c: 0x8e0601f0  lw          $a2, 0x1F0($s0)
    ctx->pc = 0x213e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x213e40: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x213e40u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x213e44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213e48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x213e4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x213e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x213e50: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x213e50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x213e54: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x213e58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x213e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x213e5c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x213e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213e60: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x213e60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x213e64: 0x2262823  subu        $a1, $s1, $a2
    ctx->pc = 0x213e64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x213e68: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x213e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x213e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213E6Cu;
    {
        const bool branch_taken_0x213e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E6Cu;
            // 0x213e70: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e6c) {
            ctx->pc = 0x213E7Cu;
            goto label_213e7c;
        }
    }
    ctx->pc = 0x213E74u;
    // 0x213e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x213E74u;
    {
        const bool branch_taken_0x213e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E74u;
            // 0x213e78: 0xc48821  addu        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e74) {
            ctx->pc = 0x213E88u;
            goto label_213e88;
        }
    }
    ctx->pc = 0x213E7Cu;
label_213e7c:
    // 0x213e7c: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x213e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x213e80: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x213e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213e84: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x213e84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_213e88:
    // 0x213e88: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x213e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x213e8c: 0xc05c46e  jal         func_1711B8
    ctx->pc = 0x213E8Cu;
    SET_GPR_U32(ctx, 31, 0x213E94u);
    ctx->pc = 0x213E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213E8Cu;
            // 0x213e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711B8u;
    if (runtime->hasFunction(0x1711B8u)) {
        auto targetFn = runtime->lookupFunction(0x1711B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E94u; }
        if (ctx->pc != 0x213E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001711b8_0x1711b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213E94u; }
        if (ctx->pc != 0x213E94u) { return; }
    }
    ctx->pc = 0x213E94u;
    // 0x213e94: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x213e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x213e98: 0xae1101f0  sw          $s1, 0x1F0($s0)
    ctx->pc = 0x213e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 17));
    // 0x213e9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x213e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x213ea0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213EA0u;
    {
        const bool branch_taken_0x213ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213EA0u;
            // 0x213ea4: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ea0) {
            ctx->pc = 0x213EB8u;
            goto label_213eb8;
        }
    }
    ctx->pc = 0x213EA8u;
label_213ea8:
    // 0x213ea8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x213EA8u;
    {
        const bool branch_taken_0x213ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ea8) {
            ctx->pc = 0x213EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213EA8u;
            // 0x213eac: 0x8e0201dc  lw          $v0, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213EBCu;
            goto label_213ebc;
        }
    }
    ctx->pc = 0x213EB0u;
    // 0x213eb0: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x213EB0u;
    SET_GPR_U32(ctx, 31, 0x213EB8u);
    ctx->pc = 0x213EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213EB0u;
            // 0x213eb4: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EB8u; }
        if (ctx->pc != 0x213EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213EB8u; }
        if (ctx->pc != 0x213EB8u) { return; }
    }
    ctx->pc = 0x213EB8u;
label_213eb8:
    // 0x213eb8: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_213ebc:
    // 0x213ebc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213EBCu;
    {
        const bool branch_taken_0x213ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213ebc) {
            ctx->pc = 0x213EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213EBCu;
            // 0x213ec0: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213EC4u;
            goto label_213ec4;
        }
    }
    ctx->pc = 0x213EC4u;
label_213ec4:
    // 0x213ec4: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x213ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x213ec8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x213ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213ecc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x213eccu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ed4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x213ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213ed8: 0x0  nop
    ctx->pc = 0x213ed8u;
    // NOP
    // 0x213edc: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x213EDCu;
    {
        const bool branch_taken_0x213edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213EDCu;
            // 0x213ee0: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213edc) {
            ctx->pc = 0x213F78u;
            goto label_213f78;
        }
    }
    ctx->pc = 0x213EE4u;
    // 0x213ee4: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x213ee8: 0x506000c2  beql        $v1, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x213EE8u;
    {
        const bool branch_taken_0x213ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ee8) {
            ctx->pc = 0x213EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213EE8u;
            // 0x213eec: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x213EF0u;
    // 0x213ef0: 0xc442011c  lwc1        $f2, 0x11C($v0)
    ctx->pc = 0x213ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213ef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x213ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x213efc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213f04: 0x8e0301e8  lw          $v1, 0x1E8($s0)
    ctx->pc = 0x213f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x213f08: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x213f08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213f0c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x213f0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x213f10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213f14: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x213f14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x213f18: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x213f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x213f1c: 0x4a820844  vsubx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x213f1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213f20: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x213f20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213f24: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x213f24u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213f2c: 0x4602a803  div.s       $f0, $f21, $f2
    ctx->pc = 0x213f2cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[2];
    // 0x213f30: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x213f30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x213f34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x213f38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x213f3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x213f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213f40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x213f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x213f44: 0x0  nop
    ctx->pc = 0x213f44u;
    // NOP
    // 0x213f48: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x213F48u;
    {
        const bool branch_taken_0x213f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213f48) {
            ctx->pc = 0x213F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213F48u;
            // 0x213f4c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213F70u;
            goto label_213f70;
        }
    }
    ctx->pc = 0x213F50u;
    // 0x213f50: 0x4603a832  c.eq.s      $f21, $f3
    ctx->pc = 0x213f50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213f54: 0x0  nop
    ctx->pc = 0x213f54u;
    // NOP
    // 0x213f58: 0x450000a6  bc1f        . + 4 + (0xA6 << 2)
    ctx->pc = 0x213F58u;
    {
        const bool branch_taken_0x213f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F58u;
            // 0x213f5c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f58) {
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x213F60u;
    // 0x213f60: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x213f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213f64: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x213f64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213f68: 0x450100a2  bc1t        . + 4 + (0xA2 << 2)
    ctx->pc = 0x213F68u;
    {
        const bool branch_taken_0x213f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213f68) {
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x213F70u;
label_213f70:
    // 0x213f70: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x213F70u;
    {
        const bool branch_taken_0x213f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F70u;
            // 0x213f74: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f70) {
            ctx->pc = 0x2141ECu;
            goto label_2141ec;
        }
    }
    ctx->pc = 0x213F78u;
label_213f78:
    // 0x213f78: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x213f7c: 0x5060009d  beql        $v1, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x213F7Cu;
    {
        const bool branch_taken_0x213f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f7c) {
            ctx->pc = 0x213F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213F7Cu;
            // 0x213f80: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x213F84u;
    // 0x213f84: 0xc442011c  lwc1        $f2, 0x11C($v0)
    ctx->pc = 0x213f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213f88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213f8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x213f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x213f90: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213f98: 0x8e0501e8  lw          $a1, 0x1E8($s0)
    ctx->pc = 0x213f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x213f9c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x213f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213fa0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x213fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x213fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213fa8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x213fa8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x213fac: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x213facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x213fb0: 0x4a820844  vsubx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x213fb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213fb4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x213fb4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213fb8: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x213fb8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213fc0: 0x4602a803  div.s       $f0, $f21, $f2
    ctx->pc = 0x213fc0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[2];
    // 0x213fc4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x213fc4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x213fc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x213fcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x213fd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x213fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213fd4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x213fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x213fd8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x213FD8u;
    {
        const bool branch_taken_0x213fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213fd8) {
            ctx->pc = 0x2141E0u;
            goto label_2141e0;
        }
    }
    ctx->pc = 0x213FE0u;
label_213fe0:
    // 0x213fe0: 0x5080004f  beql        $a0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x213FE0u;
    {
        const bool branch_taken_0x213fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x213fe0) {
            ctx->pc = 0x213FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213FE0u;
            // 0x213fe4: 0xc60001c4  lwc1        $f0, 0x1C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x213FE8u;
    // 0x213fe8: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x213fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213fec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x213fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x213ff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ff4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x213ff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213ff8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x213FF8u;
    {
        const bool branch_taken_0x213ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213ff8) {
            ctx->pc = 0x214020u;
            goto label_214020;
        }
    }
    ctx->pc = 0x214000u;
    // 0x214000: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x214004: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x214004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x214008: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x214008u;
    {
        const bool branch_taken_0x214008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214008u;
            // 0x21400c: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214008) {
            ctx->pc = 0x21410Cu;
            goto label_21410c;
        }
    }
    ctx->pc = 0x214010u;
    // 0x214010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214018: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x214018u;
    {
        const bool branch_taken_0x214018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21401Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214018u;
            // 0x21401c: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214018) {
            ctx->pc = 0x21410Cu;
            goto label_21410c;
        }
    }
    ctx->pc = 0x214020u;
label_214020:
    // 0x214020: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x214020u;
    SET_GPR_U32(ctx, 31, 0x214028u);
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214028u; }
        if (ctx->pc != 0x214028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214028u; }
        if (ctx->pc != 0x214028u) { return; }
    }
    ctx->pc = 0x214028u;
    // 0x214028: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x214028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21402c: 0x8e0401dc  lw          $a0, 0x1DC($s0)
    ctx->pc = 0x21402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x214030: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x214030u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214034: 0xc04015e  jal         func_100578
    ctx->pc = 0x214034u;
    SET_GPR_U32(ctx, 31, 0x21403Cu);
    ctx->pc = 0x214038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214034u;
            // 0x214038: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21403Cu; }
        if (ctx->pc != 0x21403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21403Cu; }
        if (ctx->pc != 0x21403Cu) { return; }
    }
    ctx->pc = 0x21403Cu;
    // 0x21403c: 0x8e0501dc  lw          $a1, 0x1DC($s0)
    ctx->pc = 0x21403cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x214040: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x214040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x214044: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x214048: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214048u;
    {
        const bool branch_taken_0x214048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214048u;
            // 0x21404c: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214048) {
            ctx->pc = 0x214080u;
            goto label_214080;
        }
    }
    ctx->pc = 0x214050u;
    // 0x214050: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x214050u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214054: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x214058: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x214058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21405c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21405cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214064: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x214064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214068: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x214068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21406c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x214070: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x214070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x214074: 0x40f809  jalr        $v0
    ctx->pc = 0x214074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21407Cu);
        ctx->pc = 0x214078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214074u;
            // 0x214078: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21407Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2135E0u: goto label_2135e0;
            case 0x213660u: goto label_213660;
            case 0x2136D0u: goto label_2136d0;
            case 0x213708u: goto label_213708;
            case 0x213730u: goto label_213730;
            case 0x2137A8u: goto label_2137a8;
            case 0x2137D8u: goto label_2137d8;
            case 0x2137E0u: goto label_2137e0;
            case 0x213834u: goto label_213834;
            case 0x213858u: goto label_213858;
            case 0x213978u: goto label_213978;
            case 0x213998u: goto label_213998;
            case 0x2139BCu: goto label_2139bc;
            case 0x2139ECu: goto label_2139ec;
            case 0x213A10u: goto label_213a10;
            case 0x213A14u: goto label_213a14;
            case 0x213A50u: goto label_213a50;
            case 0x213A98u: goto label_213a98;
            case 0x213AD8u: goto label_213ad8;
            case 0x213ADCu: goto label_213adc;
            case 0x213AF0u: goto label_213af0;
            case 0x213B00u: goto label_213b00;
            case 0x213B08u: goto label_213b08;
            case 0x213B0Cu: goto label_213b0c;
            case 0x213B44u: goto label_213b44;
            case 0x213BBCu: goto label_213bbc;
            case 0x213BC8u: goto label_213bc8;
            case 0x213BF8u: goto label_213bf8;
            case 0x213C24u: goto label_213c24;
            case 0x213C2Cu: goto label_213c2c;
            case 0x213C74u: goto label_213c74;
            case 0x213C78u: goto label_213c78;
            case 0x213C7Cu: goto label_213c7c;
            case 0x213C9Cu: goto label_213c9c;
            case 0x213CC8u: goto label_213cc8;
            case 0x213CD0u: goto label_213cd0;
            case 0x213D50u: goto label_213d50;
            case 0x213D54u: goto label_213d54;
            case 0x213D7Cu: goto label_213d7c;
            case 0x213DD0u: goto label_213dd0;
            case 0x213E7Cu: goto label_213e7c;
            case 0x213E88u: goto label_213e88;
            case 0x213EA8u: goto label_213ea8;
            case 0x213EB8u: goto label_213eb8;
            case 0x213EBCu: goto label_213ebc;
            case 0x213EC4u: goto label_213ec4;
            case 0x213F70u: goto label_213f70;
            case 0x213F78u: goto label_213f78;
            case 0x213FE0u: goto label_213fe0;
            case 0x214020u: goto label_214020;
            case 0x214080u: goto label_214080;
            case 0x2140C0u: goto label_2140c0;
            case 0x21410Cu: goto label_21410c;
            case 0x21411Cu: goto label_21411c;
            case 0x214120u: goto label_214120;
            case 0x214198u: goto label_214198;
            case 0x2141A0u: goto label_2141a0;
            case 0x2141E0u: goto label_2141e0;
            case 0x2141ECu: goto label_2141ec;
            case 0x2141F4u: goto label_2141f4;
            case 0x214228u: goto label_214228;
            case 0x214234u: goto label_214234;
            case 0x214264u: goto label_214264;
            case 0x214294u: goto label_214294;
            case 0x2142C4u: goto label_2142c4;
            case 0x2142F4u: goto label_2142f4;
            case 0x21431Cu: goto label_21431c;
            case 0x214320u: goto label_214320;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21407Cu; }
            if (ctx->pc != 0x21407Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21407Cu;
    // 0x21407c: 0x0  nop
    ctx->pc = 0x21407cu;
    // NOP
label_214080:
    // 0x214080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214084: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x214084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214088: 0x0  nop
    ctx->pc = 0x214088u;
    // NOP
    // 0x21408c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x21408Cu;
    {
        const bool branch_taken_0x21408c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21408Cu;
            // 0x214090: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21408c) {
            ctx->pc = 0x21410Cu;
            goto label_21410c;
        }
    }
    ctx->pc = 0x214094u;
    // 0x214094: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x214094u;
    {
        const bool branch_taken_0x214094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214094) {
            ctx->pc = 0x214098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214094u;
            // 0x214098: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2140C0u;
            goto label_2140c0;
        }
    }
    ctx->pc = 0x21409Cu;
    // 0x21409c: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x21409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2140a0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2140A0u;
    SET_GPR_U32(ctx, 31, 0x2140A8u);
    ctx->pc = 0x2140A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140A0u;
            // 0x2140a4: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140A8u; }
        if (ctx->pc != 0x2140A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140A8u; }
        if (ctx->pc != 0x2140A8u) { return; }
    }
    ctx->pc = 0x2140A8u;
    // 0x2140a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2140A8u;
    {
        const bool branch_taken_0x2140a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2140a8) {
            ctx->pc = 0x2140ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2140A8u;
            // 0x2140ac: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2140C0u;
            goto label_2140c0;
        }
    }
    ctx->pc = 0x2140B0u;
    // 0x2140b0: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x2140b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x2140b4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2140B4u;
    SET_GPR_U32(ctx, 31, 0x2140BCu);
    ctx->pc = 0x2140B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140B4u;
            // 0x2140b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140BCu; }
        if (ctx->pc != 0x2140BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140BCu; }
        if (ctx->pc != 0x2140BCu) { return; }
    }
    ctx->pc = 0x2140BCu;
    // 0x2140bc: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x2140bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_2140c0:
    // 0x2140c0: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x2140c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140c4: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x2140c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2140c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2140c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2140cc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2140ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2140d0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2140d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2140d4: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2140d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2140d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2140d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2140dc: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x2140dcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x2140e0: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x2140e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x2140e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2140e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2140e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2140e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2140ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2140ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2140f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2140f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2140f4: 0xc05c470  jal         func_1711C0
    ctx->pc = 0x2140F4u;
    SET_GPR_U32(ctx, 31, 0x2140FCu);
    ctx->pc = 0x2140F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140F4u;
            // 0x2140f8: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140FCu; }
        if (ctx->pc != 0x2140FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c0_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140FCu; }
        if (ctx->pc != 0x2140FCu) { return; }
    }
    ctx->pc = 0x2140FCu;
    // 0x2140fc: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x2140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x214100: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x214100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x214104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x214104u;
    {
        const bool branch_taken_0x214104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214104u;
            // 0x214108: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214104) {
            ctx->pc = 0x21411Cu;
            goto label_21411c;
        }
    }
    ctx->pc = 0x21410Cu;
label_21410c:
    // 0x21410c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21410Cu;
    {
        const bool branch_taken_0x21410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21410c) {
            ctx->pc = 0x214110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21410Cu;
            // 0x214110: 0xc60001c4  lwc1        $f0, 0x1C4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x214114u;
    // 0x214114: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x214114u;
    SET_GPR_U32(ctx, 31, 0x21411Cu);
    ctx->pc = 0x214118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214114u;
            // 0x214118: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21411Cu; }
        if (ctx->pc != 0x21411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21411Cu; }
        if (ctx->pc != 0x21411Cu) { return; }
    }
    ctx->pc = 0x21411Cu;
label_21411c:
    // 0x21411c: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x21411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214120:
    // 0x214120: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x214120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x214124: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x214124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214128: 0x0  nop
    ctx->pc = 0x214128u;
    // NOP
    // 0x21412c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x21412Cu;
    {
        const bool branch_taken_0x21412c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21412Cu;
            // 0x214130: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21412c) {
            ctx->pc = 0x2141A0u;
            goto label_2141a0;
        }
    }
    ctx->pc = 0x214134u;
    // 0x214134: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x214138: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x214138u;
    {
        const bool branch_taken_0x214138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214138) {
            ctx->pc = 0x21413Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214138u;
            // 0x21413c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x214140u;
    // 0x214140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x214144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x214148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21414c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21414cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214150: 0xc60201e4  lwc1        $f2, 0x1E4($s0)
    ctx->pc = 0x214150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214154: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x214154u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x214158: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x214158u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
    // 0x21415c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x21415cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x214160: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x214160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x214164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x214164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x214168: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x214168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21416c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21416cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x214170: 0x0  nop
    ctx->pc = 0x214170u;
    // NOP
    // 0x214174: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x214174u;
    {
        const bool branch_taken_0x214174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214174) {
            ctx->pc = 0x214178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214174u;
            // 0x214178: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214198u;
            goto label_214198;
        }
    }
    ctx->pc = 0x21417Cu;
    // 0x21417c: 0x4603a832  c.eq.s      $f21, $f3
    ctx->pc = 0x21417cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214180: 0x0  nop
    ctx->pc = 0x214180u;
    // NOP
    // 0x214184: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x214184u;
    {
        const bool branch_taken_0x214184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214184u;
            // 0x214188: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214184) {
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x21418Cu;
    // 0x21418c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x21418cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214190: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x214190u;
    {
        const bool branch_taken_0x214190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214190) {
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x214198u;
label_214198:
    // 0x214198: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x214198u;
    {
        const bool branch_taken_0x214198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214198u;
            // 0x21419c: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214198) {
            ctx->pc = 0x2141ECu;
            goto label_2141ec;
        }
    }
    ctx->pc = 0x2141A0u;
label_2141a0:
    // 0x2141a0: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x2141a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2141a4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2141A4u;
    {
        const bool branch_taken_0x2141a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141a4) {
            ctx->pc = 0x2141A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2141A4u;
            // 0x2141a8: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x2141ACu;
    // 0x2141ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2141acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2141b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2141b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2141b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2141b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2141b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2141bc: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x2141bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2141c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2141c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2141c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2141c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2141c8: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2141c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x2141cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2141ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2141d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2141d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2141d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2141d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2141d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2141d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2141dc: 0x0  nop
    ctx->pc = 0x2141dcu;
    // NOP
label_2141e0:
    // 0x2141e0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2141E0u;
    {
        const bool branch_taken_0x2141e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2141E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2141E0u;
            // 0x2141e4: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141e0) {
            ctx->pc = 0x2141F4u;
            goto label_2141f4;
        }
    }
    ctx->pc = 0x2141E8u;
    // 0x2141e8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2141e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2141ec:
    // 0x2141ec: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x2141ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x2141f0: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_2141f4:
    // 0x2141f4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2141F4u;
    {
        const bool branch_taken_0x2141f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2141F4u;
            // 0x2141f8: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141f4) {
            ctx->pc = 0x21431Cu;
            goto label_21431c;
        }
    }
    ctx->pc = 0x2141FCu;
    // 0x2141fc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2141FCu;
    {
        const bool branch_taken_0x2141fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141fc) {
            ctx->pc = 0x214200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2141FCu;
            // 0x214200: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214234u;
            goto label_214234;
        }
    }
    ctx->pc = 0x214204u;
    // 0x214204: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x214204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x214208: 0xc05e996  jal         func_17A658
    ctx->pc = 0x214208u;
    SET_GPR_U32(ctx, 31, 0x214210u);
    ctx->pc = 0x21420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214208u;
            // 0x21420c: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214210u; }
        if (ctx->pc != 0x214210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214210u; }
        if (ctx->pc != 0x214210u) { return; }
    }
    ctx->pc = 0x214210u;
    // 0x214210: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x214210u;
    {
        const bool branch_taken_0x214210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214210) {
            ctx->pc = 0x214214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214210u;
            // 0x214214: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214228u;
            goto label_214228;
        }
    }
    ctx->pc = 0x214218u;
    // 0x214218: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x214218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x21421c: 0xc05c294  jal         func_170A50
    ctx->pc = 0x21421Cu;
    SET_GPR_U32(ctx, 31, 0x214224u);
    ctx->pc = 0x214220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21421Cu;
            // 0x214220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214224u; }
        if (ctx->pc != 0x214224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214224u; }
        if (ctx->pc != 0x214224u) { return; }
    }
    ctx->pc = 0x214224u;
    // 0x214224: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x214224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_214228:
    // 0x214228: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x214228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21422c: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x21422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x214230: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_214234:
    // 0x214234: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x214234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x214238: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x214238u;
    {
        const bool branch_taken_0x214238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214238) {
            ctx->pc = 0x21423Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214238u;
            // 0x21423c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214264u;
            goto label_214264;
        }
    }
    ctx->pc = 0x214240u;
    // 0x214240: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x214240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x214244: 0xc05e996  jal         func_17A658
    ctx->pc = 0x214244u;
    SET_GPR_U32(ctx, 31, 0x21424Cu);
    ctx->pc = 0x214248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214244u;
            // 0x214248: 0x2484005c  addiu       $a0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21424Cu; }
        if (ctx->pc != 0x21424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21424Cu; }
        if (ctx->pc != 0x21424Cu) { return; }
    }
    ctx->pc = 0x21424Cu;
    // 0x21424c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21424Cu;
    {
        const bool branch_taken_0x21424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21424c) {
            ctx->pc = 0x214250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21424Cu;
            // 0x214250: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214264u;
            goto label_214264;
        }
    }
    ctx->pc = 0x214254u;
    // 0x214254: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x214258: 0xc05c294  jal         func_170A50
    ctx->pc = 0x214258u;
    SET_GPR_U32(ctx, 31, 0x214260u);
    ctx->pc = 0x21425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214258u;
            // 0x21425c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214260u; }
        if (ctx->pc != 0x214260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214260u; }
        if (ctx->pc != 0x214260u) { return; }
    }
    ctx->pc = 0x214260u;
    // 0x214260: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_214264:
    // 0x214264: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x214264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x214268: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x214268u;
    {
        const bool branch_taken_0x214268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214268) {
            ctx->pc = 0x21426Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214268u;
            // 0x21426c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214294u;
            goto label_214294;
        }
    }
    ctx->pc = 0x214270u;
    // 0x214270: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x214274: 0xc05e996  jal         func_17A658
    ctx->pc = 0x214274u;
    SET_GPR_U32(ctx, 31, 0x21427Cu);
    ctx->pc = 0x214278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214274u;
            // 0x214278: 0x24840074  addiu       $a0, $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21427Cu; }
        if (ctx->pc != 0x21427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21427Cu; }
        if (ctx->pc != 0x21427Cu) { return; }
    }
    ctx->pc = 0x21427Cu;
    // 0x21427c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21427Cu;
    {
        const bool branch_taken_0x21427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21427c) {
            ctx->pc = 0x214280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21427Cu;
            // 0x214280: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214294u;
            goto label_214294;
        }
    }
    ctx->pc = 0x214284u;
    // 0x214284: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x214284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x214288: 0xc05c294  jal         func_170A50
    ctx->pc = 0x214288u;
    SET_GPR_U32(ctx, 31, 0x214290u);
    ctx->pc = 0x21428Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214288u;
            // 0x21428c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214290u; }
        if (ctx->pc != 0x214290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214290u; }
        if (ctx->pc != 0x214290u) { return; }
    }
    ctx->pc = 0x214290u;
    // 0x214290: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_214294:
    // 0x214294: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x214294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x214298: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x214298u;
    {
        const bool branch_taken_0x214298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214298) {
            ctx->pc = 0x21429Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214298u;
            // 0x21429c: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2142C4u;
            goto label_2142c4;
        }
    }
    ctx->pc = 0x2142A0u;
    // 0x2142a0: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x2142a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2142a4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2142A4u;
    SET_GPR_U32(ctx, 31, 0x2142ACu);
    ctx->pc = 0x2142A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142A4u;
            // 0x2142a8: 0x24840128  addiu       $a0, $a0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142ACu; }
        if (ctx->pc != 0x2142ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142ACu; }
        if (ctx->pc != 0x2142ACu) { return; }
    }
    ctx->pc = 0x2142ACu;
    // 0x2142ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2142ACu;
    {
        const bool branch_taken_0x2142ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2142ac) {
            ctx->pc = 0x2142B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2142ACu;
            // 0x2142b0: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2142C4u;
            goto label_2142c4;
        }
    }
    ctx->pc = 0x2142B4u;
    // 0x2142b4: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2142b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2142b8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2142B8u;
    SET_GPR_U32(ctx, 31, 0x2142C0u);
    ctx->pc = 0x2142BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142B8u;
            // 0x2142bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142C0u; }
        if (ctx->pc != 0x2142C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142C0u; }
        if (ctx->pc != 0x2142C0u) { return; }
    }
    ctx->pc = 0x2142C0u;
    // 0x2142c0: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_2142c4:
    // 0x2142c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2142c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2142c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2142C8u;
    {
        const bool branch_taken_0x2142c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2142c8) {
            ctx->pc = 0x2142CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2142C8u;
            // 0x2142cc: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2142F4u;
            goto label_2142f4;
        }
    }
    ctx->pc = 0x2142D0u;
    // 0x2142d0: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x2142d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2142d4: 0xc05e996  jal         func_17A658
    ctx->pc = 0x2142D4u;
    SET_GPR_U32(ctx, 31, 0x2142DCu);
    ctx->pc = 0x2142D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142D4u;
            // 0x2142d8: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142DCu; }
        if (ctx->pc != 0x2142DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142DCu; }
        if (ctx->pc != 0x2142DCu) { return; }
    }
    ctx->pc = 0x2142DCu;
    // 0x2142dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2142DCu;
    {
        const bool branch_taken_0x2142dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2142dc) {
            ctx->pc = 0x2142E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2142DCu;
            // 0x2142e0: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2142F4u;
            goto label_2142f4;
        }
    }
    ctx->pc = 0x2142E4u;
    // 0x2142e4: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2142e8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2142E8u;
    SET_GPR_U32(ctx, 31, 0x2142F0u);
    ctx->pc = 0x2142ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142E8u;
            // 0x2142ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142F0u; }
        if (ctx->pc != 0x2142F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142F0u; }
        if (ctx->pc != 0x2142F0u) { return; }
    }
    ctx->pc = 0x2142F0u;
    // 0x2142f0: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_2142f4:
    // 0x2142f4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2142f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2142f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2142F8u;
    {
        const bool branch_taken_0x2142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2142F8u;
            // 0x2142fc: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142f8) {
            ctx->pc = 0x21431Cu;
            goto label_21431c;
        }
    }
    ctx->pc = 0x214300u;
    // 0x214300: 0xc05e996  jal         func_17A658
    ctx->pc = 0x214300u;
    SET_GPR_U32(ctx, 31, 0x214308u);
    ctx->pc = 0x214304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214300u;
            // 0x214304: 0x24847da8  addiu       $a0, $a0, 0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214308u; }
        if (ctx->pc != 0x214308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214308u; }
        if (ctx->pc != 0x214308u) { return; }
    }
    ctx->pc = 0x214308u;
    // 0x214308: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214308) {
            ctx->pc = 0x21430Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214308u;
            // 0x21430c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214320u;
            goto label_214320;
        }
    }
    ctx->pc = 0x214310u;
    // 0x214310: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x214314: 0xc05c294  jal         func_170A50
    ctx->pc = 0x214314u;
    SET_GPR_U32(ctx, 31, 0x21431Cu);
    ctx->pc = 0x214318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214314u;
            // 0x214318: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21431Cu; }
        if (ctx->pc != 0x21431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21431Cu; }
        if (ctx->pc != 0x21431Cu) { return; }
    }
    ctx->pc = 0x21431Cu;
label_21431c:
    // 0x21431c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21431cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214320:
    // 0x214320: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x214320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x214324: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x214324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214328: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x214328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21432c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214330: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x214330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x214334: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x214334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214338: 0x3e00008  jr          $ra
    ctx->pc = 0x214338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214338u;
            // 0x21433c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2135E0u: goto label_2135e0;
            case 0x213660u: goto label_213660;
            case 0x2136D0u: goto label_2136d0;
            case 0x213708u: goto label_213708;
            case 0x213730u: goto label_213730;
            case 0x2137A8u: goto label_2137a8;
            case 0x2137D8u: goto label_2137d8;
            case 0x2137E0u: goto label_2137e0;
            case 0x213834u: goto label_213834;
            case 0x213858u: goto label_213858;
            case 0x213978u: goto label_213978;
            case 0x213998u: goto label_213998;
            case 0x2139BCu: goto label_2139bc;
            case 0x2139ECu: goto label_2139ec;
            case 0x213A10u: goto label_213a10;
            case 0x213A14u: goto label_213a14;
            case 0x213A50u: goto label_213a50;
            case 0x213A98u: goto label_213a98;
            case 0x213AD8u: goto label_213ad8;
            case 0x213ADCu: goto label_213adc;
            case 0x213AF0u: goto label_213af0;
            case 0x213B00u: goto label_213b00;
            case 0x213B08u: goto label_213b08;
            case 0x213B0Cu: goto label_213b0c;
            case 0x213B44u: goto label_213b44;
            case 0x213BBCu: goto label_213bbc;
            case 0x213BC8u: goto label_213bc8;
            case 0x213BF8u: goto label_213bf8;
            case 0x213C24u: goto label_213c24;
            case 0x213C2Cu: goto label_213c2c;
            case 0x213C74u: goto label_213c74;
            case 0x213C78u: goto label_213c78;
            case 0x213C7Cu: goto label_213c7c;
            case 0x213C9Cu: goto label_213c9c;
            case 0x213CC8u: goto label_213cc8;
            case 0x213CD0u: goto label_213cd0;
            case 0x213D50u: goto label_213d50;
            case 0x213D54u: goto label_213d54;
            case 0x213D7Cu: goto label_213d7c;
            case 0x213DD0u: goto label_213dd0;
            case 0x213E7Cu: goto label_213e7c;
            case 0x213E88u: goto label_213e88;
            case 0x213EA8u: goto label_213ea8;
            case 0x213EB8u: goto label_213eb8;
            case 0x213EBCu: goto label_213ebc;
            case 0x213EC4u: goto label_213ec4;
            case 0x213F70u: goto label_213f70;
            case 0x213F78u: goto label_213f78;
            case 0x213FE0u: goto label_213fe0;
            case 0x214020u: goto label_214020;
            case 0x214080u: goto label_214080;
            case 0x2140C0u: goto label_2140c0;
            case 0x21410Cu: goto label_21410c;
            case 0x21411Cu: goto label_21411c;
            case 0x214120u: goto label_214120;
            case 0x214198u: goto label_214198;
            case 0x2141A0u: goto label_2141a0;
            case 0x2141E0u: goto label_2141e0;
            case 0x2141ECu: goto label_2141ec;
            case 0x2141F4u: goto label_2141f4;
            case 0x214228u: goto label_214228;
            case 0x214234u: goto label_214234;
            case 0x214264u: goto label_214264;
            case 0x214294u: goto label_214294;
            case 0x2142C4u: goto label_2142c4;
            case 0x2142F4u: goto label_2142f4;
            case 0x21431Cu: goto label_21431c;
            case 0x214320u: goto label_214320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214340u;
}
