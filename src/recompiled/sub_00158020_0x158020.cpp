#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158020
// Address: 0x158020 - 0x158548
void sub_00158020_0x158020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158020_0x158020");
#endif

    ctx->pc = 0x158020u;

    // 0x158020: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x158020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x158024: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x158024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x158028: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x158028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x15802c: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x15802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x158030: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x158030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x158034: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x158034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158038: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x158038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x15803c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15803cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158040: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x158040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
    // 0x158044: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x158044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158048: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x158048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x15804c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15804cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158050: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x158050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
    // 0x158054: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x158054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158058: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x158058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x15805c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x15805cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158060: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x158060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x158064: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x158064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x158068: 0x8c71104c  lw          $s1, 0x104C($v1)
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4172)));
    // 0x15806c: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x15806cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x158070: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x158074: 0x7fa50160  sq          $a1, 0x160($sp)
    ctx->pc = 0x158074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 5));
    // 0x158078: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x158078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x15807c: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x15807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
    // 0x158080: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x158080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158084: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x158088: 0x9442005e  lhu         $v0, 0x5E($v0)
    ctx->pc = 0x158088u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x15808c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x15808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x158090: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x158090u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158094: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x158094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
    // 0x158098: 0x78e80010  lq          $t0, 0x10($a3)
    ctx->pc = 0x158098u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15809c: 0x7fa80140  sq          $t0, 0x140($sp)
    ctx->pc = 0x15809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 8));
    // 0x1580a0: 0x78e70020  lq          $a3, 0x20($a3)
    ctx->pc = 0x1580a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1580a4: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x1580a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x1580a8: 0x7fa70150  sq          $a3, 0x150($sp)
    ctx->pc = 0x1580a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 7));
    // 0x1580ac: 0x0  nop
    ctx->pc = 0x1580acu;
    // NOP
label_1580b0:
    // 0x1580b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1580b4: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1580b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1580b8: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1580bc: 0x2450ffec  addiu       $s0, $v0, -0x14
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1580c0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1580c4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1580c8: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1580c8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1580cc: 0xdba20130  lqc2        $vf2, 0x130($sp)
    ctx->pc = 0x1580ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1580d0: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x1580d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1580d4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1580d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1580d8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1580d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1580dc: 0x70432cc8  ppacw       $a1, $v0, $v1
    ctx->pc = 0x1580dcu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1580e0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1580e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1580e4: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x1580e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1580e8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1580e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1580ec: 0xdba20140  lqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1580ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1580f0: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x1580f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1580f4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1580f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1580f8: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1580f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1580fc: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1580fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x158100: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x158100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x158104: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x158104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x158108: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x158108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15810c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158110: 0xc44149a0  lwc1        $f1, 0x49A0($v0)
    ctx->pc = 0x158110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158114: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x158114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158118: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x158118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15811c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15811cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158120: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x158120u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x158124: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x158124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158128: 0x4a231040  vaddx.w     $vf1, $vf2, $vf3x
    ctx->pc = 0x158128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15812c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x15812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x158130: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x158130u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x158134: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x158134u;
    {
        const bool branch_taken_0x158134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158134u;
            // 0x158138: 0xfba30110  sqc2        $vf3, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158134) {
            ctx->pc = 0x158270u;
            goto label_158270;
        }
    }
    ctx->pc = 0x15813Cu;
    // 0x15813c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x15813cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x158140: 0x4b030043  vaddw.x     $vf1, $vf0, $vf3w
    ctx->pc = 0x158140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158144: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x158144u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x158148: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x158148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15814c: 0xc6250384  lwc1        $f5, 0x384($s1)
    ctx->pc = 0x15814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158150: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x158150u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158154: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x158154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x158158: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x158158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15815c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15815cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158160: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x158160u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x158164: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x158164u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x158168: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x158168u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15816c: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x15816cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x158170: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x158170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158174: 0x0  nop
    ctx->pc = 0x158174u;
    // NOP
    // 0x158178: 0x4503003b  bc1tl       . + 4 + (0x3B << 2)
    ctx->pc = 0x158178u;
    {
        const bool branch_taken_0x158178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158178) {
            ctx->pc = 0x15817Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158178u;
            // 0x15817c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158268u;
            goto label_158268;
        }
    }
    ctx->pc = 0x158180u;
    // 0x158180: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x158180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x158184: 0xc6210388  lwc1        $f1, 0x388($s1)
    ctx->pc = 0x158184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158188: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15818c: 0x0  nop
    ctx->pc = 0x15818cu;
    // NOP
    // 0x158190: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
    ctx->pc = 0x158190u;
    {
        const bool branch_taken_0x158190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158190) {
            ctx->pc = 0x158194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158190u;
            // 0x158194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158268u;
            goto label_158268;
        }
    }
    ctx->pc = 0x158198u;
    // 0x158198: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x158198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15819c: 0x0  nop
    ctx->pc = 0x15819cu;
    // NOP
    // 0x1581a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1581A0u;
    {
        const bool branch_taken_0x1581a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1581a0) {
            ctx->pc = 0x1581A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1581A0u;
            // 0x1581a4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581A8u;
            goto label_1581a8;
        }
    }
    ctx->pc = 0x1581A8u;
label_1581a8:
    // 0x1581a8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1581a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1581ac: 0x0  nop
    ctx->pc = 0x1581acu;
    // NOP
    // 0x1581b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1581B0u;
    {
        const bool branch_taken_0x1581b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1581b0) {
            ctx->pc = 0x1581B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1581B0u;
            // 0x1581b4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581B8u;
            goto label_1581b8;
        }
    }
    ctx->pc = 0x1581B8u;
label_1581b8:
    // 0x1581b8: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x1581b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581bc: 0xc62102c8  lwc1        $f1, 0x2C8($s1)
    ctx->pc = 0x1581bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1581c0: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x1581c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1581c4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1581c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1581c8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1581c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1581cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1581ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1581d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1581d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1581d4: 0x0  nop
    ctx->pc = 0x1581d4u;
    // NOP
    // 0x1581d8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1581D8u;
    {
        const bool branch_taken_0x1581d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1581DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1581D8u;
            // 0x1581dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581d8) {
            ctx->pc = 0x158268u;
            goto label_158268;
        }
    }
    ctx->pc = 0x1581E0u;
    // 0x1581e0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1581e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1581e4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1581e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1581e8: 0x0  nop
    ctx->pc = 0x1581e8u;
    // NOP
    // 0x1581ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1581ECu;
    {
        const bool branch_taken_0x1581ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1581ec) {
            ctx->pc = 0x1581F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1581ECu;
            // 0x1581f0: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1581F4u;
            goto label_1581f4;
        }
    }
    ctx->pc = 0x1581F4u;
label_1581f4:
    // 0x1581f4: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1581f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1581f8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1581f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1581fc: 0x0  nop
    ctx->pc = 0x1581fcu;
    // NOP
    // 0x158200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158200u;
    {
        const bool branch_taken_0x158200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158200) {
            ctx->pc = 0x158204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158200u;
            // 0x158204: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158208u;
            goto label_158208;
        }
    }
    ctx->pc = 0x158208u;
label_158208:
    // 0x158208: 0xc62002d4  lwc1        $f0, 0x2D4($s1)
    ctx->pc = 0x158208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15820c: 0xc62102d8  lwc1        $f1, 0x2D8($s1)
    ctx->pc = 0x15820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158210: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x158210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x158214: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x158214u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x158218: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x158218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15821c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15821cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x158220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x158220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158224: 0x0  nop
    ctx->pc = 0x158224u;
    // NOP
    // 0x158228: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x158228u;
    {
        const bool branch_taken_0x158228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158228u;
            // 0x15822c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158228) {
            ctx->pc = 0x158268u;
            goto label_158268;
        }
    }
    ctx->pc = 0x158230u;
    // 0x158230: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x158230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x158234: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158238: 0x0  nop
    ctx->pc = 0x158238u;
    // NOP
    // 0x15823c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15823Cu;
    {
        const bool branch_taken_0x15823c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15823c) {
            ctx->pc = 0x158240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15823Cu;
            // 0x158240: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158244u;
            goto label_158244;
        }
    }
    ctx->pc = 0x158244u;
label_158244:
    // 0x158244: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x158244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x158248: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15824c: 0x0  nop
    ctx->pc = 0x15824cu;
    // NOP
    // 0x158250: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158250u;
    {
        const bool branch_taken_0x158250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158250) {
            ctx->pc = 0x158254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158250u;
            // 0x158254: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x158258u;
            goto label_158258;
        }
    }
    ctx->pc = 0x158258u;
label_158258:
    // 0x158258: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15825c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158264: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x158264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_158268:
    // 0x158268: 0x14a000a1  bnez        $a1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x158268u;
    {
        const bool branch_taken_0x158268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x158268) {
            ctx->pc = 0x1584F0u;
            goto label_1584f0;
        }
    }
    ctx->pc = 0x158270u;
label_158270:
    // 0x158270: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158278: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x158278u;
    {
        const bool branch_taken_0x158278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158278u;
            // 0x15827c: 0xdba10110  lqc2        $vf1, 0x110($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158278) {
            ctx->pc = 0x1582ACu;
            goto label_1582ac;
        }
    }
    ctx->pc = 0x158280u;
    // 0x158280: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x158284: 0x1428c0  sll         $a1, $s4, 3
    ctx->pc = 0x158284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x158288: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x158288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15828c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x158290: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x158290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x158294: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x158294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x158298: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x158298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x15829c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1582a0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1582a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1582a4: 0x1000ff82  b           . + 4 + (-0x7E << 2)
    ctx->pc = 0x1582A4u;
    {
        const bool branch_taken_0x1582a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1582A4u;
            // 0x1582a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582a4) {
            ctx->pc = 0x1580B0u;
            runtime->cooperativeGuestYield();
            goto label_1580b0;
        }
    }
    ctx->pc = 0x1582ACu;
label_1582ac:
    // 0x1582ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1582acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582b0: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x1582b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1582b4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1582b4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1582b8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1582b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1582bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1582bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1582c0: 0x70071fc9  prot3w      $v1, $a3
    ctx->pc = 0x1582c0u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1582c4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1582c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1582c8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1582c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1582cc: 0x70071f89  pexew       $v1, $a3
    ctx->pc = 0x1582ccu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1582d0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1582d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1582d4: 0xc05a448  jal         func_169120
    ctx->pc = 0x1582D4u;
    SET_GPR_U32(ctx, 31, 0x1582DCu);
    ctx->pc = 0x169120u;
    if (runtime->hasFunction(0x169120u)) {
        auto targetFn = runtime->lookupFunction(0x169120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582DCu; }
        if (ctx->pc != 0x1582DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169120_0x169238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1582DCu; }
        if (ctx->pc != 0x1582DCu) { return; }
    }
    ctx->pc = 0x1582DCu;
    // 0x1582dc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1582dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1582e4: 0x12e20082  beq         $s7, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1582E4u;
    {
        const bool branch_taken_0x1582e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1582E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1582E4u;
            // 0x1582e8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582e4) {
            ctx->pc = 0x1584F0u;
            goto label_1584f0;
        }
    }
    ctx->pc = 0x1582ECu;
    // 0x1582ec: 0x8c4249a8  lw          $v0, 0x49A8($v0)
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18856)));
    // 0x1582f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1582F0u;
    {
        const bool branch_taken_0x1582f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1582f0) {
            ctx->pc = 0x1582F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1582F0u;
            // 0x1582f4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15830Cu;
            goto label_15830c;
        }
    }
    ctx->pc = 0x1582F8u;
    // 0x1582f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1582f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1582fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1582fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158300: 0xc05643c  jal         func_1590F0
    ctx->pc = 0x158300u;
    SET_GPR_U32(ctx, 31, 0x158308u);
    ctx->pc = 0x158304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158300u;
            // 0x158304: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1590F0u;
    if (runtime->hasFunction(0x1590F0u)) {
        auto targetFn = runtime->lookupFunction(0x1590F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158308u; }
        if (ctx->pc != 0x158308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001590F0_0x1590f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158308u; }
        if (ctx->pc != 0x158308u) { return; }
    }
    ctx->pc = 0x158308u;
    // 0x158308: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x158308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_15830c:
    // 0x15830c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15830cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158310: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x158314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158318: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x158318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x15831c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x158320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x158320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158324: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x158324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x158328: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15832c: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x15832cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x158330: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x158334: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x158334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x158338: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x158338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15833c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158340: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158344: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x158344u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x158348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15834c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x158350: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158354: 0x681804  sllv        $v1, $t0, $v1
    ctx->pc = 0x158354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x158358: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x15835c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158360: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x158360u;
    {
        const bool branch_taken_0x158360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158360u;
            // 0x158364: 0x96090002  lhu         $t1, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158360) {
            ctx->pc = 0x1584F0u;
            goto label_1584f0;
        }
    }
    ctx->pc = 0x158368u;
    // 0x158368: 0x86640120  lh          $a0, 0x120($s3)
    ctx->pc = 0x158368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x15836c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x158370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158374: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158374u;
    {
        const bool branch_taken_0x158374 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x158378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158374u;
            // 0x158378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158374) {
            ctx->pc = 0x158390u;
            goto label_158390;
        }
    }
    ctx->pc = 0x15837Cu;
    // 0x15837c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x15837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x158380: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x158380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x158384: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x158384u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x158388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158388u;
    {
        const bool branch_taken_0x158388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158388u;
            // 0x15838c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158388) {
            ctx->pc = 0x1583ACu;
            goto label_1583ac;
        }
    }
    ctx->pc = 0x158390u;
label_158390:
    // 0x158390: 0x10c80004  beq         $a2, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158390u;
    {
        const bool branch_taken_0x158390 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x158394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158390u;
            // 0x158394: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158390) {
            ctx->pc = 0x1583A4u;
            goto label_1583a4;
        }
    }
    ctx->pc = 0x158398u;
    // 0x158398: 0x8c421058  lw          $v0, 0x1058($v0)
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4184)));
    // 0x15839c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15839Cu;
    {
        const bool branch_taken_0x15839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15839c) {
            ctx->pc = 0x1583BCu;
            goto label_1583bc;
        }
    }
    ctx->pc = 0x1583A4u;
label_1583a4:
    // 0x1583a4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1583a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1583a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1583a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1583ac:
    // 0x1583ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1583acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1583b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1583b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1583B4u;
    {
        const bool branch_taken_0x1583b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583B4u;
            // 0x1583b8: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583b4) {
            ctx->pc = 0x158498u;
            goto label_158498;
        }
    }
    ctx->pc = 0x1583BCu;
label_1583bc:
    // 0x1583bc: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1583BCu;
    {
        const bool branch_taken_0x1583bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583BCu;
            // 0x1583c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583bc) {
            ctx->pc = 0x158404u;
            goto label_158404;
        }
    }
    ctx->pc = 0x1583C4u;
    // 0x1583c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1583c8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1583c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1583cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1583CCu;
    {
        const bool branch_taken_0x1583cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583CCu;
            // 0x1583d0: 0xc4614998  lwc1        $f1, 0x4998($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583cc) {
            ctx->pc = 0x1583ECu;
            goto label_1583ec;
        }
    }
    ctx->pc = 0x1583D4u;
    // 0x1583d4: 0x0  nop
    ctx->pc = 0x1583d4u;
    // NOP
label_1583d8:
    // 0x1583d8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1583d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1583dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1583DCu;
    {
        const bool branch_taken_0x1583dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583DCu;
            // 0x1583e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583dc) {
            ctx->pc = 0x158404u;
            goto label_158404;
        }
    }
    ctx->pc = 0x1583E4u;
    // 0x1583e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1583e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1583e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1583ec:
    // 0x1583ec: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1583f0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1583f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1583f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1583f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1583f8: 0x0  nop
    ctx->pc = 0x1583f8u;
    // NOP
    // 0x1583fc: 0x4500fff6  bc1f        . + 4 + (-0xA << 2)
    ctx->pc = 0x1583FCu;
    {
        const bool branch_taken_0x1583fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1583FCu;
            // 0x158400: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583fc) {
            ctx->pc = 0x1583D8u;
            runtime->cooperativeGuestYield();
            goto label_1583d8;
        }
    }
    ctx->pc = 0x158404u;
label_158404:
    // 0x158404: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x158404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x158408: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x158408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15840c: 0xc4450070  lwc1        $f5, 0x70($v0)
    ctx->pc = 0x15840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158410: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x158410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158414: 0x0  nop
    ctx->pc = 0x158414u;
    // NOP
    // 0x158418: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x158418u;
    {
        const bool branch_taken_0x158418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158418u;
            // 0x15841c: 0xc4440074  lwc1        $f4, 0x74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158418) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x158420u;
    // 0x158420: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158424: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x158424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x158428: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x158428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15842c: 0xc4404998  lwc1        $f0, 0x4998($v0)
    ctx->pc = 0x15842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x158434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158438: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x158438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x15843c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15843cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x158440: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x158440u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x158444: 0x46060868  max.s       $f1, $f1, $f6
    ctx->pc = 0x158444u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[6]);
    // 0x158448: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x158448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x15844c: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x15844cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x158450: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x158450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x158454: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x158454u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x158458: 0x46060028  max.s       $f0, $f0, $f6
    ctx->pc = 0x158458u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[6]);
    // 0x15845c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x15845cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x158460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158460u;
    {
        const bool branch_taken_0x158460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158460u;
            // 0x158464: 0x46000b29  min.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158460) {
            ctx->pc = 0x158498u;
            goto label_158498;
        }
    }
    ctx->pc = 0x158468u;
label_158468:
    // 0x158468: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15846c: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x15846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x158470: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x158470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158474: 0xc4404998  lwc1        $f0, 0x4998($v0)
    ctx->pc = 0x158474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15847c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15847cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158480: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x158480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x158484: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x158484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x158488: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x158488u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x15848c: 0x46060028  max.s       $f0, $f0, $f6
    ctx->pc = 0x15848cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[6]);
    // 0x158490: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x158490u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
    // 0x158494: 0x0  nop
    ctx->pc = 0x158494u;
    // NOP
label_158498:
    // 0x158498: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x158498u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15849c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x15849cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1584a0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1584a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1584a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1584a8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1584a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1584ac: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1584acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1584b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1584b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1584b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1584B4u;
    {
        const bool branch_taken_0x1584b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584B4u;
            // 0x1584b8: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584b4) {
            ctx->pc = 0x1584E0u;
            goto label_1584e0;
        }
    }
    ctx->pc = 0x1584BCu;
    // 0x1584bc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1584bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1584c0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1584c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1584c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1584C4u;
    {
        const bool branch_taken_0x1584c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1584C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584C4u;
            // 0x1584c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584c4) {
            ctx->pc = 0x1584E0u;
            goto label_1584e0;
        }
    }
    ctx->pc = 0x1584CCu;
    // 0x1584cc: 0xc056152  jal         func_158548
    ctx->pc = 0x1584CCu;
    SET_GPR_U32(ctx, 31, 0x1584D4u);
    ctx->pc = 0x1584D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584CCu;
            // 0x1584d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158548u;
    if (runtime->hasFunction(0x158548u)) {
        auto targetFn = runtime->lookupFunction(0x158548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584D4u; }
        if (ctx->pc != 0x1584D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158548_0x158548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584D4u; }
        if (ctx->pc != 0x1584D4u) { return; }
    }
    ctx->pc = 0x1584D4u;
    // 0x1584d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1584D4u;
    {
        const bool branch_taken_0x1584d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584d4) {
            ctx->pc = 0x1584F0u;
            goto label_1584f0;
        }
    }
    ctx->pc = 0x1584DCu;
    // 0x1584dc: 0x0  nop
    ctx->pc = 0x1584dcu;
    // NOP
label_1584e0:
    // 0x1584e0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1584e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1584e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584e8: 0xc05636a  jal         func_158DA8
    ctx->pc = 0x1584E8u;
    SET_GPR_U32(ctx, 31, 0x1584F0u);
    ctx->pc = 0x1584ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1584E8u;
            // 0x1584ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158DA8u;
    if (runtime->hasFunction(0x158DA8u)) {
        auto targetFn = runtime->lookupFunction(0x158DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584F0u; }
        if (ctx->pc != 0x1584F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158DA8_0x158da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1584F0u; }
        if (ctx->pc != 0x1584F0u) { return; }
    }
    ctx->pc = 0x1584F0u;
label_1584f0:
    // 0x1584f0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1584F0u;
    {
        const bool branch_taken_0x1584f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1584F0u;
            // 0x1584f4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584f0) {
            ctx->pc = 0x158518u;
            goto label_158518;
        }
    }
    ctx->pc = 0x1584F8u;
    // 0x1584f8: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1584f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1584fc: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x158500: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x158504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158508: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15850c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158510: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x158510u;
    {
        const bool branch_taken_0x158510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158510u;
            // 0x158514: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158510) {
            ctx->pc = 0x1580B0u;
            runtime->cooperativeGuestYield();
            goto label_1580b0;
        }
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x158518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x15851c: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x15851cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x158520: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x158520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x158524: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x158524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x158528: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x158528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x15852c: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x15852cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x158530: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x158530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x158534: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x158534u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x158538: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x158538u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15853c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x15853cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x158540: 0x3e00008  jr          $ra
    ctx->pc = 0x158540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158540u;
            // 0x158544: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1580B0u: goto label_1580b0;
            case 0x1581A8u: goto label_1581a8;
            case 0x1581B8u: goto label_1581b8;
            case 0x1581F4u: goto label_1581f4;
            case 0x158208u: goto label_158208;
            case 0x158244u: goto label_158244;
            case 0x158258u: goto label_158258;
            case 0x158268u: goto label_158268;
            case 0x158270u: goto label_158270;
            case 0x1582ACu: goto label_1582ac;
            case 0x15830Cu: goto label_15830c;
            case 0x158390u: goto label_158390;
            case 0x1583A4u: goto label_1583a4;
            case 0x1583ACu: goto label_1583ac;
            case 0x1583BCu: goto label_1583bc;
            case 0x1583D8u: goto label_1583d8;
            case 0x1583ECu: goto label_1583ec;
            case 0x158404u: goto label_158404;
            case 0x158468u: goto label_158468;
            case 0x158498u: goto label_158498;
            case 0x1584E0u: goto label_1584e0;
            case 0x1584F0u: goto label_1584f0;
            case 0x158518u: goto label_158518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158548u;
}
